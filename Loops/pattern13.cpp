//diamond pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int row = 1;
    
    while(row<=n){
    int space = n-row;
    while(space){
        cout<<" ";
        space--;
    }
    int col = 1;
    while(col<=row){
        cout<<"*";
        col++;
    }
    col = 1;
    while(col<=row-1){
        cout<<"*";
        col++;
    }
    cout<<endl;
    row++;

}

row = 1;
   while(row<=n){
     int space = row-1;
       while(space){
        cout<<" ";
        space--;
    }
   
int col = 1;
    while(col<=n-row+1){
        cout<<"*";
        col++;
    }
    col=1;
    while(col<=n-row){
        cout<<"*";
        col++;
    }
    cout<<endl;
    row++;
   }
}