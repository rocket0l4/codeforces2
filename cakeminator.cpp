#include <bits./stdc++.h>
using namespace std;
int main()
{
    int r, c, count1 = 0, count2 = 0;
    cin >> r >> c;
    string s[r + 3];
    for (int i = 0; i < r; i++)
        cin >> s[i];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            if (s[i][j] == 'S')
            {
                count1++;
                break;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {

            if (s[j][i] == 'S')
            {
                count2++;
                break;
            }
        }
    }
    cout << (r * c) - (count1 * count2) << endl;

    return 0;
}