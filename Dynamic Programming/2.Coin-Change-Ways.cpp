long long int count(int s[], int m, int n)
{

    long long int t[m + 1][n + 1];

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 && j != 0)
                t[i][j] = 0;
            else if (j == 0)
                t[i][j] = 1;
            else if (s[i - 1] <= j)
                t[i][j] = t[i - 1][j] + t[i][j - s[i - 1]];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[m][n];
}