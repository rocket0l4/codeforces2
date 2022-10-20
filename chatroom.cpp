#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    string  s , word = "hello";
    
    cin>>s;
    int count =0, a = 0;

    for(int i =0; i<s.length(); i++){
        if(s[i] == word[a]){
         a++;
         count++;  
         if(count == 5){
             break;
         } 
       }
    }
        if(count == 5){
            cout<<"Yes"<<endl;
            
        }
        else{
            cout<<"No"<<endl;
            
        }

    return 0;
}