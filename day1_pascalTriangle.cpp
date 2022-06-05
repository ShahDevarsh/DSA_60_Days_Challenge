#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n){

    vector<vector<long long>>v;
    
    for(int i=0;i<n;i++){
        vector<long long>v2;
        if(i==0)v2.push_back(1);
        else if(i==1){v2.push_back(1); v2.push_back(1);}
        else{
                v2.push_back(1);
                for(int j=0;j<(int)v[i-1].size()-1;j++){
                    long long temp=v[i-1][j]+v[i-1][j+1];
                    v2.push_back(temp);
                }
                v2.push_back(1);   
        }
        v.push_back(v2);
    }
    return v;
}

int main(){
    int n;cin>>n;
    vector<vector<long long>>ans;
    ans=printPascal(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<"\n";
    }
}
