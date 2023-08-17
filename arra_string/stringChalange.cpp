#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=0,d=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            c++;
        }
        else if(islower(s[i])){
            d++;
        }
    }
    cout<<c<<" "<<d<<endl;
    return 0;
}