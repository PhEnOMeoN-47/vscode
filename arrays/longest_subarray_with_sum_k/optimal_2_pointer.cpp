#include <iostream>
#include <vector>

using namespace std;

int optimalLongestSubarray(vector<int> a, long long k){
    int right=0, left=0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n){
        while(left <= right && sum>k){
            sum -= a[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if (right<n){
            sum+=a[right];
        }
        
    }
    return maxLen;
}
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,3,3};
    cout << optimalLongestSubarray(arr, 6);
}
