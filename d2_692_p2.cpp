#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
	vector<bool> p(10,false);
	long long m=n;
	while(m>0){
		p[m%10]=true;
		m/=10;
	}
	for(int i=1;i<10;i++){
		if(p[i])if(n%i!=0) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	string s;
	while(t--){
		long long n;
		cin>>n;
		while(true){
			if(check(n)){
				cout<<n<<"\n";
				break;
			}
			else n++;
		}
		
	}
}
