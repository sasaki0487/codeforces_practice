/*
	add up all num <= 2048
	if sum is larger than 2048 then the answer is yes
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,n;
	long long in,sum;
	cin >> q;
	for(int i = 0 ; i < q ; i++){
		sum = 0;
		cin >> n;
		while(n--){
			cin >> in;
			if(in <= 2048 && sum < 2048) sum += in;
		}
		if(sum >= 2048) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}