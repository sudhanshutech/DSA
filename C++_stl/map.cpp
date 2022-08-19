//map is all about key value pair , for each key there is a value

#include<iostream>
#include<map>

using namespace std;
int main(){
map<int,string>m;
m[1]= "one";
m[2]= "two";
m[3]= "three";

m.insert({4,"four"});


//delete element
cout<<"Before erasing"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

m.erase(2);
cout<<"After erasing"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

//find element
auto it=m.find(2);
if(it!=m.end()){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

}