#include <bits/stdc++.h> 
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size(),cnt1=1,cnt2=1,curr1=arr[0],curr2=arr[1];
    vector<int>ans;
    for(int i=2;i<arr.size();i++){
        if(cnt1==0){
            curr1=arr[i];
        }
        if(cnt2==0){
            curr2=arr[i];
        }
        if(curr1==arr[i])cnt1++;
        else if(curr2==arr[i])cnt2++;
        else{
            cnt1--;cnt2--;
        }
    }
    cnt1=0;cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==curr1)cnt1++;
        else if(arr[i]==curr2)cnt2++;
    }
    if(cnt1>(n/3))ans.push_back(curr1);
    if(cnt2>(n/3))ans.push_back(curr2);
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans=majorityElementII(arr);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}