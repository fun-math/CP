#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	string s;
	while(t--){
		
		cin>>s;
		int c=0,d=0;
		int n=s.size();
		bool e=false;;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(')c=i;
			if(s[i]==')')d=i;
		}

		if(n%2==0)e=true;
		if(c<d){
			//if(c%2==0 && (d-c-1)%2==0 && (n-d-1)%2==0)e=true;
			//if(n%2==0)e=true;
			//if((d-c-1)%2!=0)if((d-c+1)==n)e=false;
		}
		else {
			//if(d%2==1 && (c-d-1)%2==0 && (n-c-1)%2==1)e=true;	
			if(d==0 || c==n-1)e=false;	
		}
		if(e)cout<<"YES\n";
		else cout<<"NO\n";
		//cout<<c<<" "<<d<<"\n";
	}
}
