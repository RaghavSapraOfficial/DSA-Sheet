// introduction to dp
// maxm sum of non adjacent elements
#include<bits/stdc++.h>
using namespace std;

int f(int ind ,vector<int>&a){
    if(ind == 0)    
        return a[ind];
    if(ind < 0)
        return 0;
    int take = a[ind] + f(ind-2,a);
    int notTake = 0 + f(ind-1,a);

    return max(take,notTake);
}

int f(int ind ,vector<int>&a,vector<int>&dp){
    if(ind == 0)    
        return a[ind];
    if(ind < 0)
        return 0;
    if(dp[ind] != -1)
        return dp[ind];
        
    int take = a[ind] + f(ind-2,a,dp);
    int notTake = 0 + f(ind-1,a,dp);

    return dp[ind] = max(take,notTake);
}

int f(vector<int>&a,int n){
    vector<int>dp(n,0);
    for(int i=1;i<n;i++){
        int take = a[i];if(i>1) take+=dp[i-2];
        int notTake = 0 + dp[i-1];
        dp[i] = max(take,notTake);
    }
    return dp[n-1];
}

int f(vector<int>&a,int n){
    int prev2=0,prev=a[0];
    for(int i=1;i<n;i++){
        int take = a[i];if(i>1) take+=prev2;
        int notTake = 0 + prev;
        int curr = max(take,notTake);
        prev2=prev;
        prev=curr;
    }
    return prev;
}
int main(){
    return 0;
}