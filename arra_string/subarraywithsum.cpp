#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=0;
    int sum=0;
    while(r<n){

        if((sum+=arr[r])<s){
            r++;
        }
        else if((sum+=arr[r])==s){
            cout<<l<<" "<<r<<endl;
            r++;
            l++;

        }
        



    }


    return 0;
}