// Question Link: https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:

   int atmost(vector<int>&nums, int k){
        int head=0, tail=0, ans=0;

        for(head=0; head<nums.size(); head++){
            if(nums[head]%2!=0) k--;

            while(k<0){
                if(nums[tail]%2!=0) k++;
                tail++;
            }
            ans+=head-tail+1;
        }
        return ans;
   }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};

// yt refer video: https://youtu.be/O0bbpT710KA?si=C9BkYOytODIYfZ2i

