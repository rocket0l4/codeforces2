#include<bits./stdc++.h>
using namespace std;
int main(){
int arr[250];
int n, p, q;
cin>>n>>p>>q;
int count = 0;
    for(int i =0; i<p; i++){
        if(arr[i] != arr[i+1] ){
            count++;
        }
        for(int j =0; j<q; j++){
            if(arr[i] != arr[i+1]){
                count++;
            }
        }
        if(n == (count)){
            cout<<"I become the guy.";
        }
        else{
            cout<<"Oh, my keyboard!";
        }
    }
   



    return 0;
}