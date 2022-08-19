//Binary Search

#include<iostream>
using namespace std;

int BinarySearch(int arr [],int low,int key,int high){
if(high>=low){
    int mid = low + ((high-low)/2);
 if(arr[mid]==key){
    return mid;
 }
 if(arr[mid]>key){
    return BinarySearch(arr,low,key,mid-1);
 }
 else if(arr[mid]<key){
    return BinarySearch(arr,mid+1,key,high);
}
}
  return -1;

}

int main(){
int arr[] = {3,7,21,32,50,55,78};
int key = 22;
int n = sizeof(arr)/sizeof(arr[0]);
int result = BinarySearch(arr,0,key,n-1);
if (result == -1){
    cout<<"Element not found";
}
else{
    cout<<"element found at index "<<result;
}
}