#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,m;
	cin>>t;
	while(t--){
		//cin>>n;
		cin>>n>>m;
		int a[n][m];
		int k=0;
		string s;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>s;
			for(int j=0;j<m;j++){
				if(s[j]=='0')a[i][j]=0;
				else a[i][j]=1;
				/*if(a[i][j]==1){
					k++;
					v.push_back(i);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j);
					v.push_back(i);
					v.push_back(j+1);

					v.push_back(i);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j+1);

					v.push_back(i);
					v.push_back(j);
					v.push_back(i);
					v.push_back(j+1);
					v.push_back(i+1);
					v.push_back(j+1);
				}*/
			}
		}
			for(int i=0;i<n-1;i++){
				for(int j=0;j<m-1;j++){
					int sum=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
					if(sum>=3){
						if(a[i][j]==1){v.push_back(i);v.push_back(j);a[i][j]=0;}
						if(a[i+1][j]==1){v.push_back(i+1);v.push_back(j);a[i+1][j]=0;}
						if(a[i][j+1]==1){v.push_back(i);v.push_back(j+1);a[i][j+1]=0;}
						if(a[i+1][j+1]==1){v.push_back(i+1);v.push_back(j+1);a[i+1][j+1]=0;}
					}
				}
			}
			
			for(int i=0;i<n-1;i++){
				for(int j=0;j<m-1;j++){
					int sum=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
					if(sum==4){
						v.push_back(i);
						v.push_back(j);
						v.push_back(i+1);
						v.push_back(j);
						v.push_back(i);
						v.push_back(j+1);

						v.push_back(i);
						v.push_back(j);
						v.push_back(i+1);
						v.push_back(j);
						v.push_back(i+1);
						v.push_back(j+1);

						v.push_back(i);
						v.push_back(j+1);
						v.push_back(i+1);
						v.push_back(j+1);
						v.push_back(i);
						v.push_back(j);

						v.push_back(i);
						v.push_back(j+1);
						v.push_back(i+1);
						v.push_back(j+1);
						v.push_back(i+1);
						v.push_back(j);

						for(int d=0;d<2;d++){
							for(int e=0;e<2;e++){
								a[i+d][j+e]=0;
							}
						}

					}	
				}
			}
			for(int i=0;i<n-1;i++){
				for(int j=0;j<m-1;j++){
					int sum=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
					if(sum==2){
						int x=-1,y,z,w;
						int x2=-1,y2,z2,w2;
						for(int d=0;d<2;d++){
							for(int e=0;e<2;e++){
								if(a[i+d][j+e]==1){
									if(x==-1){
										x=i+d;
										y=j+e;
									}
									else {
										z=i+d;
										w=j+e;
									}
									a[i+d][j+e]=0;
								}
								else {
									if(x2==-1){
										x2=i+d;
										y2=j+e;
									}
									else {
										z2=i+d;
										w2=j+e;
									}
								}
							}
						}
						v.push_back(x);
						v.push_back(y);
						v.push_back(z2);
						v.push_back(w2);
						v.push_back(x2);
						v.push_back(y2);

						v.push_back(x2);
						v.push_back(y2);
						v.push_back(z);
						v.push_back(w);
						v.push_back(z2);
						v.push_back(w2);
					}
				}
			}
//cout<<"sum"<<sum<<"\n";
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i][j]==1){
					k++;
					v.push_back(i);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j);
					v.push_back(i);
					v.push_back(j+1);

					v.push_back(i);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j);
					v.push_back(i+1);
					v.push_back(j+1);

					v.push_back(i);
					v.push_back(j);
					v.push_back(i);
					v.push_back(j+1);
					v.push_back(i+1);
					v.push_back(j+1);
					}
				}
			}

		cout<<v.size()/6<<"\n";
		for(int i=0;i<v.size()/6;i++){
			//for(int x=0;x<3;x++){
			for(int j=0;j<6;j++){
				if(j%2==0){
					if(v[6*i+j]<n)cout<<v[6*i+j]+1<<" ";
					else cout<<n-1<<" ";
				}
				else {
					if(v[6*i+j]<m)cout<<v[6*i+j]+1<<" ";
					else cout<<m-1<<" ";	
				}
			}

			cout<<"\n";
		//}
		}
		//long long sum=0;
		
		
	}
}