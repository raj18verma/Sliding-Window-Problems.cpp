/*
1. Declare Global Variable like head,tail,ans, operation_var
2. Use Some data structure as per question requirement (map,vector,etc..)
3. Put for loop using head variable to sum whole window
4. Perform operation (asked in question)
5. If ans become invalid then go inside while loop to make it valid.
6. Inside while loop exclude the values using tail variable and update tail variable
7. Update ans and finally return ans


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
