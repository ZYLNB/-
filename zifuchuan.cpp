#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
    int a=10000;
    int b;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    string s1;
    int a1;
    int yes=1;
    cin>>b;
    for(int i = 0; i <= 20000; i++) {
        a=10000;
        a = a+i;
        str=to_string(a);
        yes=1;
        s1="0";
        for(int e=0;e<=2;e++){
            s1.push_back(str[e]);
            s1.push_back(str[e+1]);
            s1.push_back(str[e+2]);
            a1=stoi(s1);
            if(a1%b!=0){
                yes=0;
            }
        }
        if(yes==1){
            cout<<a<<endl;
        }
    }
    return 0;
}