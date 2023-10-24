// insertion sort
/*
    best case: O(n);
    // if array is sorted in ascending order (it doesnt go in while loop)

    worst=avg=O(n*n); (if array in desc order)
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& a,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int curr=a[i];
        while(j>=0 && a[j] > curr){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;
    }
}

// recursive implementation demanded in question.
void insertionSort(vector<int>& a,int n,int i=1){
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