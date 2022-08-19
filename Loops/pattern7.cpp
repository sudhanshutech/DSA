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
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

}

// output:
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E


//////////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch = 'A'+col-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }

// output:
// A B C 
// A B C 
// A B C 


//////////////////////////////////////////

// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int row = 1;
//     char start = 'A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<start<<" ";
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }

// output:
// A B C 
// D E F
// G H I