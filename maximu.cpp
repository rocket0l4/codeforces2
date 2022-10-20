#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    int n,count =0,sum =0;
	    cin>>n;
	    int arr[n];
	    for(int i =0; i<n;i++){
	        cin>>arr[i];
	        
	    }
	    sort(arr,arr+n);
	    count = (arr[n-1] - arr[0])*(arr[n-2]);
        cout<<count<<endl;
	    
	}

	
	return 0;
}
