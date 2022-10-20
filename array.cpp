#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, arr[101], a[101], b[101], c[101], count = 0;
    cin >> n;
    for (int i = 0; i, n; i++)
    {
        cin >> arr[i];

        sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {
            if (a[i] < 0)
            {
                count = a[i];
                cout << count << endl;
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (b[i] < 0)
            {
                count = b[i];
                cout << count << endl;
            }
        }

        for (int i = 3; i < n; i++)
        {
            if(c[i] == 0)
            {
                count = c[i];
                cout << count << endl;
            }
        }
    }

    return 0;
}