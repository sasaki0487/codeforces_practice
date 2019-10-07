/*
	mark the grid with white(2) and black(1) by the rule given
	remember to add a white block after a black consequence to prevent
	the consequence grow longer if there is still space
	if there is conflict between B & W then output 0
	after marking the grid
	multiply the answer by 2 per unmarked space
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int r,c,tmp;
	cin >> r >> c;
	vector<vector<int>> v(r,vector<int> (c,0));
	for(int i = 0 ; i < r ; i++){
		cin >> tmp;
		if(tmp == 0){
			v[i][0] = 2;
		}
		else{
			int j;
			for(j = 0 ; j < tmp ; j++){
				v[i][j] = 1;
			}
			if(j < c){
				v[i][j] = 2;
			}
		}
	}
	for(int i = 0 ; i < c ; i++){
		cin >> tmp;
		if(tmp == 0){
			if(v[0][i] == 1){
				cout << 0 << endl;
				return 0;
			}
			else{
				v[0][i] = 2;
			}	
		}
		else{
			int j;
			for(j = 0 ; j < tmp ; j++){
				if(v[j][i] == 2){
					cout << 0 << endl;
					return 0;
				}
				v[j][i] = 1;
			}
			if(j < r){
				if(v[j][i] == 1){
					cout << 0 << endl;
					return 0;
				}
				//cerr << j << " " << i << endl;
				v[j][i] = 2;
			}
		}
	}
	ll ans = 1;
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if(v[i][j] == 0){
				ans *= 2;
				ans %= 1000000007;
			}
		}
	}
	cout << ans << endl;

	return 0;
}
