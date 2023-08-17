#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    // for(int i=0;i<s.length();i++){
    //     if(islower(s[i])){
    //         s[i]-=32;
    //     }
    // }


    // for(int j=0;j<s.length();j++){
    //     if(s[j]>='a' && s[j]<='z'){
    //         s[j]-=32;
    //     }
    // }

    // for(int j=0;j<s.length();j++){
    //     if(s[j]>='A' && s[j]<='Z'){
    //         s[j]+=32;
    //     }
    // }

    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;
    return 0;
}