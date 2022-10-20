#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, l(0), m(0);
    cin >> n;
    bool s(false);

    for (int a, b; cin >> a >> b;)
    {
        if (n == 1 && a % 2 + b % 2 == 1)
        {
            cout << -1;
            return 0;
        }
        if (b % 2 + a % 2 == 1)
        
            s = true;
            l += a;
            m += b;
        
    }
    if (l % 2 == 0 && m % 2 == 0)
        cout << 0 << endl;
    else if (l % 2 == 1 && m % 2 == 1&& s)
        cout << 1 << endl;
    else
        cout << -1 << endl;

    return 0;
}