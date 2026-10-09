// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int left=0;
//     int right=4;
//     int temp;
//     while(left<right){
//         temp=arr[left];
//         arr[left]=arr[right];
//         arr[right]=temp;
//         left++;
//         right--;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}