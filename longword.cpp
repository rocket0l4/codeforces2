#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    string s;
    cin >>t;

   for(int i =0; i<t; i++){
        cin>>s;
        int l = s.length();
      if(l > 10)
      {
        cout<< s[0] << l - 2 << s[l -1 ]<<endl;

      } 
       else
      {
       cout<< s <<endl;
      }
   
   }

    return 0;
}