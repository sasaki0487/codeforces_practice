#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		int cnt = 0;
		cin >> n;
		vector<string> v(n,"");
		vector<int> f(n,0);
		set<string> in;
		for(int i = 0 ; i < n ; i++){
			cin >> v[i];
			in.insert(v[i]);
		}

		for(int i = 0 ; i < n ; i++){
			if(f[i] == 1){
				continue;
			}

			vector<int> pos;
			for(int j = i + 1 ; j < n ; j++){
				if(v[i] == v[j]){
					pos.push_back(j);
					f[j] = 1;
					cnt++;

					for(int k = 0 ; k < 4 && v[i] == v[j] ; k++){
						for(char c = '0' ; c <= '9' ; c++){
							string s = v[j];
							s[k] = c;
							if(!in.count(s)){
								in.insert(s);
								v[j] = s;
								break;
							}
						}
					}
				}
			}
		}

		cout << cnt << endl;
		for(auto it : v){
			cout << it << endl;
		}

	}


	return 0;
}
