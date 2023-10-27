#include<bits/stdc++.h>
using namespace std;
// variabel starting or variable ending points
// minm or maxm falling path sum.

#include <bits/stdc++.h> 
int f(int i,int j,vector<vector<int>> &a,int m,int n){
    if(j<0 || j>=n){
        return -1e9;
    }
    if(i==0){
        return a[0][j];
    }
    int l = f(i-1,j-1,a,m,n);
    int u = f(i-1,j,a,m,n);
    int r = f(i-1,j+1,a,m,n);
    
    return max({l,u,r})+a[i][j];
}

int f(int i,int j,vector<vector<int>> &a,int m,int n,vector<vector<int>>&dp){
    if(j<0 || j>=n){
        return -1e9;
    }
    if(i==0){
        return a[0][j];
    }
    if(dp[i][j] != -1)
        return dp[i][j];
        
    int l = f(i-1,j-1,a,m,n,dp);
    int u = f(i-1,j,a,m,n,dp);
    int r = f(i-1,j+1,a,m,n,dp);
    
    return dp[i][j] =  max({l,u,r})+a[i][j];
}

int f(vector<vector<int>> &a,int m,int n){
    vector<vector<int>>dp(m,vector<int>(n,0));    
    for(int j=0;j<n;j++){
        dp[0][j]=a[0][j];
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            int l=-1e9,r=-1e9;
            if(j>0) l = dp[i-1][j-1];
            int u = dp[i-1][j];
            if(j<n-1) r = dp[i-1][j+1];
            dp[i][j] =  max({l,u,r})+a[i][j];
        }
    }
    
    return *max_element(dp[m-1].begin(),dp[m-1].end());
}

int f(vector<vector<int>> &a,int m,int n){
    vector<int>prev(n,0);    
    vector<int>curr(n,0);    
    for(int j=0;j<n;j++){
        prev[j]=a[0][j];
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            int l=-1e9,r=-1e9;
            if(j>0) l = prev[j-1];
            int u = prev[j];
            if(j<n-1) r = prev[j+1];
            curr[j] =  max({l,u,r})+a[i][j];
        }
        prev=curr;
    }
    return *max_element(prev.begin(),prev.end());
}
int getMaxPathSum(vector<vector<int>> &a)
{
    int m=a.size(),n=a[0].size(),ans=-1e9;
    // vector<vector<int>>dp(m,vector<int>(n,-1));
    // for(int col=0;col<n;col++){
    //     int point = f(m-1,col,a,m,n,dp);
    //     ans=max(ans,point);
    // }
    // return ans;
    return f(a,m,n);
}
int main(){
    return 0;
}