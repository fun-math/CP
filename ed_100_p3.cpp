#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int t[n+1],x[n];
		int src=0;
		int dest=0;
		int prev=0;
		int s=0;
		//int t,x;
		int v=0;
		t[n]=1e9;
		for(int i=0;i<n;i++){
			cin>>t[i]>>x[i];			
		}
		for(int i=0;i<n;i++){
			//if(i==n-1){s++;break;}
			//cout<<src<<" "<<dest<<" "<<prev<<" "<<s<<"\n";
			if(t[i]-prev>=abs(dest-src))v=0;
			if(v==0){
				prev=t[i];
				src=dest;
				dest=x[i];
				if(dest-src>0)v=1;
				else v=-1;
				if(t[i+1]-t[i]>=abs(dest-src) || i==n-1)s++;
			}
			else {
				int gap=(x[i]-(v*(t[i]-prev)+src));
				if(gap/v>=0 && (gap/v<=(t[i+1]-t[i])||i==n-1) && (dest-x[i])/v>=0)s++;
			}
		}
		cout<<s<<"\n";

		
	}
}