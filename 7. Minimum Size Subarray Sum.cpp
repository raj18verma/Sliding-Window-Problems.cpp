// Question Link:- https://leetcode.com/problems/minimum-size-subarray-sum/submissions/1073651552/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int head=0, tail=0, mini=INT_MAX,sum=0;
        for(head=0; head<nums.size();head++){
            sum+=nums[head];

            while(sum>=target){
                mini=min(mini,head-tail+1);
                sum-=nums[tail];
                tail++;
            }
        }  
        if(mini==INT_MAX) return 0;
        else return mini;
    }
};

// Refer yt video:- https://youtu.be/FcXIqiP_Kog?si=K-z52Ebn_GKl9gck
