// Question Link:- https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt1=0, cnt0, n=nums.size();
        cnt1=count(nums.begin(),nums.end(),1);

        int window_size=cnt1;

        for(int i=0; i<window_size; i++) if(nums[i]==0) cnt0++;
        int mn=cnt0;

        for(int i=window_size; i<window_size+n; i++){
            if(nums[i%n]==0) cnt0++;
            if(nums[i-window_size]==0) cnt0--;

            mn=min(mn,cnt0);
        }
        return mn;
    }
};

// yt refer video:- https://youtu.be/tIOXnCmzdXo?si=GrOBZd2PPIp0OYhH
