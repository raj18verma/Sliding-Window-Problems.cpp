// Question Link:- https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/description/

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
       long long head=0, tail=0, ans=0;
       for(head=1; head<prices.size(); head++){
           while(head<prices.size() && prices[head]-prices[head-1]==-1){
               ans+=(head-tail),head++;
           }
           tail=head;
       } 
       return ans+prices.size();
    }
};

// yt refer video: https://youtu.be/r5rukCeWps0?si=AP9BNDpkH55uh6Ht
