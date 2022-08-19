#include <iostream>
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
        cout<<col;
        col++;
    }

    int start = row-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    row++;
    }
}

// output:
//    1
//   121
//  12321
// 1234321