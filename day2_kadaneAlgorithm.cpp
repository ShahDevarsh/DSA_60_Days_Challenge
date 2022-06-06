#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& a) {
    int curr_max=0,maxi=a[0];
    for(int i=0;i<a.size();i++){
        curr_max=max(curr_max+a[i],a[i]);
        maxi=max(maxi,curr_max);
        if(curr_max<0)curr_max=0;
    }
    return maxi;
}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=maxSubArray(v);
    cout<<ans;
}
