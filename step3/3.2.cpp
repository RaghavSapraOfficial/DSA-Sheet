// 2nd largest element
#include<bits/stdc++.h>
using namespace std;
// O(n log n) appraoch brute.
int secondLargest(vector<int>& a,int n){
    sort(a.begin(),a.end());
    int largest = a.back();
    for(int i=n-2;i>=0;i--){
        if(a[i] != largest){
            return a[i];
        }
    }
    return largest;
}

// O(2 * n) appraoch better.
int secondLargest(vector<int>& a,int n){
    int maxm=-1;
    for(int i=0;i<n;i++){
        if(a[i] >maxm){
            maxm = a[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(a[i] != maxm && a[i] > slargest){
            slargest=a[i];
        }
    }
    return slargest;
}

// O(n) appraoch optimal.
int secondLargest(vector<int>& a,int n){
    int largest=a[0],slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i] > largest){
            slargest=largest;
            largest=a[i];
        }else if(a[i] > slargest){
            slargest=a[i];
        }
    }
    return slargest;
}

int main(){
    return 0;
}