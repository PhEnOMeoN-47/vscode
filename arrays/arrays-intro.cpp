#include <iostream>
#include <array>
#include <vector>

using namespace std;
//array<int,6> arr;
vector<int> slar = {1,3,2,7,3,4};
vector<int> slargest(vector<int> slar){
    int first=slar[0],second = -1;
    int m = slar.size();
    for (int i=1;i<m;i++){
        if(slar[i]>first){
            second = first;
            first = slar[i];
        }else if(slar[i]>second && slar[i]<first){
            second = slar[i];
        }
    }
    return {second,first};
}

int arr[6] = {1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int main(){
    for(int i=0; i<n;i++)
    cout << arr[i]<<endl;
    cout << endl;
    vector<int> result = slargest(slar);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}





