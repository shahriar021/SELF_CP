#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max<<endl;

    return 0;


}