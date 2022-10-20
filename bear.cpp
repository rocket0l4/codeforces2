#include<bits./stdc++.h>
using namespace std;
int main(){

    int n, c, arr[100], t(0);
    cin>>n>>c;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i =0; i<n-1; i++){

        t = max(t, arr[i] - arr[i+1] - c);
    }
    cout<<t<<endl;


    return 0;
}