// selection sort
/*
    best=avg=worst=O(n*n)
*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& a){
    int n=a.size();
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!= i){
            swap(a[min_idx],a[i]);
        }
    }
}
int main(){
    return 0;
}