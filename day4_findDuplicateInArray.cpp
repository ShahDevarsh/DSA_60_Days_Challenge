#include <bits/stdc++.h>
using namespace std;

//we can do it using hash map but in worst case it will be O(nlogn) n for loop and logn for each insertion
//using hare and tortoise method O(n)
int findDuplicate(vector<int> &arr, int n){
    int sp=arr[0],fp=arr[0];
    do{
        sp=arr[sp];
        fp=arr[arr[fp]];
    }while(sp!=fp);

    fp=arr[0];

    while(fp!=sp){
        sp=arr[sp];
        fp=arr[fp];
    }
    return sp;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=findDuplicate(arr,n);
    cout<<ans;
}
