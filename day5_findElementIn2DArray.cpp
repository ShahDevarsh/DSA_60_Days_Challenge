#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>arr, int first, int last, int target){
    int mid=(first+last)/2;
    if(first<=last){
        if(arr[mid]>target){
            mid=binarysearch(arr,first,mid-1,target);
        }
        else{
            mid=binarysearch(arr,mid+1,last,target);
        }
    }
    return mid;
}
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    vector<int>temp(m);
    for(int i=0;i<m;i++){
        temp[i]=mat[i][0];
    }
    int requiredrow=binarysearch(temp,0,m-1,target);
    vector<int>req(n);
    for(int i=0;i<n;i++)req[i]=mat[requiredrow][i];
    int ans=req[binarysearch(req,0,n-1,target)];
    if(ans==target)return true;
    else return false;

}
int main(){
    int n,m,target;cin>>n>>m>>target;
    vector<vector<int>>arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool ans=findTargetInMatrix(arr,n,m,target);
    cout<<ans;
}
