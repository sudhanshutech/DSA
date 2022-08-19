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
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

}

// output:
// *
// **
// ***
// ****



////////////////////////////////////////////////////////////
// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }

// output:
// 1
// 2 2
// 3 3 3
// 4 4 4 4



/////////////////////////////////////////////////
// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int row = 1;
//     int count = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }

// output:
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 