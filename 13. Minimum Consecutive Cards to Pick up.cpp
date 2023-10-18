// Question Link:- https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
        int head=0,tail=0,minans=INT_MAX;
        
        for(head=0;head<cards.size();head++){
            mp[cards[head]]++;
            
            while(mp[cards[head]]>1){   
                minans=min(minans,head-tail+1);   
                mp[cards[tail]]--;         
                tail++;
            }
        }
        if(minans==INT_MAX) return -1;
        else return minans; 
    }
};

// yt refer video:- https://youtu.be/C3zqqBI_aRM?si=b5dcBgLTkESE4GzZ
