#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 1, n, sum,count =0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i >= A.size() && 0 <= sum && sum < x)
            count++;

        if (i >= A.size() || sum >= x)
            count == 0;

        return count(i + 1, sum, x) + count(i + 1, sum < 0 ? A[i] : sum * A[i], x);
    }
    cout << count(0, -1, x);

    return 0;
}