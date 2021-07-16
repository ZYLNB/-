#include <iostream>
#include <cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int a;
    int n;
    int m1;
    cin>>n;
    int sum=n;
    int add[n-1];
    for (int i = 0; i <= n-1; i++){
        cin>>add[i];
    }
    sort(add,add+n);
    for(int s=0;s<=n-2;s++){
        if(add[s]==add[s+1]){
            sum=sum-1;
        }
    }    
    cout<<sum<<endl;
    for(int m=1;m<=n-1;m++){
        m1=m;
        if(add[m-1]!=add[m]){
            cout<<add[m-1]<<" ";
        }
    }  
    if(add[m1-1]!=add[m1]){
        cout<<add[m1];
    }
    cout<<endl;
}