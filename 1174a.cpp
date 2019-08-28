#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp;
	long long sum1 = 0,sum2 = 0;
	vector<int> v;

	cin >> n;
	for(int i = 0 ; i < 2 * n ; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	sum1 = accumulate(v.begin(),v.begin()+n,0);
	sum2 = accumulate(v.begin()+n,v.end(),0);
	if(sum1 != sum2){
		for(int i = 0 ; i < 2 * n ; i ++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	else
		cout << "-1" << endl;

	return 0;
}