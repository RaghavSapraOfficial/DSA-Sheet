#include<bits/stdc++.h>
using namespace std;
void changeArray(int a[],int n){
    a[0]+=5;
    cout<<"inside fn "<<a[0]<<endl;
}
void changeString(string s){
    s[0]='r';
    cout<<"inside fn "<<s[0]<<endl;
}
void changeInt(int t){
    t = 8;
    cout<<"inside fn "<<t<<endl;
}
int main(){
    int t=5;
    string s = "Raghav";
    int a[5]={1,2,3,4,5};
    changeInt(t);
    changeString(s);
    changeArray(a,5);
    return 0;
}