#include<bits/stdc++.h>
using namespace std;
string str;
int cf;
string y;
int cunt(int p){
    str=to_string(p);
    y=str[1];
    cf=stoi(y);
    cf=((1+cf)*cf)/2;
    return cf;
}
int main(){
    int a;
    int b;
    int c=1;
    int d;
    int sum=1;
    cin>>a;
    b=a;
    d=a;
    while(b>1){
        b=b/2;
        c=c+1;
    }       
     
    for(int i=1;i<=c;i++){
        d=d/2;
        for(int x=1;x<=d;x++){
            sum=sum+cunt(x); 
        }


    }
    cout<<sum<<endl;
}