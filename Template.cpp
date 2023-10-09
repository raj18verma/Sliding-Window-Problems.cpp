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
