// reverse an array.
#include<bits/stdc++.h>
using namespace std;
void f(int a[],int n,int s,int e){
    if(s>=e) return;
    swap(a[s],a[e]);
    f(a,n,s+1,e-1);
}
void f(int a[],int n,int i){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    f(a,n,i);
}
int main(){
    return 0;
}