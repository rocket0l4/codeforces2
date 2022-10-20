#include <bits./stdc++.h>
using namespace std;
int main()
{
    int k, l, imp(-1);
    cin >> k >> l;
    while (l % k == 0)
    {
        l = l/ k;
        imp += 1;
    }
    if (imp >= 0 && l == 1)
    {
        cout << "YES" << endl
             << imp << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}