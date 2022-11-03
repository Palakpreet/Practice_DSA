/*
using namespace std;
string reversestring(string str){
    int i=0;
    int j=str.size()-1;
    
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

int main()
{
    string str;
    
    cin>>str;
    cout<<"Output is " <<reversestring(str);

    return 0;
}
*/

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
    
  //  cout<<"The output of string in reverse is "<<
    reversestringrec(str,0,str.size()-1);
    cout<<"final "<<str;
}

