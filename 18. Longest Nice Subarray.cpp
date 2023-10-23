// Question Link: https://leetcode.com/problems/longest-nice-subarray/description/

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int head=0, tail=0, ans=0, result=0;
        for(head=0; head<nums.size(); head++){
            while((ans&nums[head])>0){
                ans^=nums[tail];
                tail++;
            }
            ans|=nums[head];
            result=max(result,head-tail+1);
        }   
        return result;
    }
};

// yt refer video:- https://youtu.be/eGn1s0ajPkQ?si=D9puh99o104ncgmP
