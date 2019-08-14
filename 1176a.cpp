#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	for(int i = 0 ; i < n ; i ++){
		int cnt = 0;
		long long int num;
		cin >> num;
		while(num % 2 == 0){
			num /= 2;
			cnt ++;
		}
		while(num % 3 == 0){
			num /= 3;
			cnt += 2;
		}
		while(num % 5 == 0){
			num /= 5;
			cnt += 3;
		}
		if(num != 1)
			cout << "-1" << "\n";
		else 
			cout << cnt << "\n";
	}

	return 0;
}