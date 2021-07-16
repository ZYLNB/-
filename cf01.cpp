#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int a;
int b;
int c[10000];
int min1;
int min2;
int min3;
int maxp;
int minp;
int mins;
int main(){
    cin>>a;
for(int i=1;i<=a;i++){
    cin>>b;
    for(int x=1;x<=b;x++){
    cin>>c[x];
    }
    maxp=max_element(c+1,c+b+1)-c;
    minp=min_element(c+1,c+b+1)-c;
    if(maxp>=minp){
        min1=maxp;
        min2=minp+b+1-maxp;
        min3=b-minp+1;
    }
    if(maxp<minp){
        min1=minp;
        min2=maxp+b+1-minp;
        min3=b-maxp+1;
    }
        mins=min({min1,min2,min3});
        cout<<mins<<endl;
    }
return 0;
}