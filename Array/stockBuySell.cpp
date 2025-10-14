#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int price[]={7,1,5,3,6,4};
    int bestBuy=price[0];
    int maxProfit=0;
    int n=sizeof(price)/4;
    for(int i=1;i<n;i++){
        if(price[i]>bestBuy){
            maxProfit=max(maxProfit,price[i]-bestBuy);
        }
        bestBuy=min(bestBuy,price[i]);
    }
    cout<<maxProfit;
}