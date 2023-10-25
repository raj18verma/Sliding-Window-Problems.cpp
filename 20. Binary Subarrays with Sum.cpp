// Question Link: https://leetcode.com/problems/binary-subarrays-with-sum/description/

class Solution {
public:

int atmost(vector<int>nums, int goal){
        long long head=0, tail=0, sum=0, ans=0;
        for(head=0; head<nums.size(); head++){
            sum+=nums[head];
            while(tail<=head && sum>goal){
                sum-=nums[tail];
                tail++;
            }
            ans+=head-tail+1;
        }  
        return ans;
}

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        cout<<atmost(nums,goal)<<" "<<atmost(nums,goal-1);
        return atmost(nums,goal) - atmost(nums,goal-1);
    }
};

// yt refer video: https://youtu.be/Pkqq6kv2E6k?si=8tNl2mpKiH_L52Eg
