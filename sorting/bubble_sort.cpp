//Bubble sort

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int round;
    for(round=0;round<n-1;round++){
        bool swapped = false;
        for(i=0;i<n-1-round;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    cout<<"Sorted order"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}