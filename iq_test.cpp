#include<bits./stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cin>>n;
    int count =0, sum =0;
    for(int i=0;i<n; i++ ){
        cin>>arr[i];
        if(arr[i]%2 == 0 ){
            count ++;
        }
        else{
            sum++;
        }
    }
    if(count> sum){
        for(int i =0; i<n; i++){
            if(arr[i]%2 != 0){
                cout<<i+1;
                break;
            }
        }
    }else{
        for(int i =0; i<n; i++){
            if(arr[i]%2 == 0){
                cout<<i+1;
                break;
            }
        }
    }


    return 0;
}