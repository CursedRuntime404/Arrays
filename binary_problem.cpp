//Leetcode problem first and last occurence of a element in a sorted array

class Solution {
public:
   

        int first_Occurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
           int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
                }
                else if(target>nums[mid]){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
               
        }
         return ans;
        }
         int last_Occurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
           int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
                }
                else if(target>nums[mid]){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
                
        }
         return ans;
        }
         vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>sol;
        int last=0,first=0;
       last=last_Occurence(nums,target);
       first=first_Occurence(nums,target);
       sol.push_back(first);
       sol.push_back(last);
       return sol;
        
    }
};