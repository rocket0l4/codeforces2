#include<iostream>
using namespace std;
int main(){
int  matrix[5][5],row ,col;
for(int i =0; i<5; ++i){
    for(int j =0; j<5;++j){
        cin>>matrix[i][j];
        if(matrix[i][j] ==1){
            col = i;
            row = j;
           
        }
    }
}
cout<< abs(col-2) + abs(row -2)<<endl;

    return 0;
}