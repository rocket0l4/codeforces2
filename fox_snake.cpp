#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    // for(int i =1; i<=n;i++){
    //     if(i%4==2){
    //         for(int i =1; i<m;i++){
    //             cout<<".";
    //         }
    //         cout<<"#";
    //     }else if(i%4==0){
    //         cout<<"#";
    //         for(int i =1; i<m; i++){
    //             cout<<".";
    //         }
    //     }else{
    //         for(int i =1;i<=m; i++){
    //            cout<<"#";
    //         }
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i % 4 == 0)
            {

                if (j == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            else if (i % 4 == 2)
            {
                if (j == m - 1)
                    cout << "#";
                else
                    cout << ".";
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}