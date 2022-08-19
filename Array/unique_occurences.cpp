//check unique numbers of occurences in an array and print true if all are unique
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<"false";
                return 0;
            }
        }
    }
    cout<<"true";
}