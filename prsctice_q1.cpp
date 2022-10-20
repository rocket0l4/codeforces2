#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans =0;
        cin>>n;
        if(n%7 != 0){
            n +=1;
            ans = n;
        }else if(n%7 == 0){
            ans = n;
        }
        cout<<ans<<endl;
    }



    return 0;
}