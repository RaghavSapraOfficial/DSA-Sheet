// quick sort
/*
	best case avg case :O(n log n)
	worst case O(n*n)
	divide and conquer approach
*/
#include<bits/stdc++.h>
using namespace std;
int partitionArray(int a[], int s, int e) {
    
	int cnt=0;
	for(int i=s+1;i<=e;i++){
		if(a[i] < a[s]){
			cnt++;
		}
	}
	if(cnt==0){
		return s;
	}
	swap(a[s],a[s+cnt]);
	
	int start=s,end = e;
	while(start<end){
		while(start<end && a[start] < a[s+cnt]){
			start++;
		}
		while(start<end && a[end] >= a[s+cnt]){
			end--;
		}
		if(start<end){
			swap(a[start++],a[end--]);
		}
	}
	return s+cnt;
}
int main(){
    return 0;
}