// left rotate by d places
#include<bits/stdc++.h>
using namespace std;

// brute O(n+d) time   O(d) space
void leftRotate(vector<int>& a,int n,int d){
    vector<int>temp(d);
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
}
// optimal O(2n) 
void leftRotate(vector<int>& a,int n,int d){
    reverse(a.begin(),a.begin()+d);
    reverse(a.begin()+d,a.end());
    reverse(a.begin(),a.end());
}
int main(){
    return 0;
}