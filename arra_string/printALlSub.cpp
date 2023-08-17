#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    string s="";
    for(int i=0;i<n;i++)    cin>>arr[i];

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s="";
            // for(int k=i;k<=j;k++){
            //     s+=to_string(arr[k])+" ";
            // }
            cout<<i<<" "<<j<<endl;
           //cout<<s<<endl;
        }
    }
    return 0;

}