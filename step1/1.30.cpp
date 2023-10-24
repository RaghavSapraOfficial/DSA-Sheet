// counting frequency of array elements
#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int>ans(n,0);
    for(const auto& it:nums) ans[it-1]++;
    return ans;
}
int main(){
    return 0;
}