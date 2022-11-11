 /*fast exponentiation or modular exponentiation
 Time Complexity: O(log n)
 Space Complexity: O(1)
 explanation: modular exponentiation is a method to calculate the value of a number raised to a power in the most efficient way. 
 It is used in many algorithms like RSA algorithm for public key cryptography,
 Pollard's rho algorithm for factorization, etc.

 Use of 1LL in the code is to avoid overflow of the variable ans.
 */

#include<iostream>
using namespace std;

int main()
{
    int a,b,m;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Enter the value of m: ";
    cin>>m;
    int ans=1;
    while(b>0){
        if(b&1){
            ans=( 1LL*(ans)*(a)%m)%m;
        }
        a=( 1LL*(a)%m*(a)%m)%m;
        b=b>>1;
    }
    cout<<"Answer is: "<<ans;
}