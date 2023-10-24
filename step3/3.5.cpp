// left rotate by 1 place
#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& a,int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
int main(){
    return 0;
}