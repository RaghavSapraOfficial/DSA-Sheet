// factorial of n
/*
    functional  return f(i,factorial);
    recurstion  return f(3)
*/
void f(int i,int fact){
    if(i<1){
        cout<<fact<<endl;
        return;
    }
    f(i-1,fact*i);
}

int f(int n){
    if(n<1) return 1;
    return n * f(n-1);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<f(5);
    return 0;
}