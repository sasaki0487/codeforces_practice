/*
	create a large 2d table
	divide nums in the array by 2 and push the steps into the table every time
	the size of every row means how many nums can turn into the num of the row index 
	and the value means the step costs to reach the num of row index
	so add them up and find the smallest sum

*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,tmp;
	cin >> n >> k;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	vector<vector<int>> tab(200001);
	
	for(int i = 0 ; i < n ; i++){
		int num = v[i];
		int cnt = 0;
		while(num != 0){
			tab[num].push_back(cnt);
			cnt++;
			num /= 2;
		}
	}
	int ans = INT_MAX;
	for(int i = 0 ; i < tab.size() ; i++){
		if(tab[i].size() < k)
			continue;
		ans = min(ans,accumulate(tab[i].begin(),tab[i].begin()+k,0));
	}
	cout << ans << endl;

	return 0;
}