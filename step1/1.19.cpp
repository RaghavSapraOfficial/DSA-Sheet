// check for prime
#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag=true;
    int n;cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            flag=false;break;
        }
    }
    if(flag){
        cout<<"its prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}