#include<bits./stdc++.h>
using namespace std;
void solution(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int val = abs(x2-x1) + abs(y2-y1);

    if(x1 == x2)
    {
        cout<< x1+val<<" "<<y1<<" "<<x2+val<<" "<<y2<<endl;
    }
    else if
        (y1 == y2)
    {    
        cout<<x1<<y1+val<<" "<<x2<<" "<<y2+val<<endl;
    }
    else if(((abs(y2-y1)) == abs(x2-x1))){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }else{
        cout<<-1;
    }
}
int main(){
    solution();



    return 0;
}