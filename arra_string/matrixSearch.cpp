#include<bits/stdc++.h>
using namespace std;

// int main(){
//     // int a[3][3]={ {1,2,3},
//     //               {4,5,6},
//     //               {7,8,9} };

//     // int key=90;
//     // bool flag=0;
//     // int i=0,j=2;
//     // while(i<3 && j>=0){
//     //     if(a[i][j]==key){
//     //         flag=1;
//     //         break;
//     //     }
//     //     if(a[i][j]>key){
//     //         j--;
//     //     }
//     //     else {
//     //         i++;
//     // }
//     // }

//     // if(flag){
//     //     cout<<"Element found"<<endl;
//     // }
//     // else{
//     //     cout<<"Element not found"<<endl;
//     // }

//     // return 0;
// }

int main(){

    int a[3][3]={ {1,2,3},
                  {4,5,6},
                  {7,8,9} };

    int key=2;
    bool flag=0;
    int i=2,j=0;
    while(i>0 && j<3){
        if(a[i][j]==key){
            flag=1;
            break;
        }
        if(a[i][j]>key){
            i--;
        }
        else{
            j++;
        }
    }

    if(flag){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}