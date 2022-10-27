// euclid algo for gcd
// means greatest common divisor of two numbers is the largest number that divides both of them.
// formula: gcd(a,b)=gcd(b,a%b)
// time complexity: O(log(min(a,b)))

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    if(a==0)
    return b;

    if(b==0)
    return a;
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout<<"GCD is: "<<a;
}