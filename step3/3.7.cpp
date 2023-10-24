// move zeroes to end
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& a,int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j] != 0){
            a[i++] =a[j];
        }
    }
}
int main(){
    return 0;
}