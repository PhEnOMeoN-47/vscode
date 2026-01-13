#include <iostream>
#include <vector>
#include <map>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k){
    int n = a.size();
    long long sum = 0;
    int maxLen = 0,i;  
    map<long long, int> preSumMap;
    for(i=0;i<n;i++){
        sum+= a[i];
        //case 1 : subarray from index 0
        if(sum==k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        // rem exists in map
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];//finds length of rem
            maxLen = max(maxLen,len);
        }
        //sum doesn't exist in map(useful if there are 0's in map)
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }

    }
    return maxLen;
}

int main(){
    vector<int> arr = {1,2,3,1,1,1,4};
    cout << longestSubarrayWithSumK(arr, 3);
}