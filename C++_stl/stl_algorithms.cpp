//stl algorithm for solving questions easily and fast

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){ 
 vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(15);

    //Binary search to find a number -> returns 0 or 1
    cout<<"Finding 9 ->"<<binary_search(v.begin(),v.end(),9)<<endl;

    cout<<"Lower bound of 9 is "<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    cout<<"Upper bound of 9 is "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;

// maximum between numbers
    int a=9;
    int b= 15;
    cout<<"Max ->"<<max(a,b)<<endl;
    cout<<"Min ->"<<min(a,b)<<endl;

//swapping
    swap(a,b);
    cout<<"Swap ->"<<a<<" "<<b<<endl;

//reversing any string
    string s1="Hello";
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

//rotate the vector
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"Rotate ->";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

//sorting the vector
//Based on intro sort ->combination of heap sort, quick sort and insertion sort
    sort(v.begin(),v.end());
    cout<<"Sort ->";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


}