#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int len1=m-1,len2=n-1,len=m+n-1;
    while(len1>=0 && len2>=0){
        if(nums1[len1]>nums2[len2]){
            nums1[len--]=nums1[len1--];
        }else{
            nums1[len--]=nums2[len2--];
        }
    }
    if(len2>=0){
        while(len2>=0){
            nums1[len--]=nums2[len--];
        }
    }
    for(int i=0;i<nums1.size();i++)cout<<nums1[i]<<" ";
}

int main(){
    int n,m;cin>>m>>n;
    vector<int>nums1(n+m),nums2(n);
    for(int i=0;i<n+m;i++)cin>>nums1[i];
    for(int i=0;i<n;i++)cin>>nums2[i];
    mergeSortedArrays(nums1,m,nums2,n);
}
