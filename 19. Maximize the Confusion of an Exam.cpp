// Question Link: https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int head=0, tail=0, ans=0, cnt[26]={};
        for(head=0; head<answerKey.size();head++){
            cnt[answerKey[head]-'A']++;
            while(head-tail+1-*max_element(cnt,cnt+26)>k){
                cnt[answerKey[tail]-'A']--;
                tail++;
            }
            ans=max(ans,head-tail+1);
        }  
        return ans;
    }
};

// yt refer video: https://youtu.be/PXkRCHW9X54?si=zCSiFDlDmxBH0ppX
