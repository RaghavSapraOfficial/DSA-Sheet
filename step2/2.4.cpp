// merge sort
/*
    divide and conquer algorithm
    o(n * log n) code.

    in mergeSort(l>=r) can be replaced with l==r also it works correct.
*/
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];
    
    for(int i=l;i<=mid;i++){
        a[i-l] = arr[i];
    }
    for(int i=mid+1;i<=r;i++){
        b[i-mid-1] = arr[i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k++]=a[i++];
        }else{
            arr[k++]=b[j++];
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
}
void mergeSort(int a[], int l, int r) {
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main(){
    return 0;
}