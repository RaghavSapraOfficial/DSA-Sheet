// introduction to dp
// house robbery
#include<bits/stdc++.h>
using namespace std;

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
/*
    return max(f(a1),f(a2));
*/
int main(){
    return 0;
}