/*
A vector is a one-dimensional data structure and all of its elements are of the same data type. 
A factor is one-dimensional and every element must be one of a fixed set of values, called the levels of the factor.
 A matrix is a two-dimensional data structure and all of its elements are of the same type.
*/

#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    //checking if vector is empty
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;           //size of vector


//deleting elements from vector
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<"";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<"";
    }cout<<endl;
}
