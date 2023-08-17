#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string st[100];
    int n;
    //n=stoi(s);
    for(int i=0;i<s.length();i++){
        if(s[i]> s[i+1]){
            st[i]=s[i];
        }
        else if(s[i] <s[i+1]){
            st[i]=s[i+1];
        }
    }
    //cout<<n+1<<endl;
    for(int i=s.length()-1;i>0;i--){
            cout<<st[i]<<endl;
    }
    return 0;
}