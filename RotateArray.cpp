#include<iostream>
#include<vector>
using namespace std;


    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        int n=nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];//basically hume temp iki is position par nums[i] ki value ko store karana hai.
        }
        
        nums=temp;//bas phir jo bhi temp ka data hai use seedha nums mein copy kr do
    }