#include<iostream>
using namespace std;
void reversestringrec(string &str,int s,int e){
    if(s>=e){return ;}
    swap(str[s],str[e]);
    s++;
    e--;
   // cout<<s<<" "<<e;
    reversestringrec(str,s,e);
   // return str;
    
}
int main(){
    cout<<"Give the string ";
    string str;
    cin>>str;
    string str1=str;
    
  //  cout<<"The output of string in reverse is "<<
    reversestringrec(str,0,str.size()-1);
    if(str==str1){
        cout<<"Yes, it is pallindrome";
    }
    else{
        cout<<"No, it is not pallindrome";
    }
}
