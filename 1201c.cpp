#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , k , in;
	vector<int> v;
	cin >> n >> k;
	for(int i = 0 ; i < n ; i++){
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(),v.end());
	int ans = v[n/2];
	int cur = n/2,cnt = 1;
	while(k > 0 && cur + 1 < n){
		int tmp = min (k / cnt , v[cur+1] - ans);
		ans += tmp;
		k -= tmp * cnt;
		cnt++;
		cur++;
	}
	if(k > 0)
  	{
   		ans += k / cnt;
	}
	cout << ans ;
	return 0;
}