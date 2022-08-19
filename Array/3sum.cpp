#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size";
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int x,y,z;
     a[0]=x;
    for(int i = 0;i<n;i++){
        if(a[i]==-x){
            y=-x;
        }
        
    }
    cout<<"Pairs are"<<x<<","<<y;
    
}