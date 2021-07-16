#include <iostream>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int e[3];
int main(){
    int a;
    int sum;
    int longs;
    string b;
    char d;
    cin>>a;
    string str1;
    string str2;
    string str3;
    int f;
    int g;
    int h;
    for(int i=0;i<=a-1;i++){
        cin>>b;
        if(b<="9" && b>="0"){
            e[0]=stoi(b);
            cin>>e[1];
        }
        else {
            d=stoi(b);
            cin>>e[0];
            cin>>e[1];
            }
        if(d=='a'){
            sum=e[0]+e[1];
            longs=2+str1.length()+str2.length()+str3.length();
            cout<<e[0]<<"+"<<e[1]<<"="<<sum<<endl<<longs<<endl;
        }
        if(d=='b'){
            sum=e[0]-e[1];
            longs=2+str1.length()+str2.length()+str3.length();
            cout<<e[0]<<"-"<<e[1]<<"="<<sum<<endl<<longs<<endl;
        }
        if(d=='c'){
            sum=e[0]*e[1];
            longs=2+str1.length()+str2.length()+str3.length();
            cout<<e[0]<<"*"<<e[1]<<"="<<sum<<endl<<longs<<endl;
        }
    }
    return 0;
}