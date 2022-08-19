#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col=1;
        int value = row;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

}


// output:
// 1
// 2 3
// 3 4 5
// 4 5 6 7 
// 5 6 7 8 9 

////////////////Another Way//////////////////

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
//             cout<<row+col-1<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }



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
//             cout<<row-col+1<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// }


// output:
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 