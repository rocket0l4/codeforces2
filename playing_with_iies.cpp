#include <bits./stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a, b, f(0), g(0), h(0);
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    
        if (abs(a - i) < abs(b - i))
            f++;
        else if (abs(b - i) < abs(a - i))
            g++;
        else
            h++;

    cout<<f<<" "<<h<<" "<<g<<endl;
    return 0;
}