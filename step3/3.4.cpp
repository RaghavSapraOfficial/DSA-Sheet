// remove duplicates from sorted array
#include<bits/stdc++.h>
using namespace std;
void remveDuplicates(vector<int>& a,int n){
    int i=1;
    for(int j=0;j<n;j++){
        if(a[j] != a[i]){
            a[i++]=a[j];
        }
    }
}
int main(){
    return 0;
}