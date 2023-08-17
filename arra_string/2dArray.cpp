#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin>>arr[i][j];
        }
    }
    bool flag=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

           if((arr[i]==arr[j])!=0){
               flag=1;
           }
        }
        
    }

    if(flag==1){
        cout<<"diagonal"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}