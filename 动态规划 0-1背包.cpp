#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int dp[1000][10000];
int wt[10000];
int val[10000];
int a;
int b;
int main(){
    cin>>a;
    cin>>b;
    for(int y=1;y<=b;y++){
        cin>>wt[y];
        cin>>val[y];
    }
    for(int i=1;i<=b;i++){
        for(int w=1;w<=a;w++){
            if(w-wt[i]<0){
                dp[i][w]=dp[i-1][w];
            }
            else dp[i][w]=max(dp[i-1][w],dp[i-1][w-wt[i]]+val[i]);
        }
    }
    cout<<dp[b][a]<<endl;
    // for(int i=1;i<=b;i++){
    //     for(int w=1;w<=a;w++){
    //         cout<<dp[i][w]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}