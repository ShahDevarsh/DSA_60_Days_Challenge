#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++)reverse(mat[i].begin(),mat[i].end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<mat[i][j]<<" ";cout<<endl;
    }
}

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    rotateMatrix(a,n,m);
}
