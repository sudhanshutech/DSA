//Check that only a and b are present in the string and starts with a and end with b.
#include<iostream>
using namespace std;
bool Check(string k){

    for(int i=0;i<k.length();i++){
        if(k[i]!='a' && k[i]!='b'){
            cout<<"INVALID"<<endl;
            exit(0);
        }
    }
    
    if(k[0]=='a' && k[k.size()-1]=='b')
        return true;
    else
        return false;
    
}

int main(){ 
    string k;
    cout<<"Enter the string: ";
    cin>>k;
    if(Check(k))
        cout<<"Accepted";
    else
        cout<<"Rejected";
    return 0;
   

}
