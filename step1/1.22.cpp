// print 1 to n
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n)
        return;

    /*
    does print 5 4 3 2 1

    f(i+1,n);
    cout<<i<<endl;
    */

    /*
    does print 1 2 3 4 5 

    cout<<i<<endl;
    f(i+1,n);
    */
}
int main(){
    int n;cin>>n;
    f(1,n);
    return 0;
}