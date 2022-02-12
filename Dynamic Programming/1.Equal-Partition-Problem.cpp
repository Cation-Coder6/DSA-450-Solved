int equalPartition(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum % 2)
        return false;
    else
    {
        int target = sum / 2;
        int t[n + 1][target + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                if (i == 0 && j != 0)
                    t[i][j] = 0; // if we have target>0 but no of elements = 0
                else if (j == 0)
                    t[i][j] = 1; // if we have target = 0 then empty set is also accepted
                else if (j >= a[i - 1])
                    t[i][j] = (t[i - 1][j - a[i - 1]] || t[i - 1][j]); // if current number is smaller or equal to required sum
                else
                    t[i][j] = t[i - 1][j]; // if current number is greater than required sum
            }
        }
        return t[n][target];
    }
}