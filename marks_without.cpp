#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    char arr[n][m], ch[n], max;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        s[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ch[j] = arr[j][i];
        }

        sort(ch, ch + n);
        max = (ch[n - 1]);

        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == max)
            {
                s[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] > 0)
            count++;
    }
    cout << count << endl;

    return 0;
}