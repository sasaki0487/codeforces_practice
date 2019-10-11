#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,n,x,d,h;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a = 0 , b = 0 , c = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> d >> h;
			c = max(c,d);
			if(d - h > a - b){
				a = d;
				b = h;
			}
		}
		if(x <= c){
			cout << "1" << endl;
			continue;
		}
		if(a == 0 && b == 0){
			cout << "-1" << endl;
			continue;
		}
		int ans = ceil(((x - c + a - b - 1) / (a - b)));
		cout << ans + 1 << endl;
		
	}


	return 0;
}
