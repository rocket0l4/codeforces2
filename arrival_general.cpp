#include<iostream>
using namespace std;
int findmax(int arr[], int n){
    int j = 0, max;
    max = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            j = i;

        }
    }
    return j;
}

int findmin(int arr[], int n){
    int k =0, min;
    min = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i] <= min){
            min = arr[i];
            k = i;
        }
    }
    return k;
}

int main(){
int n, arr[200]; 
cin>>n;

for(int i =0; i<n; i++)
    cin>>arr[i];
    
    int j = findmax(arr,n);
    int k = findmin(arr,n);
    int count;
    if(k>j)
        count = n - k + j - 1;

    else
        count = n - k + j - 2;
    cout<<count<<endl;




    return 0;
}