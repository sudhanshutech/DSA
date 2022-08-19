#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = n;
         while(col>=row)
        {
            cout<<n-col+1;
            col--;
        }

        col=n;
         int spaces=1;
        while(spaces<=2*row-2)
        {
            cout<<"*";
            spaces++;
        }

        while(col>=row){
            cout<<col-row+1;
            col--;
        }
        cout<<endl;
        row++;

    }
}   

// output:
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1