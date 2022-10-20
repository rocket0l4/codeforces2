#include <bits./stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long l, r, a,b,c;
    cin >> l >> r;

   if(l%2 != 0){
      l = l+1; 
   }
   if(r-l<2){
       cout<<"-1"<<endl;
   }
   else{
       a = l;
       b = l+1;
       c = l+1+1;
       cout<<a<<" "<<b<<" "<<c<<endl;
   }
   return 0;
}