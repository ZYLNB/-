#include <iostream>
#include <cstdio>
#include<cstring>
#include<set>
#include<cmath>
using namespace std;
int a[1000000];
int b;
set<int>set1;
int main(){
    int c,d;
    cin>>c;
    cin>>d;
    for(int i=1;i<=c;i++){
        cin>>a[i];
    }
    for(int y=1;y<=d;y++){
        cin>>b;
        set1.insert(b);
    }
    for(int i=1;i<=c;i++){
        auto e=set1.find(a[i]);
        if(e!=set1.end()){
            cout << a[i] << " ";
        }
    }
}