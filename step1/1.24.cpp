// sum of first n numbers
/*
    functional  return f(i,sum);
    recurstion  return f(3)
*/
void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

int f(int n){
    if(n<1) return 0;
    return n + f(n-1);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<f(5);
    return 0;
}