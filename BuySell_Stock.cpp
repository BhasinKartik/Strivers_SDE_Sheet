#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxP=0;
    int buy=prices[0];
    int sell=prices[0];
    for(int i=1;i<prices.size();i++){
sell=prices[i];
if(sell>=buy)maxP=max(maxP,sell-buy);
buy=min(buy,prices[i]);
    }
    return maxP;
}