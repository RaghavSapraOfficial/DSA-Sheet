// linear search
#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>& a,int n,int x){
    for(int j=0;j<n;j++){
        if(a[j] == x){
            return j;
        }
    }
    return -1;
}
int main(){
    return 0;
}