// check palindrome
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n>0){
        int dig=n%10;
        rev=rev*10 + dig;
        n/=10;
    }
    if(dup==rev) cout<<"Same";
    else cout<<"Different";
    return 0;
}