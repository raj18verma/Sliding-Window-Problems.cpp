// Question Link:- https://leetcode.com/problems/count-the-number-of-good-subarrays/description/

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int head=0, tail=0, n=nums.size();
        unordered_map<int,int>mp;
        long long count=0, ans=0;

        for(head=0; head<n; head++){
            count+=mp[nums[head]];
            mp[nums[head]]++;

            while(tail<head && count>=k){
                ans+=n-head;
                mp[nums[tail]]--;
                count-=mp[nums[tail]];
                tail++;
            }
        }
        return ans;
    }
};

// yt refer video: https://youtu.be/Dit726BVBPI?si=eIAoM14K6kkzHKGf
