#include<bits/stdc++.h>
using namespace std;

// int main(){

//     char arr[100]="apple";
//     int i=0;

//     while(arr[i]!='\0'){
//         cout<<arr[i]<<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){

//     char arr[100];
//     cin>>arr;

//     cout<<arr[2]<<endl;
//     return 0;
// }

// int main(){
//     //check palindrom
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;

//     bool check=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[n-1-i]){
//             check=0;
//             break;
//         }
//     }

//     if(check==true){
//         cout<<"palindrom"<<endl;
//     }
//     else{
//         cout<<"not palindrom"<<endl;
//     }

//     return 0;
// }

// int main(){

//     char arr[100];
    
//     cin.getline(arr,100);
//     int i=0,maxi=0;

//     while(arr[i]!='\0'){
//         if(arr[i]==' '){
//             i++;
//         }
//         int j=i+1;

//         if(arr[j]!=' '){
//             j++;
//         }
//         maxi=max(maxi,j-i);
//     }

//     cout<<maxi<<endl;

//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     char arr[n+1];
//     cin.getline(arr,n);
//     cin.ignore();

//     int i=0;
//     int currLen=0,maxLen=0;
//     while(1){

//         if(arr[i]==' '){
//             if(currLen>maxLen){
//                 maxLen=currLen;
//             }
//             currLen=0;
//         }
//         else{
//             currLen++;
//         }
//         if(arr[i]=='\0'){
//             break;
//         }
//         i++;
//     }

//     cout<<maxLen<<endl;

//     return 0;

// }

int main(){

    int n,c=0;
    char arr[n+1];
    cin>>n;
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int max=0;
    while(true){
        if(arr[i]=='\0'){
            break;
        }
        c=0;
        if(arr[i]==' '){
            c++;
            i++;
            if(c>max){
                max=c;
            }
        }
        i++;
        else{
            i++;
        }
    }
    cout<<max<<endl;
    return 0;
}