#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double d;
	vector<int> v;
	vector<double> vd;
	long long int sum = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i ++){
		cin >> d;
		vd.push_back(d);
		v.push_back(floor(d));
		sum += floor(d);
	}
	int cnt = 0;
	for(int i = 0 ; i < abs(sum)+cnt ; i ++){
		if(double(v[i])!=vd[i])
			v[i]++;
		else
			cnt++;
	}
	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i] << "\n";
	}
	return 0;
}