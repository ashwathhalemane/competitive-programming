// Jim is off to a party and is searching for a matching pair of socks. His drawer is filled with socks, each pair of a different color. In its worst case scenario, how many socks (x) should Jim remove from his drawer until he finds a matching pair?

// Input Format
// The first line contains the number of test cases T.
// Next T lines contains an integer N which indicates the total pairs of socks present in the drawer.

// Output Format
// Print the number of Draws (x) Jim makes in the worst case scenario.

//Topics: Pigeonhole principle

// #include<iostream>
// using namespace std;

// int main(){
//     int t,n;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         cin>>n;
//         cout<<n+1;
//     }
    
// }
#include<stdio.h>

int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        printf("%d\n",N+1);
    }
    return 0;
}