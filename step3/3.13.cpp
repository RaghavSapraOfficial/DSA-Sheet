// longest subarray with sum k.
// positives only .


#include<bits/stdc++.h>
using namespace std;
// brute with O(n^3) complexity and O(1) space
int longestSubarrayWithSumK(vector<int>& a,int n,int Sum){
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(Sum == sum){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}

// brute ka better with O(n^2) complexity and O(1) space
int longestSubarrayWithSumK(vector<int>& a,int n,int Sum){
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(Sum == sum){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}

// better with O(n log n ) complexity and O(n) space using hashmap and reverse engg.
// its optimal for array with negatives and positives and zeroes.
int longestSubarrayWithSumK(vector<int>& a,int n,int Sum){
    map<long long,int>mpp;
    int sum=0,maxLen=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum == Sum){
            maxLen=i+1;
        }

        long long rem = sum - Sum;
        if(mpp.find(rem) != mpp.end()){
            int len = i-mpp[rem];
            maxLen=max(maxLen,i-mpp[rem]);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum]=i;
        }
    }
    return maxLen;
}

// truly optimal 
// has worst complexity of O(2*n) but appears to be O(n*n) but is not .
// has sliding window approach
int longestSubarrayWithSumK(vector<int>& a,int n,int Sum){
    int maxLen=0;
    int sum=a[0];
    int left=0,right=0;
    while(right<n){
        while(left<=right && sum > Sum){
            sum-=a[left++];
        }
        if(sum == Sum){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n) sum+=a[right];
    }
    
    return maxLen;
}
int main(){
    return 0;
}