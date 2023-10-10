/*
1. Global Variable:- head,tail,ans=0, var
2. Operation Perform
3. While (invalid case) to make it valid, update tail
4. ans update
5. return ans


T.C:- O(n)

Ques:- How to know problem is window sliding?
Ans:- always talk about subarray & max/min length


*/    



int tail = 0, ans = 0, sum = 0;
for (int head = 0; head < n; head++)
{
    sum += arr[head];
    while (sum > givenSum)
    {
        sum = sum - arr[tail];
        tail++;
    }
    ans = max(ans, (head - tail + 1));
}
return ans;
