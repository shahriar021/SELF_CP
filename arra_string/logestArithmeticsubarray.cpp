#include<bits/stdc++.h>
using namespace std;

int main(){
//     int n;
//      cin >> n;
//     int arr[n];
//    int c=1;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool flag=0;
//     for(int i=1;i<n;i=i+2){
//         if((arr[i]-arr[i-1])==(arr[i]-arr[i+1])){
//             c++;
//             flag=1;
//         }
//         else{
//            flag=0;
//         }
//     }

//     if(flag==1){
//         cout<<"true"<<c<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
//     return 0;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0 ;
}