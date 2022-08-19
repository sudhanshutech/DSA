/*
A priority queue is a special type of queue in which each element is associated with a priority value.
 And, elements are served on the basis of their priority. That is, higher priority elements are served first.
 However, if elements with the same priority occur, they are served according to their order in the queue.
*/


#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi;

    // ṃin heap
    priority_queue<int,vector<int>, greater<int> > mini;

    maxi.push(3);
    maxi.push(7);
    maxi.push(1);
    maxi.push(6);

    mini.push(5);
    mini.push(0);
    mini.push(1);
    mini.push(3);

    cout<<"Size-> "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<"";
        maxi.pop();
    }cout<<endl;

    for(int i=0;i<n;i++){
        cout<<mini.top()<<"";
        mini.pop();
    }cout<<endl;

}