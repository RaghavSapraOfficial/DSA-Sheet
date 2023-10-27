#include <bits/stdc++.h> 
using namespace std;
int f(int i,int j,vector<vector<int>>&a){
    if(i==0 && j==0)
        return a[0][0];
    if(i<0 || j<0)
        return 1e9;
    
    int up=f(i-1,j,a);
    int left=f(i,j-1,a);

    return min(up,left)+a[i][j];
}

int f(int i,int j,vector<vector<int>>&a,vector<vector<int>>&dp){
    if(i==0 && j==0)
        return a[0][0];
    if(i<0 || j<0)
        return 1e9;
    if(dp[i][j] != -1)
        return dp[i][j];
    int up=f(i-1,j,a,dp);
    int left=f(i,j-1,a,dp);

    return dp[i][j] = min(up,left)+a[i][j];
}

int f(vector<vector<int>>&a){
    int m=a.size(),n=a[0].size();
    vector<vector<int>>dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) dp[i][j]=a[0][0];
            else{
                int up=1e9,left=1e9;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=min(up,left)+a[i][j];
            }
        }
    }
    return dp[m-1][n-1];
}

int f(vector<vector<int>>&a){
    int m=a.size(),n=a[0].size();
    vector<int>prev(n,0),curr(n,0);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) curr[j]=a[0][0];
            else{
                int up=1e9,left=1e9;
                if(i>0) up=prev[j];
                if(j>0) left=curr[j-1];
                curr[j]=min(up,left)+a[i][j];
            }
        }
        prev=curr;
    }
    return prev[n-1];
}

int minSumPath(vector<vector<int>> &grid) {
    // int m=grid.size();
    // int n=grid[0].size();
    // vector<vector<int>>dp(m,vector<int>(n,-1));
    // return f(m-1,n-1,grid,dp);
    return f(grid);
}
int main(){
    return 0;
}