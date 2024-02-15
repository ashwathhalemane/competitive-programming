#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int decimal;
    cout<<"enter number: ";
    cin>>decimal;
    int decimal_new, binary;

    while(decimal != 0){
        decimal_new = decimal / 2;
        binary = decimal % 2;
        decimal = decimal_new;
        //cout<<decimal_new<<" ";
        cout<<binary<<" ";
    }
	return 0;
}
