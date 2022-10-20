#include <bits./stdc++.h>
using namespace std;
int main()
{
    int pos = 0;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    cout << pos + 1 << endl;
}
