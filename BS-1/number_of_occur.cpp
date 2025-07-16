#include <bits/stdc++.h>
using namespace std;

int first_occurence(vector<int>&nums, int x){
    int n = nums.size();
    int low =0, high = n-1;
    int first = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if (nums[mid]==x){
            first = mid;
            high=mid-1;
        }
        else if(nums[mid]<x) low=mid+1;
        else high = mid-1;
    }
    return first;
}

int last_occurence(vector<int>&nums, int x){
    int n = nums.size();
    int low =0, high = n-1;
    int last = -1;
    while(low<=high){
        int mid=low + (high-low)/2;
        if (nums[mid]==x){
            last = mid;
            low=mid+1;
        }
        else if(nums[mid]<x) low=mid+1;
        else high = mid-1;
    }
    return last;
}

pair <int,int> firstAndLastPosition(vector<int>&nums, int x){
    int first = first_occurence(nums,x);
    if (first ==-1) return {-1, -1};
    int last = last_occurence(nums,x);
    return {first,last};
}

int count(vector<int>&nums, int x){
    pair<int,int> ans = firstAndLastPosition(nums,x);
    if (ans.first==-1) return 0;
    return ans.second - ans.first + 1;
}