
//Check string only with 0 and 1 and divisible by 3

#include<iostream>
#include<math.h>
using namespace std;

bool Check(string k){
    for(int i=0;i<k.length();i++){
        if(k[i]!='0' && k[i]!='1'){
            cout<<"INVALID"<<endl;
            exit(0);
        }
    }
    
    int dec=0;
    for(int i=0;i<k.length();i++){
        if(k[i]=='1')
            dec+=pow(2,k.length()-i-1);
    }

    cout<<"decimal number = "<<dec<<endl;

    if(dec%3==0)
        return true;
    else
        return false;

}

int main(){ 
    string k;
    cout<<"Enter the string: ";
    cin>>k;
    if(Check(k))
        cout<<"Accept";
    else
        cout<<"Reject";
    return 0; 
}