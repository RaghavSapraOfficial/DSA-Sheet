// find highest/lowest frequency element
#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    map<int,int>mpp;
    for(const auto& it:v){
        mpp[it]++;
    }
    int maxm=-1e9,minm=1e9,minm_ele,max_ele;
    for(const auto& it:mpp){
        if(it.second < minm){
            minm=it.second;
            minm_ele=it.first;
        }
        if(it.second > maxm){
            maxm=it.second;
            max_ele=it.first;
        }
    }
    return {max_ele,minm_ele};
}
int main(){
    return 0;
}