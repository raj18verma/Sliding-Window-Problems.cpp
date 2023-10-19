// Question Link:- https://leetcode.com/problems/frequency-of-the-most-frequent-element/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long head=0, tail=0, n=nums.size(), ans=0, sum=0;
        for(head=0; head<n; head++){
            sum+=nums[head];
            if((head-tail+1)*nums[head]-sum>k){
                sum-=nums[tail];
                tail++;
            }
            ans=max(ans,head-tail+1);
        }
        return ans;
    }
};

// yt refer video:- https://youtu.be/4Gr3TduPouM?si=8mRkab7vQc17qihl
