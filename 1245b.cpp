/*
	calculate the maximum games can Alice win by comparing the RPS they have seperately
	if the maximum game alice can win is less than ceil(n/2) then output no
	else sequentially put the according hands that alice can win as the amount of maximum games
	finally place the hands that alice can't win into the remaining indexes
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r,p,s;
		cin >> l >> r >> p >> s;
		string str;
		cin >> str;
		int br = 0,bp = 0 ,bs = 0;
		for(auto it : str){
			if(it == 'R'){
				br++;
			}
			else if(it == 'P'){
				bp++;
			}
			else{
				bs++;
			}
		}
		int ms = min(r,bs), mr = min(p,br) , mp = min(s,bp);
		if(mr+mp+ms < ceil((double)l/2)){
			cout << "NO" << endl;
			continue;
		}
		else{
			string ans(l,'0');
			for(int i = 0 ; i < l ; i++){
				if(str[i] == 'R' && mr != 0){
					ans[i] = 'P';
					mr--;
					p--;
				}
				else if(str[i] == 'P' && mp != 0){
					ans[i] = 'S';
					mp--;
					s--;
				}
				else if(str[i] == 'S' && ms != 0){
					ans[i] = 'R';
					ms--;
					r--;
				}
			}
			int i = 0;
			while(r){
				if(ans[i] == '0'){
					ans[i] = 'R';
					r--;
				}
				i++;
			}
			while(s){
				if(ans[i] == '0'){
					ans[i] = 'S';
					s--;
				}
				i++;
			}
			while(p){
				if(ans[i] == '0'){
					ans[i] = 'P';
					p--;
				}
				i++;
			}
			cout << "YES\n" << ans << endl;
		}
	}


	return 0;
}
