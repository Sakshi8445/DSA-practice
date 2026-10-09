#include<iostream>
using namespace std;
int main(){
    int counteven=0;
    int countodd=0;
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    cout<<counteven<<" "<<countodd;
    return 0;
}