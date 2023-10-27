// introduction to dp
// fib series


// tc O(2^n)
// sc O(n)
int f(int n){
    if(n<=1) return n;
    return f(n-1)+f(n-2);
}


// vector<int>dp(n+1,-1); // memoized   
// tc O(n);
// sc O(n)+O(n);
int f(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = f(n-1,dp)+f(n-2,dp);
}

// tabulated 
// tc O(n)
// sc O(n)
int f(int n){
    vector<int>dp(n+1);
    dp[0]=0;dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}

// space optimised
// tc O(n)
// sc O(1)
int f(int n){
    int prev2=0,prev=1;
    for(int i=2;i<=n;i++){
        int curi=prev2+prev;
        prev2=prev;
        prev=curi;
    }
    return prev;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}