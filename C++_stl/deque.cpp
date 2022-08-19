/*
Deque or Double Ended Queue is a type of queue in which
 insertion and removal of elements can either
 be performed from the front or the rear. Thus, 
 it does not follow FIFO rule (First In First Out).  
 */

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    //inserting elements
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(5);
    d.push_front(6);

    //random access is possible
    cout<<"Element at index 2 is "<<d[2]<<endl;

    cout<<"Front element is "<<d.front()<<endl;
    cout<<"Back element is "<<d.back()<<endl;

    cout<<"Before erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.erase(d.begin());
    d.erase(d.begin()+1);
    cout<<"After erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

}
