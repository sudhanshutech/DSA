//sum of even numbers
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin >> n;
    int sum=0,i=2;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout <<"sum = "<< sum;
}