#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

}


// #include <iostream>

// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }

// output:
// 4321
// 4321
// 4321
// 4321