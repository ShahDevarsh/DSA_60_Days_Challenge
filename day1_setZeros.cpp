#include <bits/stdc++.h>
using namespace std;
#define ll long long

void setZeroes(vector<vector<int>>& matrix){

    bool isColZero=false;
    for(int row=0;row<matrix.size();row++){
        if(matrix[row][0]==0)isColZero=true;
        for(int col=1;col<matrix[row].size();col++){
            if(matrix[row][col]==0){
                matrix[row][0]=0;matrix[0][col]=0;
            }
        }
    }

    for(int row=(int)matrix.size()-1;row>=0;row--){
        for(int col=(int)matrix[row].size()-1;col>=1;col--){
            if(matrix[row][0]==0 || matrix[0][col]==0){
                matrix[row][col]=0;
            }
        }
        if(isColZero)matrix[row][0]=0;
    }

    for(int row=0;row<matrix.size();row++){
        for(int col=0;col<matrix[row].size();col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    /* Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's. */
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>>v(rows,vector<int>(cols,0));
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            cin>>v[row][col];
        }
    }
    setZeroes(v);
}
