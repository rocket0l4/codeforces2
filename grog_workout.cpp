#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int chest = 0, biceps = 0, back = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            chest += arr[i];
        }
        else if (i % 3 == 1)
        {
            biceps += arr[i];
        }
        else
        {
            back += arr[i];
        }
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest";
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps";
    }
    else
    {
        cout << "back";
    }

    return 0;
}