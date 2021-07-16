#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b;
    int sum;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>b;
        for(int x=1;x<=b;x++){
            if(b%2==0){
                if(x%2==1){
                    cout<<x+1<<" ";
                }
                if(x%2==0){
                    cout<<x-1<<" ";
                }
            }
            if(b%2==1){
                if(x%2==1 && x!=b && x!=b-2){
                    cout<<x+1<<" ";
                }
                if(x%2==0 && x!=b-1){
                    cout<<x-1<<" ";
                }
                if(x==b-2){
                    cout<<x+1<<" ";
                }
                if(x==b-1){
                    cout<<b<<" ";
                }
                if(x==b){
                    cout<<b-2<<" ";
                }
                }
            }
        }
    }