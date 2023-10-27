// introduction to dp
// frog jumps with k 

#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>& a,int k){
    if(n==0)
        return 0;
    
    vector<int>jump(k,1e9);

    for(int i=1;i<=k;i++){
        if( (n-i) >= 0 ) {
            jump[i-1] = f(n-i,a,k) + abs(a[n]-a[n-i]);
        }
    }
    return *min_element(jump.begin(),jump.end());
}

int f(int n,vector<int>& a,int k,vector<int>&dp){
    if(n==0)
        return 0;
    if(dp[n] != -1)
        return dp[n];
    vector<int>jump(k,1e9);

    for(int i=1;i<=k;i++){
        if( (n-i) >= 0 ) {
            jump[i-1] = f(n-i,a,k,dp) + abs(a[n]-a[n-i]);
        }
    }
    return dp[n] = *min_element(jump.begin(),jump.end());
}

int f(int n ,vector<int>& a,int k){
    vector<int>dp(n,0);

    for(int i=1;i<n;i++){

        vector<int>jump(k,1e9);
        for(int j=1;j<=k;j++){
            if( (i-j) >= 0 ) {
                jump[j-1] = dp[i-j] + abs(a[i]-a[i-j]);
            }
        }
        dp[i] = *min_element(jump.begin(),jump.end());
    }
    return dp[n-1];
}
int minimizeCost(int n, int k, vector<int> &height){
    return f(n,height,k);
}

int main(){
    return 0;
}