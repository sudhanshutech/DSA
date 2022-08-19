//First and last occurence of a number

#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    int ans = -1;
    int mid = low + ((high-low)/2);
    while(high>=low){
        if(arr[mid]==key){
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid]>key){
            high = mid -1;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
     mid = low + ((high-low)/2);
    }
    return ans;
}

int lastOccur(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    int ans = -1;
    int mid = low + ((high-low)/2);
    while(high>=low){
        if(arr[mid]==key){
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid]>key){
            high = mid -1;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
     mid = low + ((high-low)/2);
    }
    return ans;
}

int main(){
    int a[12] = {2,3,3,3,3,3,3,3,3,3,5,6};
    int key = 3;
    cout<<"THE FIRST OCCURENCE OF 3 IS AT INDEX-> "<<firstOccur(a,12,key)<<endl;
    cout<<"THE LAST OCCURENCE OF 3 IS AT INDEX-> "<<lastOccur(a,12,key)<<endl;
}