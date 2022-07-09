#include <bits/stdc++.h>
using namespace std;

//Moore voting algorithm
int findMajorityElement(int arr[],int n){
    int currval,cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0) currval=arr[i];
        if(arr[i]==currval) cnt++;
        else cnt--;
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==currval)cnt++;
    }
    if(cnt>(n/2)) return currval;
    else return -1;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findMajorityElement(arr,n);
    cout<<ans;
}
