#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    const int N=1e6+2;
    int indx[N];

    for(int i=0;i<N;i++){
        indx[i]=-1;
    }

    int minindx=INT_MAX;

    for(int i=0;i<n;i++){
        if(indx[arr[i]!=-1]){
            minindx=min(minindx,indx[arr[i]]);
        }
        else{
            indx[arr[i]]=i;
        }
    }

    if(minindx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minindx+1<<endl;
    }

    return 0;

}