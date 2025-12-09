#include <map>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    map<int, string> m;
    m[1]= "abc";
    m[2]= "xyz";
    m[3]= "lmn";
    //m.insert({4, "hello"});

    for(auto &pr : m){
        cout<<pr.first << " "<< pr.second<<endl;
    }

    string s = "hello";
    map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
    for(auto &i : mp){
        cout<<i.first << " "<< i.second<<endl;
    }

}