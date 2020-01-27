#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t , n;
	cin >> t;
	while(t--){
	    cin >> n;
        int a = 0 , b = 0 , c = 0;
        for(int i = 2 ; i < sqrt(n) ; i++){
            if(n % i == 0){
                a = i;
                break;
            }
        }
        if(a == 0){
            cout << "NO\n";
            continue;
        }
        n /= a;
        for(int i = a + 1 ; i < sqrt(n) ; i++){
            if(n % i == 0){
                b = i;
                break;
            }
        }
        if(b == 0 || n / b <= b){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n" << a << ' ' << b << ' ' << n / b << endl;
	}
	return 0;
}
