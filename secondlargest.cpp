// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={43,34,56,54,6};
//     int largest=arr[0];
//     int secondLargest=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }   
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]!=largest){
//             if(secondLargest==-1 || arr[i]>secondLargest){
//                 secondLargest= arr[i];
//             }
//         }
//     }
//     cout<<secondLargest;
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={34,22,52,65,38};
    int largest=arr[0];
   int secondLargest = INT_MIN;   // INT_MIN means "the smallest possible integer"
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    cout<<secondLargest;
    return 0;
}