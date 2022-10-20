#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, t, f, k, joy, max_joy;
    cin >> n >> k >> f >> t;

    if (t > k)
    {
        max_joy = f - (t - k);
    }
    else
    {
        max_joy = f;
    }
    while (--n)
    {
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }

        else
        {
            joy = f;
        }
        if (joy > max_joy)
        {
            max_joy = joy;
        }
    }
        cout << max_joy << endl;

        return 0;
    }