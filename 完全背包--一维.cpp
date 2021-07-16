#include <bits/stdc++.h>
#define MAX(a, b) ((a > b) ? (a) : (b))
#define MIN(a, b) ((a < b) ? (a) : (b))
#define INF 0x3f3f3f3f
#define ll long long
#define LINF 0x3f3f3f3f3f3f3f3f
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LOCALDEBUG freopen("E:\\my\\works\\temp\\input.txt", "r", stdin); freopen("E:\\my\\works\\temp\\output.txt", "w", stdout);
#define STARTCLOCK int STARTTIME = clock();
#define SHOWTIME cout << endl << "time=" << clock() - STARTTIME << endl;
using namespace std;
ll dp[20000000];
ll wt[1000000];
ll val[1000000];
ll a;
ll b;
ll sum;
ll s;
ll number;
int main(){
    IOS
    //LOCALDEBUG
    //STARTCLOCK
    cin>>a;
    cin>>b;
    //cout<<"b="<<b<<endl;
    sum=b;   
    //cout<<"sum0="<<sum<<endl;
    for(int y=1;y<=b;y++){
        cin>>wt[y];
        cin>>val[y];
    }
    for(int y=1;y<=b;y++){
        s=2;
        number=1;
        while(s*wt[y]<=a){
            s=s*2;
            number++;
        }
        s=s/2;
        //cout<<"s="<<s<<endl;
        number--;
        //cout<<"number="<<number<<endl;
        sum=sum+number;
        //cout<<"sum="<<sum<<endl;
        for(int t=-number+sum+1;t<=sum;t++){
            wt[t]=s*(wt[y]);
            val[t]=s*(val[y]);
            //cout << t << " " << wt[t] << " " << val[t] << endl;
            s=s/2;
        }
    }
    for(int i=1;i<=sum;i++){
        for(int w=1;w<=a;w++){//不能倒过来！
            if(w-wt[i]>=0){
                dp[w]=MAX(dp[w],dp[w-wt[i]]+val[i]);//核心！
            }
        }
    }
    cout<<dp[a]<<endl;
    // for(int i=1;i<=sum;i++){
    //     for(int w=1;w<=a;w++){
    //         cout<<dp[i][w]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int u=1;u<=sum;u++){
    //     cout<<wt[u]<<" "<<val[u]<<endl;
    // }
    //SHOWTIME
    return 0;
}