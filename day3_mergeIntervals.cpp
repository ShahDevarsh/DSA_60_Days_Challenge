#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals){
    
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>v;
    v.push_back({intervals[0][0],intervals[0][1]});
    for(int i=1;i<intervals.size();i++){
        if(v.back()[1]>=intervals[i][0]){
            v.back()[1]=max(intervals[i][1],v.back()[1]);
        }
        else{
            v.push_back({intervals[i][0],intervals[i][1]});
        }
    }
    return v;
}


int main(){
    int n;cin>>n;
    vector<vector<int>>a(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    mergeIntervals(a);
}
