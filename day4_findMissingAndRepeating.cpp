#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n){
    int xorvalue=arr[0];
    for(int i=1;i<n;i++){
        xorvalue^=arr[i];
    }
    for(int i=1;i<=n;i++){
        xorvalue^=arr[i];
    }
    int missing=0,repeating=0,cnt=0;
    int right_most_bit=xorvalue & ~(xorvalue-1);
    for(int i=0;i<n;i++){
        if(right_most_bit&arr[i]){
            missing^=arr[i];
        }else{
            repeating^=arr[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(right_most_bit&i){
            missing^=i;
        }else{
            repeating^=i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==repeating)cnt++;
    }
    if(cnt!=2)swap(missing,repeating);
    return {missing,repeating};
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    pair<int,int> ans=missingAndRepeating(arr,n);
    cout<<ans.first<<" "<<ans.second;
}
