#include<iostream>
using namespace std;
int main(){
    int target=5;
    cin>>target;
    int arr[]={1,2,3,4,5,6,7,8};
    bool found=false;
    for(int i=0;i<8;i++){
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"found";
    }
    else{
            cout<<"not found"<<"";
    }

    return 0;
}