// introduction to dp
// frog jumps

int f(int n,vector<int>& a){
    if(n==0)
        return 0;
    int right=1e9;
    int left = f(n-1,a) + abs(a[n]-a[n-1]);
    if(n>1) right=f(n-2,a) + abs(a[n]-a[n-2]);

    return min(left,right);
}

// vector<int>dp(n+1,-1);
int f(int n,vector<int>& a,vector<int>& dp){
    if(n==0)
        return 0;
    if(dp[n] != -1)
        return dp[n];
    int right=1e9;
    int left = f(n-1,a,dp) + abs(a[n]-a[n-1]);
    if(n>1) right=f(n-2,a,dp) + abs(a[n]-a[n-2]);

    return dp[n]= min(left,right);
}

int f(int n,vector<int>& a){
    vector<int>dp(n,0);
    for(int i=1;i<n;i++){
        int right=1e9;
        int left = dp[i-1] + abs(a[i]-a[i-1]);
        if(i>1) right=dp[i-2] + abs(a[i]-a[i-2]);
        dp[i]=min(left,right);
    }
    return dp[n-1];
}

int f(int n,vector<int>& a){
    int prev=0,prev2=0;
    for(int i=1;i<n;i++){
        int right=1e9;
        int left = prev + abs(a[i]-a[i-1]);
        if(i>1) right=prev2 + abs(a[i]-a[i-2]);
        int curr=min(left,right);
        prev2=prev;
        prev=curr;
    }
    return prev;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}