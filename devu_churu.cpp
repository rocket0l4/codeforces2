#include <bits./stdc++.h>
using namespace std;

int main()
{

    int n, d;
    cin >> n >> d;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;
    }

    int between = (n - 1) * 10;

    if (sum + between > d)
        cout << "-1";

    else
    {
        int cu = (d - sum) / 5;
        cout << cu << endl;
    }

    return 0;
}