// check if string is palindrome
#include<bits/stdc++.h>
using namespace std;
void f(int a[],int n,int s,int e,bool& ans){
    if(s>=e) return;
    if(a[s] != a[e]){
        ans=false;
        return;
    }
    f(a,n,s+1,e-1,ans);
}
bool f(int a[],int n,int i){
    if(i>=n/2) return true;
    if(a[i] != a[n-i-1]){
        return false;
    }
    f(a,n,i+1);
}
int main(){
    bool ans=true;
    int a[]={1,2,3};
    f(a,3,0,2,ans);
    return 0;
}