#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , m ,cnt=0,tmp;
	vector<int> v,sum;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		cnt+=tmp;
		v.push_back(tmp);
		sum.push_back(cnt);
	}
	for(int i = 0 ; i < n ; i++){
		vector<int> sor(v.begin(),v.begin()+i);
		sort(sor.begin(),sor.end(),greater<int>());
		cnt = 0;
		while(sum[i] > m){
			sum[i] -= sor[cnt];
			cnt++;
		}
		cout << cnt << " ";
	}

	return 0;
}