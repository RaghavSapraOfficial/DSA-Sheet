// print n to 1
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i<1)
        return;
    /*
    does print 5 4 3 2 1

    cout<<i<<endl;
    f(i-1,n);
    */

    /*
    does print 1 2 3 4 5
    
    f(i-1,n);
    cout<<i<<endl;
    */
}
int main(){
    int n;cin>>n;
    f(n,n);
    return 0;
}