#include<bits/stdc++.h>
using namespace std;

int lb(int* a,int l,int r,int x){
	int k=l;
	int n=r-l+1;
	for(int b=n/2;b>=1;b/=2){
		while(k+b<=r && a[k+b]<=x)k+=b;
	}
	return k;
}

bool check(int& n,int* a,long long* p,int& s,int mx,int mi){
	
	//cout<<mi<<" "<<mx<<"\n";
	if(mi>mx)return false;
	long long temp=0;
	if(mi>0)temp=p[mi-1];
	if(p[mx]-temp<s)return false;
	if(p[mx]-temp==s)return true;

	int mid=(a[mi]+a[mx])/2;
	int midpos=lb(a,mi,mx,mid);
	if(a[mi]==a[mx])return false;
	return check(n,a,p,s,midpos,mi) || check(n,a,p,s,mx,midpos+1);

}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,q;
	cin>>t;

	// int a[10]={2,3,8,8,11,12,12,14,14,14};
	// int c[2]={12,13};
	// for(int i=0;i<2;i++){
	// 	cout<<lb(a,4,9,c[i])<<"\n";
	// }

	while(t--){
		cin>>n>>q;
		int a[n];
		//int mx=0,mi=int(1e7);
		long long p[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			//cin>>a[i];
			if(i==0)p[i]=a[i];
			else p[i]=p[i-1]+a[i];
		}
		//sort(p.begin(),p.end());
		//mx=a[n-1];mi=a[0];
		int s;
		for(int i=0;i<q;i++){
			cin>>s;
			if(check(n,a,p,s,n-1,0))cout<<"Yes\n";
			else cout<<"No\n";
			//cout<<endl;
		}


		//cout<<"\n";
	}
	
}