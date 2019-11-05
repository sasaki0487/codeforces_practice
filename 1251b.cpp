#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int q,n;
	string s;
	cin >> q;
	while(q--){
		cin >> n;
		int o=0,e0=0,e1=0;
		for(int i = 0 ; i < n ; i++){

			cin >> s;
			int z = 0;
			if(s.size() % 2 == 1){
				o++;
			}
			else{
				for(auto c:s){
					if(c == '0'){
						z++;
					}
				}
				if(z % 2 == 0){
					e0++;
				}
				else{
					e1++;
				}
			}
		}
		int ans = n - ((o == 0 && (e1 % 2) == 1) ? 1 : 0);
		cout << ans << endl;
	}


	return 0;
}
