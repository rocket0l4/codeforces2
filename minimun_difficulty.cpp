#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], d[n - 1], s(0), m(100);
    cin>>arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        d[i] = arr[i] - arr[i - 1];
        s = max(s, d[i]);
         m = max(min(m, d[i] + d[i - 1]), s);
    }
    // for (int i = 2; i < n ; i++)
        // m = max(min(m, d[i] + d[i - 1]), s);

    cout << m << endl;

    return 0;
}