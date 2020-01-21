#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int n,k,x;
	cin >> n >> k;
	char c;
	vector<int> v,ori;
	int tmp = n;
	while(tmp--){
		cin >> c;
		v.push_back(c-'0');
		ori.push_back(c-'0');
	}
	int f = 0;
	for(int i = 0 ; i + k < n ; i++){
		v[i+k] = v[i];
	}
	for(int i = 0 ; i < n ; i++){
		if(v[i] > ori[i]){
			break;
		}
		else if(v[i] < ori[i]){
			f = 1;
			break;
		}
	}
	if(f == 1){
		for(int i = 0 ; i < k ; i++){
			if(v[i] != 9){
				f = i;
			}
		}
		
		for(int i = f ; i < k ; i++){
			if(v[i] == 9){
				v[i] = 0;
			}
		}
		v[f]++;
		for(int i = 0 ; i + k < n ; i++){
			v[i+k] = v[i];
		}
	}
	cout << v.size() << endl;

	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i];
	}
	cout << endl;
	return 0;
}


