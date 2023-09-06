#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int b[n];
		int c[n];
		vector<bool> p(2*n,true);
		for(int i=0;i<n;i++){cin>>b[i];b[i]--;p[b[i]]=false;}
		int ind=0;
		for(int i=0;i<2*n;i++)if(p[i]){c[ind]=i;ind++;}
		int s=0;
		int i=0,j=0;
		while(j<n){
			if(c[i]<=b[j]){i++;j++;}
			else {
				j++;
				s++;
			}
		}
		int e=n;
		i=n-1;j=n-1;
		while(j>=0){
			if(c[i]>=b[j]){i--;j--;}
			else {
				j--;
				e--;
			}
		}
		//cout<<e<<" "<<s<<"\n";
		cout<<e-s+1<<"\n";

	}
}