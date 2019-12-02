#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,r,g,b;
	cin >> t;
	while(t--){
		vector<int> v(3,0);
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(),v.end());
		if(v[2] > v[0]+v[1]){
			cout << v[0] + v[1] << endl;
		}
		else{
			cout << (v[0] + v[1] + v[2]) / 2 << endl;
		}
	}

	return 0;
}