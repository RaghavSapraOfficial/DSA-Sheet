// find the number that appears once 
#include<bits/stdc++.h>
using namespace std;
// O(n*n) time and O(1) space needed.
int numberAppearOnce(vector<int>& a,int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[j] == a[i]) 
                cnt++;
        }
        if(cnt==1) return a[i];
    }
    return -1;
}
/*
    either it is hash[max_ele + 1] space or if a[i] < 0 and a[i] is of range 1e9 then map needs to be used.

    map<long long ,int>mpp;  O(n log M)  M ->   n/2 + 1 . because maxm are duplicates. 
    umap<long long,int>mpp;  O(n) 
*/

// hashing
int numberAppearOnce(vector<int>& a,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++) mpp[a[i]]++;
    for(const auto& it:mpp){
        if(it.second==1) return it.first;
    }
    return -1;
}

// optimised O(n) time and space of O(1) 
int numberAppearOnce(vector<int>& a,int n){
    int xorr=0;
    for(int i=0;i<n;i++) xorr^=a[i];
    return xorr;
}

int main(){
    return 0;
}