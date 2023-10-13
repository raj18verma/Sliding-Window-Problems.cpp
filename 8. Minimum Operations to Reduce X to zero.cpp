// (THIS QUESTION CAN ALSO BE STATED THAT lONGEST SUBARRAY HAVING SUM EQUALS TO TOTAL SUM OF (ARRAY-X) )

// Question Link:- https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int reqsum=sum-x;
        if(reqsum==0) return nums.size();
        if(reqsum<0) return -1;

        int head=0,tail=0,mxlen=0,mysum=0;
        
        for(head=0; head<nums.size(); head++){
            mysum+=nums[head];
            while(mysum>reqsum){
                mysum-=nums[tail];
                tail++;
            }
            if(mysum==reqsum) mxlen=max(mxlen,head-tail+1);
        }
        if(mxlen==0){
            return -1;
        }else{
            return (nums.size()-mxlen);
        }
    }
};

// yt refer video:- https://youtu.be/dhjeQHWFO24?si=hlmSdQ24jw1gpm1c





// Greedy Approach:-
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            mp[sum] = i;
        }
        if(sum < x) return -1;
        int restSum  = sum - x;
        int longest  = INT_MIN;
        sum = 0;
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            if(mp.count(sum-restSum)) {
                longest = max(longest, i-mp[sum-restSum]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (longest == INT_MIN) {
                return -1;
            } else {
                return n - longest;
            }
        }
        return -1;
    }
};

// YT refer video:- https://youtu.be/w7u9sMlx7zc?si=ERlirUjm97pY6dHA
