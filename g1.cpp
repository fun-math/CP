#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l,r,k,t;
    cin>>t;
    while(t--){
        cin>>l>>r>>k;
        if(l==r){if(l!=1)cout<<"YES\n";else cout<<"NO\n";}
        else if(k>=((r+1)/2-(l)/2))cout<<"YES\n";
        else cout<<"NO\n";
    }

}
