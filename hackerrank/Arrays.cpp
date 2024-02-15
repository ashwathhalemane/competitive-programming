#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
    for (int n=length-1; n>=0; --n){
        cout << arg[n] << ' ';
    }
    cout << '\n';
}

int main ()
{
    int lengthOfArray;
    cin>>lengthOfArray;
    
    int firstArray[lengthOfArray] = {};         

    for(int i=0;i<lengthOfArray;i++){
        cin>>firstArray[i];
    }
    
    printarray (firstArray, lengthOfArray);
  
}