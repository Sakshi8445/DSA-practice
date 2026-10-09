// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,3,4,5};
//     bool sorted=true;
//     for(int i=0;i<4;i++){
//         if(a[i]>a[i+1]){
//             sorted=false;
//             break;
//         }
//     }
//     if(sorted){
//         cout<<"sorted";
//     }
//     else{
//         cout<<"not sorted";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int a[] = {1,2,3,4,5};

    for(int i=0; i<4; i++){

        if(a[i] > a[i+1]){
            cout << "not sorted";
            return 0;
        }
    }

    cout << "sorted";

    return 0;
}