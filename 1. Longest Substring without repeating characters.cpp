// Quesiton Link:= https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char ,int> mp; 
        int tail=0, head=0, ans=0;
        for(head=0 ;head<s.size(); head++){
            while(mp[s[head]]>0){
                ans=max(ans,head-tail);
                mp[s[tail]]--;
                tail++;
            }
            mp[s[head]]++;
        }
        return ans=max(ans,head-tail);
    }
};


// Refer yt video:- https://youtu.be/dgFqg8nhFRA?si=D5j2IZALYXSnfTsb
