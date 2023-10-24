// learn basic recursion
/*
    recursion
    basic stack space
    stack overflow
    recursion tree
    base case **impt
*/
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    if(cnt==3) return;
    printf("%d\n",cnt);
    cnt++;
    print();
}
int main(){
    print();
    return 0;
}