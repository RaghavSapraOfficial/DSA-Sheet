// bubble sort
/*
    best case:O(n);
    didSwap=false;
    then if swapped in loop then didswap=true;
    after loop if didSwap==false it implies no swap took place so break out.thats why O(n)

    worst=avg=O(n*n);
*/
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
int main(){
    return 0;
}