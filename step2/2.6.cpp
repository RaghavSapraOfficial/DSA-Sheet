// recursive insertion sort
#include<bits/stdc++.h>
using namespace std;
// recursive implementation
void insertionSort(int a[],int n,int i=1){
    if(i==n){
        return;
    }
    int j=i-1;
    int curr=a[i];
    while(j>=0 && a[j] > curr){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=curr;
    
    insertionSort(a,n,i+1);
}
int main(){
    return 0;
}