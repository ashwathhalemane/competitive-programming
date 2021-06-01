#include<stdio.h>
int main(void){
    
    int n = 35419;
    int count = 0;
    
    while(n!=0){
        count++;
        n/=10;
    }
    printf("%d\n", count);

}