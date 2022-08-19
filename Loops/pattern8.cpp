#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

}


//logic:
// i+j-1=1
// add both sides 'A'-1
// i+j-1+'A'-1=1+'A'-1
// 'A'+i+j-2='A'

// output:
// A B C D 
// B C D E
// C D E F
// D E F G 