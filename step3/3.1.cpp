// largest element in an array.
#include<bits/stdc++.h>
using namespace std;

// O(n)
int largestElement(vector<int>& a,int n){
    return *max_element(a.begin(),a.end());
}

// O(n log n)
int largestElement(vector<int>& a,int n){
    sort(a.begin(),a.end());
    return a.back();
    // return a[n-1];
}

// O(n) 
int largestElement(vector<int>& a,int n){
    int maxm=a[0];
    for(int i=1;i<n;i++){
        if(a[i] > maxm)
            maxm=a[i];
    }
    return maxm;
}
int main(){
    
    return 0;
}