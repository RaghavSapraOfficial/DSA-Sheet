// reverse number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int revNo=0;
    int n;cin>>n;
    while(n>0){
        int dig=n%10;
        n/=10;
        revNo=revNo*10 + dig;
    }
    cout<<revNo<<endl;
    return 0;
}