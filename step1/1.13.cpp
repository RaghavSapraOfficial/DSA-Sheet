// count digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;cin>>n;
    while(n>0){
        n/=10;
        cnt++;
    }
    cout<<cnt;
    return 0;
}