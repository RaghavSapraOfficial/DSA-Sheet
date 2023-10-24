#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    // patterns
    /*
    1.
        ****
        ****
        ****
        ****

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }cout<<endl;
        }
    */

    /*
    2.
        *
        **
        ***
        ****
    
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
    */

    /*
    3.
        1
        12
        123
        1234
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }cout<<endl;
        }
    */

    /*
    4.
        1
        22
        333
        4444
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }cout<<endl;
        }
    */

    /*
    5.
        ****
        ***
        **
        *
    
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
    */

    /*
    6.
        1234
        123
        12
        1
    
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
            }cout<<endl;
        }
    */

    /*
    7.
           *
          ***
         *****
        *******

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }cout<<endl;
        }
    */

    /*
    8.
        *******
         *****
          ***
           *

        for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i;j++) cout<<" ";
            for(int j=1;j<=2*i -1;j++){
                cout<<"*";
            }cout<<endl;
        }
    */

    /*
    9.
           *
          ***
         *****
        *******
        *******
         *****
          ***
           *
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++) cout<<" ";
            for(int j=1;j<=2*i - 1;j++){
                cout<<"*";
            }cout<<endl;
        }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i;j++) cout<<" ";
            for(int j=1;j<=2*i - 1;j++){
                cout<<"*";
            }cout<<endl;
        }
    */
   
    /*
    10.
        *
        **
        ***
        ****
        ***
        **
        *
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        } 
    */
   
    /*
    11.
        1
        01
        101
        0101
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<((i+j+1)&1);
            }cout<<endl;
        }
    */
   
    /*
    12.
        1      1
        12    21
        123  321
        12344321
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=1;j<=2*n-2*i;j++) cout<< " ";
            for(int j=i;j>=1;j--){
                cout<<j;
            }cout<<endl;
        }
    */
   
    /*
    13.
        1
        2 3
        4 5 6 
        7 8 9 10
        11 12 13 14 15

        int count=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<count++<<" ";
            }cout<<endl;
        }
    */
   
    /*
    14.
        A
        AB
        ABC
        ABCD
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<< (char)('A'+j-1);
            }cout<<endl;
        }
    */
   
    /*
    15.
        ABCD
        ABC
        AB
        A
        
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<(char)('A'+j-1);
            }cout<<endl;
        }
    */
   
    /*
    16.
        A
        BB
        CCC
        DDDD
        EEEEE
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<(char)('A'+i-1);
            }cout<<endl;
        }
    */
   
    /*
    17.
           A
          ABA
         ABCBA
        ABCDCBA
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<char('A'+j-1);
            }
            for(int j=i-1;j>=1;j--){
                cout<<char('A'+j-1);
            }cout<<endl;
        }
    */
   
    /*
    18.
        E
        DE
        CDE
        BCDE
        ABCDE
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<char('A'+ (n-i+1)+j-1);
            }cout<<endl;
        }
    */
   
    /*
    19.
        ********
        ***  ***
        **    **
        *      * 
        *      * 
        **    **
        ***  ***
        ********
        
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
    */
   
    /*
    20.
        *      * 
        **    **
        ***  ***
        ********
        ***  ***
        **    **
        *      *
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*n-2*i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
    */
   
    /*
    21.
        ****
        *  *
        *  *
        ****
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==n || j==n || i==1 || j==1)
                    cout<<"*";
                else
                    cout<<" ";
            }cout<<endl;
        }
    */
   
    /*
    22.
        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444

        
        for(int i=1;i<=2*n-1;i++){
            for(int j=1;j<=2*n-1;j++){
                int up=i;
                int down=2*n-i;
                int left=j;
                int right=2*n-j;
                cout<<n+1-min({up,down,left,right});
            }cout<<endl;
        }
    */
    return 0;
}