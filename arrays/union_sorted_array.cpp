#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {1,1,2,3,4,5}, b = {2,3,4,4,5,6};
    int i =0, j=0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> temp;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(temp.size() == 0 || temp.back() != a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }
        else {
            if(temp.size() == 0 || temp.back() != b[j]){
                temp.push_back(b[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(temp.size() == 0 || temp.back() != b[j]){
            temp.push_back(b[j]);
        }
        j++;
    }

    while(i<n1){
        if(temp.size()==0 || temp.back() != a[i]){
            temp.push_back(a[i]);
        }
        i++;
    }

    for(auto it : temp){
        cout << it << " ";
    }

    return 0;
}