// Question Link:- https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>hash(26);
        vector<int>temp(26);
        for(int i=0; i<p.size(); i++){
            hash[p[i]-'a']++;
        }
        int s2=p.size();
        int head=0, tail=0;
        for(head=0; head<s.size(); head++){
            if(temp==hash) ans.push_back(tail);
            while(head-tail+1>s2){
                temp[s[tail]-'a']--;
                tail++;
            }
            temp[s[head]-'a']++;
        }
        if(temp==hash) ans.push_back(tail);
        return ans;
    }
};

// yt refer video:- https://youtu.be/0cSWtiaopSU?si=lBhoDG8T7oygW6Sj
