void reverseString(vector<char> &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s.at(i), s.at(n - 1 - i));
    }
}