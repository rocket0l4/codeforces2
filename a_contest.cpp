#include <bits./stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c, d, n, m;
    cin >> a >> b >> c >> d;

     n = max(3 * (a / 10), (a - ((a*c)/250)));
     m = max(3 * (b / 10), (b - ((b*d)/250)));

    if (n > m)
    {
        cout << "Misha"<<endl;
    }
    else if (n < m)
    {
        cout << "Vasya"<<endl;;
    }
    else
    {
        cout << "Tie"<<endl;
    }

    return 0;
}