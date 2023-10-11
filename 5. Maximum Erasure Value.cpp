// Question Link:- https://leetcode.com/problems/maximum-erasure-value/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int head=0, tail=0, ans=0, sum=0;
        unordered_map<int,int>mp;
        for(head=0; head<nums.size(); head++){
            mp[nums[head]]++;

            while(mp[nums[head]]>1){
                ans=max(ans,sum);
                sum-=nums[tail];
                mp[nums[tail]]--;
                tail++;
            }
            if(mp[nums[head]]==1) sum+=nums[head];
        }    
        return max(sum,ans);
    }
};

// Refer yt video:- https://youtu.be/FFTWsyFTsJU?si=DfWtRrTJjVZeZLjW
