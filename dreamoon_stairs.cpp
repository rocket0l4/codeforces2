#include <bits./stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m, count;
     cin >> n >> m;
    
        if (m > n)
            count = -1;
        else
        {
            if (n % 2 == 0)
                count = n / 2;

            else
                count = (n / 2) + 1;

            while (count % m != 0)
            {
                count++;
            }
        }
        cout << count;
    

    return 0;
}