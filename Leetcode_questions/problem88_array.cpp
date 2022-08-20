//Merging two sorted arrays
//leetcode question : https://leetcode.com/problems/merge-sorted-array/

#include<iostream>
using namespace std;
int main(){ 
    int a[5]={1,4,7,9,18};
    int n=sizeof(a)/sizeof(a[0]);
    int b[4]={2,3,8,15};
    int m=sizeof(b)/sizeof(b[0]);
    int c[10];
    int i=0,j=0,k=0;
   while(i<n && j<m){
       if(a[i]<b[j]){
           c[k++]=a[i++];
       }
       else{
           c[k++]=b[j++];
       }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }

    cout<<"Merged array is "<<endl;
    for(int i=0;i<k;i++){
        cout<<c[i]<<endl;
    }
}