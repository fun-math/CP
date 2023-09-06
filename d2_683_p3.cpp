#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n;
	long long w;
	cin>>t;
	while(t--){
		cin>>n>>w;
		vector<pair<int,int>> t;
		//cout<<n<<"\n";
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			t.push_back(make_pair(temp,i+1));
		}
		//cout<<"\n";
		sort(t.begin(),t.end());
		long long sum=0;
		vector<int> v;
		for(int i=n-1;i>=0;i--){
			if(sum+t[i].first<=w){sum+=t[i].first;v.push_back(i);}
			if(sum>=((w+1)/2))break;
		}

		if(sum>=((w+1)/2)){
			cout<<v.size()<<"\n";
			for(auto x : v)cout<<t[x].second<<" ";
			cout<<"\n";
		}
		else cout<<-1<<"\n";
	}
}