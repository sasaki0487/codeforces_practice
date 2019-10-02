#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b;
	int arr[7][7] = {0};
	int ans = INT_MAX;
	cin >> n >> m;
	if(n < 7){
		for(int i = 0 ; i < m ; i++){
			cin >> a >> b;
		}
		cout << m << endl;
		return 0;
	}
	for(int i = 0 ; i < m ; i++){
		cin >> a >> b;
		arr[a-1][b-1] = 1;
		arr[b-1][a-1] = 1;
	}
	for(int i = 0 ; i < 7 ; i++){
		for(int j = i+1 ; j < 7 ; j++){
			int cnt = 0;
			for(int k = 0 ; k < 7 ; k++){
				if(arr[i][k] && arr[k][j]){
					cnt++;
				}
			}1
			ans = min(cnt,ans);
		}
	}
	cout << m - ans << endl;

	return 0;
}