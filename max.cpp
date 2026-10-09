#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,6,3};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<"";
    return 0;
}