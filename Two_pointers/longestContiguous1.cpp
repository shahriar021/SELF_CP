 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int zCnt=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=0,ans=0;

    while(j<n){
        if(arr[j]==0){
            zCnt++;
        }

        while(zCnt>k){
            if(arr[i]==0){
                zCnt--;
            }
            i++;
        }
        
        ans=max(ans,j-i+1);
        j++;
    }
    
    cout<<ans<<endl;

    return 0;
 }