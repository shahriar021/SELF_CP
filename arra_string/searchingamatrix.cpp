#include<bits/stdc++.h>
using namespace std;
 
 int main(){


    int n,m;
    cin>>n>>m;
    int arr[n][m];
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                flag=1;
            }
        }
    }

    if(flag==1){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
 }