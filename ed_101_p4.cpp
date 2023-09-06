#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int m=int(log2(int(log2(n))));

		if((1<<(1<<m))==n) m--;

		if(n<5)cout<<n+m-1<<"\n";
		else cout<<n+m-3<<"\n";
		for(int i=1;i<m;i++){
			int temp=(1<<(1<<(i)));
			for(int j=(1<<(1<<(i-1)))+1;j<temp;j++){
				cout<<j<<" "<<temp<<"\n";
			}
		}
		for(int j=(1<<(1<<(m)))+1;j<n;j++){
			cout<<j<<" "<<n<<"\n";
		}	

		cout<<n<<" "<<(1<<(1<<(m)))<<"\n";
		cout<<n<<" "<<(1<<(1<<(m)))<<"\n";
		for(int i=m;i>0;i--){
			cout<<(1<<(1<<(i)))<<" "<<(1<<(1<<(i-1)))<<"\n";
		}
	}
}
