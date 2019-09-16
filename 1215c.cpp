/*
	scan through the string and keep record of the pos of char that differs
	it cost 1 step to make the {aa,bb} pair to become {ab,ab}
	by swapping the first char of str1 and second char of str2
	it cost 2 step to make the {ab,ba} pair to become {ab,ab}
	by swapping the second char of str1 and second char of str2
	and then swap the first char of str1 and second char of str2
	if two strings has odd differences, can't make them the same by swapping
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string a,b;
	vector<int> va,vb;
	vector<int> ans;
	int l;
	cin >> l >> a >> b;
	for(int i = 0 ; i < l ; i++){
		if(a[i] != b[i]){
			if(a[i] == 'a')
				va.push_back(i+1);
			else
				vb.push_back(i+1);
		}
	}
	if((va.size()+vb.size()) % 2 != 0){
		cout << -1 << endl;
		return 0;
	}
	while(va.size() > 1){
		ans.push_back(va[0]);
		ans.push_back(va[1]);
		va.erase(va.begin(),va.begin()+2);
	}
	while(vb.size() > 1){
		ans.push_back(vb[0]);
		ans.push_back(vb[1]);
		vb.erase(vb.begin(),vb.begin()+2);
	}
	if(va.size() != 0){
		ans.push_back(va[0]);
		ans.push_back(va[0]);
		ans.push_back(va[0]);
		ans.push_back(vb[0]);
	}
	cout << ans.size() / 2 << endl;
	for(int i = 0 ; i < ans.size() ; i+=2){
		cout << ans[i] << " " << ans[i+1] << endl;
	}
	return 0;
}