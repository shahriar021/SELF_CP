#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int st=0,en=0;
    int s=0;
    for(int i=0;i<n;i++)    cin>>arr[i];

    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
       s+=arr[i];
       maxSum=max(maxSum,s);
       
         if(s<0){
              s=0;
              
         }

        
    }
    

    cout<<maxSum<<endl;

    
    return 0;
}