/*
	if k == 0 return origin string
	if n == 1 return 0
	make the first digit 1 and the rest 0 if they are not
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , k , pos = 1;
	string s;
	cin >> n >> k >> s;
	if(k == 0){
		cout << s << endl;
		return 0;
	}
	if(n == 1){
		cout << '0' << endl;
		return 0;
	}
	if(s[0] != '1'){
		s[0] = '1';
		k--;
	}
	while(pos < n && k > 0){
		if(s[pos] != '0'){
			s[pos] = '0';
			k--;
		}
		pos++;
	}

	cout << s << endl;

	return 0;
}