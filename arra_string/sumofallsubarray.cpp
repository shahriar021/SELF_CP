#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++) cin>>arr[i];
  int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << sum << endl;
        }
    }


//  for(int i = 0; i < n; i++) {
//       for (int j = i; j < n; j++) {
//           for (int k = i; k <= j; k++) {
//               sum += arr[k];
//           }
//           cout << sum << endl;
//           sum = 0;
//       }
//   }
  return 0;
}