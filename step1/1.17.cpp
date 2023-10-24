// armstrong numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n,arm=0;
    while(n>0){
        int dig  = n%10;
        arm += (dig*dig*dig);
        n/=10;
    }
    if(arm == dup){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}