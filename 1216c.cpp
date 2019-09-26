#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;

pair<pi, pi> inter(pi a, pi b, pi c, pi d) {
	int l, r, u, dn;
	l = max(min(a.first, b.first), min(c.first, d.first));
	r = min(max(a.first, b.first), max(c.first, d.first));
	u = min(max(a.second, b.second), max(c.second, d.second));
	dn = max(min(a.second, b.second), min(c.second, d.second));

	if (r <= l || u <= dn) return { {0, 0}, {0, 0} };

	return { { l, dn }, { r, u } };
}

ll calc(pi a, pi b) {
	return 1ll * abs(a.first - b.first) * abs(a.second - b.second);
}

int main(){
	long long x[6],y[6];

	for(int i = 0 ; i < 6 ; i++){
		cin >> x[i] >> y[i];
	}

	pair<pi, pi> b1 = inter({x[0], y[0]},{x[1], y[1]},{x[2], y[2]},{x[3], y[3]});
	pair<pi, pi> b2 = inter({x[0], y[0]},{x[1], y[1]},{x[4], y[4]},{x[5], y[5]});
	pair<pi, pi> b3 = inter(b1.first, b1.second, b2.first, b2.second);

	long long w,sb1,sb2,sb3;
	w = calc({x[0], y[0]},{x[1], y[1]});
	sb1 = calc(b1.first, b1.second);
	sb2 = calc(b2.first, b2.second);
	sb3 = calc(b3.first, b3.second);

	if(w > sb1 + sb2 - sb3) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}