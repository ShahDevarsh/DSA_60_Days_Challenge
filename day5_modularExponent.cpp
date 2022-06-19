#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
    int ans=1;
    while(n>0){
        if(n%2){
            ans=(1LL*ans*x)%m; //multiplication might result into value greater than int range hence typecasting
        }
        x=(1LL*x*x)%m; //multiplication might result into value greater than int range hence typecasting
        n/=2;
    }
    return ans;
}

int main(){
    int x,n,m;cin>>x>>n>>m;
    int ans=modularExponentiation(x,n,m);
    cout<<ans;
}
