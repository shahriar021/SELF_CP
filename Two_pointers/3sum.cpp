#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,target;
    cout<<"Enter the size of array and target:"<<endl;
    cin>>n;
    int arr[n];
    
    
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    bool ans=false;
    int one,two,three;
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==target){
                ans=true;
                one=arr[i];
                two=arr[l];
                three=arr[r];
                l++;
                r--;
                
            }
            else if(arr[i]+arr[l]+arr[r]<target){
                l++;
            }
            else{
                r--;
            }
        }
    }

    if(ans){
        cout<<one<<two<<three<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;


}