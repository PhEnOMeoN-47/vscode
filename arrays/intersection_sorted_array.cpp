#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> A = {1,2,2,3,3,4,5,6}, B = {2,3,3,5,6,6,7};
    int i = 0, j = 0;
    int n1 = A.size(), n2 = B.size();
    vector<int> ans;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            i++;
        }else if(B[j]<A[i]){
            j++;
        }else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    for (auto it : ans){
        cout << it << " ";
    }
    return 0;
}