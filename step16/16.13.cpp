// dp 3d dp 
// alice and bob pick chocolates.

#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 

int f(int i,int j1,int j2,vector<vector<int>> &a,int r,int c){
    if(j1<0 || j2<0 || j1>=c || j2>=c){
        return -1e9;
    }
    if(i==r-1){
        if(j1==j2){
            return a[i][j1];
        }
        else{
            return a[i][j1]+a[i][j2];
        }
    }

    int maxi=-1e9;
    for(int dj1=-1;dj1<=1;dj1++){
        for(int dj2=-1;dj2<=1;dj2++){
            int val=0;
            if(j1 == j2){
                val+=a[i][j1];
            }
            else{
                val+=a[i][j1] + a[i][j2];
            }
            val+=f(i+1,j1+dj1,j2+dj2,a,r,c);
            maxi=max(maxi,val);
        }
    }
    return maxi;
}

int f(int i,int j1,int j2,vector<vector<int>> &a,int r,int c,vector<vector<vector<int>>>&dp){
    if(j1<0 || j2<0 || j1>=c || j2>=c){
        return -1e9;
    }
    if(i==r-1){
        if(j1==j2){
            return a[i][j1];
        }
        else{
            return a[i][j1]+a[i][j2];
        }
    }
    if(dp[i][j1][j2] != -1){
        return dp[i][j1][j2];
    }
    int maxi=-1e9;
    for(int dj1=-1;dj1<=1;dj1++){
        for(int dj2=-1;dj2<=1;dj2++){
            int val=0;
            if(j1 == j2){
                val+=a[i][j1];
            }
            else{
                val+=a[i][j1] + a[i][j2];
            }
            val+=f(i+1,j1+dj1,j2+dj2,a,r,c,dp);
            maxi=max(maxi,val);
        }
    }
    return dp[i][j1][j2] = maxi;
}

int f(vector<vector<int>> &a,int r,int c){
    
    vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,0)));

    for(int j1=0;j1<c;j1++){
        for(int j2=0;j2<c;j2++){
            if(j1==j2){
                dp[r-1][j1][j2]=a[r-1][j1];
            }
            else{
                dp[r-1][j1][j2]=a[r-1][j1]+a[r-1][j2];
            }
        }
    }

    for(int i=r-2;i>=0;i--){
        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
            int maxi=-1e9;
            for(int dj1=-1;dj1<=1;dj1++){
                for(int dj2=-1;dj2<=1;dj2++){
                    int val=0;
                    if(j1 == j2){
                        val+=a[i][j1];
                    }
                    else{
                        val+=a[i][j1] + a[i][j2];
                    }
                    if(j1+dj1 >=0 && j1+dj1 < c && j2+dj2 >=0 && j2+dj2 < c)
                        val+=dp[i+1][j1+dj1][j2+dj2];
                    else   
                        val+=-1e9;
                    
                    maxi=max(maxi,val);
                }
            }
            dp[i][j1][j2] = maxi;
            }
        }
    }
    return dp[0][0][c-1];
}

int f(vector<vector<int>> &a,int r,int c){
    
    vector<vector<int>>next(c,vector<int>(c,0)),curr(c,vector<int>(c,0));

    for(int j1=0;j1<c;j1++){
        for(int j2=0;j2<c;j2++){
            if(j1==j2)
                next[j1][j2]=a[r-1][j1];
            else
                next[j1][j2]=a[r-1][j1]+a[r-1][j2];   
        }
    }

    for(int i=r-2;i>=0;i--){
        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
                int maxi=-1e9;
                for(int dj1=-1;dj1<=1;dj1++){
                    for(int dj2=-1;dj2<=1;dj2++){
                        int val=0;
                        if(j1 == j2)
                            val+=a[i][j1];
                        else
                            val+=a[i][j1] + a[i][j2];
                        
                        if(j1+dj1 >=0 && j1+dj1 < c && j2+dj2 >=0 && j2+dj2 < c)
                            val+=next[j1+dj1][j2+dj2];
                        else   
                            val+=-1e9;
                        maxi=max(maxi,val);
                    }
                }
                curr[j1][j2] = maxi;
            }
        }
        next=curr;
    }
    return next[0][c-1];
}
int maximumChocolates(int r, int c, vector<vector<int>> &a) {
    // vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    // return f(0,0,c-1,a,r,c,dp);
    return f(a,r,c);
}
int main(){
    return 0;
}