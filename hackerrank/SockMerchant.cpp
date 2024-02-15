#include<bits/stdc++.h>
using namespace std;

//naive approach finds only consecutive equals, not what we need for solution
// void sockMerchant(int arr[], int length){
//     int pairCount = 0;
//     for(int i=0;i<length;i++){
//         //cout<<arr[i]<<" "<<length<<endl;
//         if(arr[i] == arr[i+1]){
//             pairCount++;
//             cout<<arr[i]<<" "<<arr[i+1]<<endl;
//             cout<<i<<endl;
//         }
//     }
//     cout<<pairCount;
// }

//iterate using 2 loops, compare 0th element with 1st and so on...
// void sockMerchant(int arr[], int length){
//     int pairCount=0;
//     int count = 0;
//     for(int i=0;i<length;i++){
//         for(int j=i+1;j<length;j++){
//             if(arr[i]==arr[j]){
//                 //count++;
                
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//         // if(count % 2 == 0){
//         //     pairCount++;
//         // }
//     }
//     cout<<pairCount;
// }
void sockMerchant(int arr[], int length);

int main(){
    int arr[] = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int length = sizeof(arr)/sizeof(arr[0]);

    sockMerchant(arr, length);
    //cout<<length;
}