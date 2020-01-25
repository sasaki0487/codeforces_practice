#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,a,b,c,n;
	cin >> t;
	while(t--){
        cin >> a >> b >> c >> n;
        int m = max(a,max(b,c));
        if((n + a + b + c - 3 * m) >= 0 && (n + a + b + c - 3 * m) % 3 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
	}
	return 0;
}
