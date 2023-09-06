#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int a[n];
	int x=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x=x^a[i];
	}
	if(n%2==1){
		cout<<"YES\n";
		cout<<n-1<<"\n";
		for(int i=1;i<n;i+=2){
			cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
		}
		for(int i=1;i<n;i+=2){
			cout<<i<<" "<<i+1<<" "<<n<<"\n";
		}
	}

	else {
		if(x>0)cout<<"NO\n";
		else {
			cout<<"YES\n";
			cout<<n-2<<"\n";
			for(int i=1;i<n-1;i+=2){
				cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
			}
			for(int i=1;i<n-1;i+=2){
				cout<<i<<" "<<i+1<<" "<<n-1<<"\n";
			}
		}
	}

	
}