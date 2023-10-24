// find union and intersection
#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int>& a,int m, vector<int>& b,int n){
    vector<int>ans;
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i] <= b[j]){
            if(ans.empty() || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<m){
        if(ans.empty() || ans.back() != a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<n){
        if(ans.empty() || ans.back() != b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}

vector<int> findIntersection(vector<int>& a,int m, vector<int>& b,int n){
    vector<int>ans;
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]) {
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
    return ans;
}

int main(){
    return 0;
}