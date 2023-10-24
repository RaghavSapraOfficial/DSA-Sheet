// find the number that is missing
/*
    1 2 4 5   range is 1 to n.   so 1 to 5 and 3 is missing so return 3.
*/
#include<bits/stdc++.h>
using namespace std;

// brute O(n*n).
int missingNumber(vector<int>& a,int n){
    for(int i=1;i<=n;i++){
        bool flag=0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                flag=1;break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

// better O(n) time and space O(n).
int missingNumber(vector<int>& a,int n){
        vector<bool>hash(n+1,0);
        for(int j=0;j<n;j++){
            hash[a[j]]=1;
        }
        for(int i=1;i<=n;i++){
            if(hash[i] == 0)
                return i;
        }
        return -1;
       
}

// optimal O(n) time and space O(1).
// 2 ways sum and xor.
/*
    xor way slightly better beacuse of bit maniputaioon ans space of long needed in sum for case where n=1e5.
*/
// sum way
int missingNumber(vector<int>& a,int n){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j];
        }
        return (n*n+n)/2 - sum;      
}

// xor way
int missingNumber(vector<int>& a,int n){
        int xo= 0; 
        for(int i=0;i<n;i++){
            xo^= (a[i] ^ (i+1));
        }
        return xo;
}

int main(){
    return 0;
}