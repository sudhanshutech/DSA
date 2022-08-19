// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int row = 1;
//     char start='A';
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<start<<" ";
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// output:
// A 
// B C
// D E F
// G H I J


///////////////////////////////////////
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch = 'A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}

// output:
// A 
// B C
// C D E
// D E F G