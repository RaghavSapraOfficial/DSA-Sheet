// check if array is sorted.
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& a,int n){
    for(int i=1;i<n;i++){
        if(a[i-1] > a[i]){
            return false;
        }
    }
    return true;
}
int main(){
    return 0;
}