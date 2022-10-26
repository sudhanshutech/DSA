// sieve of eratosthenes
// It is a simple, ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the multiples of 2.
// LeetCode: https://leetcode.com/problems/count-primes/
//time complexity: O(nloglogn)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a[n+1];
    for(int i=0;i<=n;i++){
        a[i]=1;
    }
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(a[i]==1){
            for(int j=i*i;j<=n;j=j+i){
                a[j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(a[i]==1){
            cout<<" "<<i;
        }
    }
}

