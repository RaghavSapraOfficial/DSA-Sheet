// introduction to dp
// ninja training
#include<bits/stdc++.h>
using namespace std;

int f(int day,int last,vector<vector<int>>&a){
    if(day==0){
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
                maxi=max(maxi,a[day][i]);
            }
        }
        return maxi;
    }
    int ans=0;
    for(int i=0;i<3;i++){
        if(i != last){
            int point = a[day][i] + f(day-1,i,a);
            ans=max(ans,point);
        }
    }
    return ans;
}

// vector<vector<int>>dp(n+1,vector<int>(4,-1));
int f(int day,int last,vector<vector<int>>&a,vector<vector<int>>&dp){
    if(day==0){
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
                maxi=max(maxi,a[day][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last] != -1)
        return dp[day][last];

    int ans=0;
    for(int i=0;i<3;i++){
        if(i != last){
            int point = a[day][i] + f(day-1,i,a,dp);
            ans=max(ans,point);
        }
    }
    return dp[day][last] = ans;
}
// tc o (n*4*3)
// sc o(n*4)
int f(vector<vector<int>>&a){
    int n=a.size();
    vector<vector<int>>dp(n,vector<int>(4,0));
    dp[0][0]=max(a[0][1],a[0][2]);
    dp[0][1]=max(a[0][0],a[0][2]);
    dp[0][2]=max(a[0][0],a[0][1]);
    dp[0][3]=max({a[0][0],a[0][1],a[0][2]});
    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
            int ans=0;
            for(int j=0;j<3;j++){
                if(j != last){
                    int point = a[day][j] + dp[day-1][j];
                    ans=max(ans,point);
                }
            }
            dp[day][last] = ans;
        }
    }
    return dp[n-1][3];
}

int f(vector<vector<int>>&a){
    int n=a.size();
    vector<int>curr(4,0);
    vector<int>prev(4,0);
    prev[0]=max(a[0][1],a[0][2]);
    prev[1]=max(a[0][0],a[0][2]);
    prev[2]=max(a[0][0],a[0][1]);
    prev[3]=max({a[0][0],a[0][1],a[0][2]});
    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
            int ans=0;
            for(int j=0;j<3;j++){
                if(j != last){
                    int point = a[day][j] + prev[j];
                    ans=max(ans,point);
                }
            }
            curr[last] = ans;
        }
        prev=curr;
    }
    return prev[3];
}

int main(){
    return 0;
}