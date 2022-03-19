#include<bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		if(n==1){
			int y;
			cin>>y;
			cout<<y<<endl;
		}
		else{
		vector<int> v;
		while(n-->0){
			int x;
			cin>>x;
			v.push_back(x);
		}

		int ans;
		sort(v.begin(),v.end());
		for(int i=1;i<v.size()-1;i++){
				if(v[i-1]!=v[i]){
					if(v[i]!=v[i+1]){
						ans=v[i]; break;
					}
					else ans=v[i-1]; 
				}
				else ans=v[i+1];
		}
		cout<<ans<<endl;
	}
}
}
