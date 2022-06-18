#include <bits/stdc++.h>
using namespace std;

int mergesort(int arr[], int low, int mid, int high){
    int temp[high-low+1];
    int i=low,j=mid+1,k=0,ans=0;
    while((i<=mid) && (j<=high)){
        if(arr[i]>arr[j]){
            ans+=(mid-i+1); //as the array is sorted we need to invert all the remaining
            temp[k++]=arr[j++];
        }else{
            temp[k++]=arr[i++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=high){
        temp[k++]=arr[j++];
    }
    for(int i=0;i<(high-low+1);i++){
        arr[i+low]=temp[i];
    }
    return ans;
}
int countinversions(int arr[], int low, int high){
    int ans=0,mid;
    if(low<high){
        mid=(low+high)/2;
        ans+=countinversions(arr,low,mid);
        ans+=countinversions(arr,mid+1,high);
        ans+=mergesort(arr,low,mid,high);
    }
    return ans;

}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=countinversions(arr,0,n-1);
    cout<<ans;
}
