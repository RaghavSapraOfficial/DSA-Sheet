// dp on grids

int f(int i,int j){
	if(i==0 && j==0)
		return 1;
	if(i<0 || j<0)	
		return 0;
	int up=f(i-1,j);
	int left=f(i,j-1);
	return up+left;
}

// vector<vector<int>>dp(m,vector<int>(n,-1));
int f(int i,int j,vector<vector<int>>&dp){
	if(i==0 && j==0)
		return 1;
	if(i<0 || j<0)	
		return 0;
	if(dp[i][j] != -1)
		return dp[i][j];

	int up=f(i-1,j,dp);
	int left=f(i,j-1,dp);
	return dp[i][j] = up+left;
}

int f(int m,int n){
	vector<vector<int>>dp(m,vector<int>(n,0));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            if(i==0 && j==0) dp[0][0] = 1;
            else{
                int up=0,left=0;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j] = up+left;
            }
		}
	}
	return dp[m-1][n-1];
}
int f(int m,int n){
	vector<int>prev(n,0);
	vector<int>curr(n,0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            if(i==0 && j==0) curr[0] = 1;
            else{
                int up=0,left=0;
                if(i>0) up=prev[j];
                if(j>0) left=curr[j-1];
                curr[j] = up+left;
            }
		}
		prev=curr;
	}
	return prev[n-1];
}

// best code O(m);
int f(int m,int n){
    int M=m+n-2;
    int r= m-1;
    double res=1;
    for(int i=1;i<=r;i++){
        res*=(M-r+i);
        res/=i;
    }
    return int(res);
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}