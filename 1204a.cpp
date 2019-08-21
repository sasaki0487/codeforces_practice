#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int ans = 0;
	for(int i = 1 ; i < str.size() ; i++){
		if(str[i] == '1'){
			ans++;
			break;
		}
	}
	if(ans == 0 && str.size() % 2 == 0){
		ans++;
	}
	ans += (str.size()-1) / 2;
	cout << ans << endl;

	return 0;
}