#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int q;
	cin >> q;	
	while(q--){
		int l;
		string s[2];
		cin >> l >> s[0] >> s[1];
		int x = 0 , y = 0;
		while(x < l){
			if(s[y][x] < '3'){
				x++;
			}
			else{
				if(s[y^1][x] < '3'){
					break;
				}
				else{
					y ^= 1;
					x++;
				}
			}
		}
		if(x == l && y == 1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}
