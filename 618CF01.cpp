#include <bits/stdc++.h>
using namespace std;
int shu[10000];
int sum;
int c;
int d;
int main(){
    int a;
    cin>>a;
    int b;
    for(int i=1;i<=a;i++){
        cin>>b;
        sum=0;
        for(int x=1;x<=b;x++){
            cin>>shu[x];
            sum=sum+shu[x];
        }
            if(sum>b){
                c=sum-b;
            }
            if(sum==b){
                c=0;01
            }
            if(sum<b){
//                d=b+1;
                c=1;
//                sum=sum+1;
//                while(sum<=d){
//                    sum=sum+1;
 //                   c=c+1;
 //               }
            }
        cout<<c<<endl;
    }
}