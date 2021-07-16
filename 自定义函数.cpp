#include <iostream>
#include <cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int wether(int x)
{
    int n=1;
    for(int b=2;b<x;b++){
        if(x%b==0){
            n=0;
        }
    }
    return n;
}
int main(){
    int a;
    int b;
    int c;
    cin>>a;
    for(int i=4;i<=a;i=i+2){
        for(int x=2;x<i;x=x+1){
            if(wether(x)==1 && wether(i-x)==1){
                b=x;
                c=i-b;
                break;
            }
        }
        cout<<i<<"="<<b<<"+"<<c<<endl;
    }
}