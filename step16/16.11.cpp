#include<bits/stdc++.h>
using namespace std;
// variabel starting or variable ending points

int f(int i,int j,vector<vector<int>>&a,int n){
	if(i==n-1){
		return a[n-1][j];
	}

	int d = a[i][j] + f(i+1,j,a,n);
	int dg = a[i][j] + f(i+1,j+1,a,n);
	return min(d,dg);
}

int f(int i,int j,vector<vector<int>>&a,int n,vector<vector<int>>&dp){
	if(i==n-1){
		return a[n-1][j];
	}
	if(dp[i][j] != -1)
		return dp[i][j];

	int d = a[i][j] + f(i+1,j,a,n,dp);
	int dg = a[i][j] + f(i+1,j+1,a,n,dp);
	return dp[i][j] = min(d,dg);
}

int f(vector<vector<int>>&a,int n){

	vector<vector<int>>dp(n,vector<int>(n,0));

	for(int j=0;j<n;j++) dp[n-1][j]=a[n-1][j];
	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			int d = a[i][j] + dp[i+1][j];
			int dg = a[i][j] + dp[i+1][j+1];
			dp[i][j] = min(d,dg);
		}
	}
	return dp[0][0];
}

int f(vector<vector<int>>&a,int n){

	vector<int>next(n,0);
	vector<int>curr(n,0);

	for(int j=0;j<n;j++) next[j]=a[n-1][j];
	for(int i=n-2;i>=0;i--){
		for(int j=i;j>=0;j--){
			int d = a[i][j] + next[j];
			int dg = a[i][j] + next[j+1];
			curr[j] = min(d,dg);
		}
		next=curr;
	}
	return next[0];
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// vector<vector<int>>dp(n,vector<int>(n,-1));
	// return f(0,0,triangle,n,dp);
	return f(triangle,n);
}
int main(){
    return 0;
}