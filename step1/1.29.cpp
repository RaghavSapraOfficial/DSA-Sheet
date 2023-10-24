// hashing theory
/*
    vimpt lecture

    use unordered_map always over map
    map allowa all kinds of keys ,like pair<int,int> etc,
    but unordered allows only standard data types
    unordered has TC of O(1) in avg and best case
    and O(n) in worst case.

    map has O(log n ) complexity in all cases.


    hashing reduces O(n*q) ==> O(n+q) and uses O(max element) space
    
    main(){
        int a[1e6] allowed
        int a[1e7]  illegal 

        bool a[1e7] allowed
        bool a[1e8] illegal 
    }
    global(){
        int a[1e7] allowed
        int a[1e8]  illegal 

        bool a[1e8] allowed
        bool a[1e9] illegal
    }

    map stores keys in sorted order
    umap may store in any order.

    hash[ch-'a']++ for characters of lower case  size hash[26]
    hash[ch-'A']++ for characters of uppper case  size hash[26]
    hash[ch]++ for all characters size hash[256]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}