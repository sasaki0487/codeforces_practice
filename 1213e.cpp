/*
	brute force check all possible strings
	and make up the long one
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	string dic[12] = {"abcabc","acbacb","bacbac","bcabca","cabcab","cbacba",
	"aabbcc","aaccbb","bbaacc","bbccaa","ccbbaa","ccaabb"};
	string outdic[6] = {"abc","acb","bac","bca","cab","cba"};
	int l,pos = -1;
	string st1,st2;
	cin >> l >> st1 >> st2;
	for(int i = 0 ; i < 12 ; i++){
		if(dic[i].find(st1) == string::npos && dic[i].find(st2) == string::npos){
			pos = i;
			break;
		}
	}
	if(pos == -1)
		cout << "NO" << endl;
	else{
		string ans = "";
		if(pos < 6){
			for(int i = 0 ; i < l ; i++){
				ans += outdic[pos];
			}
		}
		else{
			for(int i = 0 ; i < l * 3 ; i++){
				ans += outdic[pos][i/l];
			}
		}
		cout << "YES" << endl << ans << endl;
	}
	return 0;
}