// recursive bubble sort
#include<bits/stdc++.h>
using namespace std;
void recursiveBubbleSort(vector<int>& a,int n,int i=0){
    if(i==n)
        return;
    
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
    recursiveBubbleSort(a,n,i+1);
}
int main(){
    return 0;
}