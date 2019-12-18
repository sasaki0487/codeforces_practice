/*
	use set to sort
	take out  the biggest number and divide it by 2
	if it turn out to odd then ignore it
	if it's even then put it back into the set
	count the steps till the set is empty
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int tmp,ans = 0;
		set<int> s;
		while(n--){
			cin >> tmp;
			if(tmp % 2 == 0){
				s.insert(tmp);
			}
		}
		while(s.size() != 0){
			auto it = s.end();
			it--;
			if((*it / 2)%2 == 0){
				s.insert(*it/2);
			}
			s.erase(it);
			ans++;
		}
		cout << ans << endl;;
	}


	return 0;
}
