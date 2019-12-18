#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll arr[9]={1,11,111,1111,11111,111111,1111111,11111111,111111111};
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt = 0,f = 0;
		for(int i = 0 ; i < 9 ; i++){
			for(int j = 1 ; j <= 9 ; j++){
				//cout << j*arr[i] << " " << n << endl;
				if(j*arr[i] <= n){
					cnt++;
				}
				else{
					f = 1;
					break;
				}
			}
			if(f == 1){
				break;
			}
		}
		cout << cnt << endl;
	}


	return 0;
}
