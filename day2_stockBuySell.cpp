#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){

    int mini=prices[0],maxi=prices[0],ans=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<mini){
            mini=prices[i];maxi=0;
        }
        if(prices[i]>maxi){
            maxi=prices[i];
        }
        ans=max(ans,maxi-mini);
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=maximumProfit(a);
    cout<<ans;
}
