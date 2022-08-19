//Selection Sort

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
 for(i=0;i<n-1;i++){
    int minIndex = i;
    for(j=i+1;j<n;j++){
       if(a[j]<a[minIndex]){
        minIndex=j;
       }
    }
    swap(a[minIndex],a[i]);
 }
 cout<<"Sorted order"<<endl;
 for(i=0;i<n;i++){
    cout<<a[i]<<endl;
 }

}