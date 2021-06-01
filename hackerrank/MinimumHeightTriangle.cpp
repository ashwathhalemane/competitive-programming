//Problem
//Given integers b and a, find the smallest integer h, such that there exists a triangle of height h, base b, having an area of at least a.

//Input Format

//In the first and only line, there are two space-separated integers b and a, denoting respectively the base of a triangle and the desired minimum area.

// Sample Input 1

// 17 100
// Sample Output 1

// 12
// Explanation 1

// The task is to find the smallest integer height of the triangle with base 17 and area at least 100. It turns out, that there are triangles with height 12, base 17 and area 102, for example a triangle with corners in the following points: (2,2),(19,2), (16,14).


#include<bits/stdc++.h>
using namespace std;

int lowestHeight(int b, int a){
    return ceil(2*a/(float)b);
}

int main(){
    int b, a;

    cin>>b>>a;
    int h = lowestHeight(b,a);
    cout<<h<<'\n';

    return 0;
}