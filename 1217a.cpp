/*
	math problem
	let strength added be S and intelligence added be I
	I = ex - S
	st + S > in + I
	st + S > in + (ex - S)
	2 * S > in + ex - st
	S > (in + ex - st) / 2
	S >= max(0,(in + ex - st + 2)/2)
	find S and output the number of cases possible
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,st,in,ex;
	cin >> t;
	while(t--){
		cin >> st >> in >> ex;
		cout << max(0, 1 + ex - max(0,(ex + in - st + 2)/2)) << endl;
	}

	return 0;
}