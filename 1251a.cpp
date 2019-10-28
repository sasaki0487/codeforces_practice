/*
	count the length of same char adjacent
	if the the length is odd then add to the answer
	else ignore it
	use a set to store and auto sort the chars in alphabetic order
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t;
	string str;
	cin >> t;
	while(t--){
		set<char> s;
		cin >> str;
		int l = str.size();
		for(int i = 0 ; i < l ; i++){
			int j = i + 1;
			while(str[i] == str[j]){
				j++;
			}
			if((j-i) % 2 != 0){
				s.insert(str[i]);
			}
			i = j - 1;
		}
		for(auto it:s){
			cout << it;
		}
		cout << endl;
	}


	return 0;
}
