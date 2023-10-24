// find the maxm consecutive ones
#include<bits/stdc++.h>
using namespace std;
// O(n) time  and O(1) space needed
// optimised code,
int maxConsecutiveOnes(vector<int>& a,int n){
    int maxi=0,cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    return 0;
}