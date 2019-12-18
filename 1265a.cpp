/*
	straight forward
	sequential search for ?
	replace ? with the character other than the previous and the next one
	check if the string is beautiful after the sequential search
	output the string if beautiful
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	string abc = "abc";
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == '?'){
				char pre = (i == 0 ? 'n' : s[i-1]);
				char nxt = (i == s.size()-1 ? 'G' : s[i+1]);
				for(auto it : abc){
					if(it != pre && it != nxt){
						s[i] = it;
					}
				}
			}
			
		}
		int f = 0;
		for(int i = 0; i < s.size() - 1; i++){
			if(s[i] == s[i+1]){
				cout << "-1\n";
				f = 1;
				break;
			}
		}
		if(f == 0){
			cout << s << endl;
		}
	}


	return 0;
}
