#include <bits./stdc++.h>
#include <vector>
#include <algorithm>
#include <string>

#define loop(i, n) for (size_t i = 0; i < n; i++)
using namespace std;
int main()
{
    size_t n, m;
    cin >> n >> m;

    vector<string> grads(n);

    loop(i, n)
    cin >> grads[i];

    vector<bool> successful(n, false);
    loop(subjects, m)
    {
        char best = '0';
        loop(i, n)
        {
            if (grads[i][subjects] > best)
                best = grads[i][subjects];
        }
        loop(i, n)
        {
            if (grads[i][subjects ]== best)
            {
                successful[i] = true;
            }
        }
    }
    cout << count(successful.begin(), successful.end(), true);

    return 0;
}