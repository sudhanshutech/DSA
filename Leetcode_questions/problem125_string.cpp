//Check string is palindrome or not

#include<iostream>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        return true;
    else
        return false;
    
}


char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool CheckPalindrome(char c[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowercase(c[s]) != toLowercase(c[e]))
        {
            return 0;
        }
        else{
            if(!valid(c[s])){
                s++;
                continue;
            }
            if(!valid(c[e])){
                e--;
                continue;
            }
            s++;
            e--;
        }
    }
    return 1;

}

int main(){ 
    int n;
    cout<<"Enter the size of string: ";
    cin>>n;
    char c[n];
    cout<<"Enter the elements"<<endl;
    cin>>c;
    cout<<"Palindrome or not: "<<CheckPalindrome(c,n);

}