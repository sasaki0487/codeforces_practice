/*
	use a vector to store the current screen
	and a set to keep record of id's in the screen (set find is O(log n))
	if new id is in the set then skip
	if the screen is not full then add id into vector and set
	else remove the last id of screen from vector and set 
	then add id into vector and set
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int n,k,tmp;
	cin >> n >> k;
	set<int> s;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		if(s.count(tmp) != 0){
			continue;
		}
		if(v.size() < k){
			s.insert(tmp);
			v.push_back(tmp);
		}
		else{
			s.erase(v[0]);
			s.insert(tmp);
			v.erase(v.begin());
			v.push_back(tmp);
		}
	}
	cout << v.size() << endl;
	for(auto it = v.rbegin() ; it != v.rend() ; it++){
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
