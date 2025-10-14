#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int hgt[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(hgt)/4;
    int mx=0;
    int lp=0;
    int rp=n-1;
    while(lp<rp){
        
            int w=rp-lp;
            int h=min(hgt[lp],hgt[rp]);
            int area=h*w;
            mx=max(area,mx);
            hgt[lp]>hgt[rp] ? rp--:lp++;
    }
    cout<<mx;
}