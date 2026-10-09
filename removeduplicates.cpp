#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,3,4,5,5};
    for(int i=0;i<7;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
    cout<<arr[7];
    return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 2, 3, 3, 4, 5, 5};

//     for (int i = 0; i < 7; i++) {

//         if (arr[i] == arr[i + 1]) {
//             continue;
//         }

//         cout << arr[i] << " ";
//     }

//     cout << arr[7];

//     return 0;
// }



// #include<iostream
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//                 cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {

//         if (arr[i] == arr[i + 1]) {
//             continue;
//         }

//         cout << arr[i] << " ";
//     }

//     cout << arr[n - 1];

//     return 0;
// }