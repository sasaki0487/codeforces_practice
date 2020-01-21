#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool sieve[20000000];
 
void eratosthenes()
{
    int sqrt_20000000 = sqrt(20000000);
    sieve[0] = sieve[1] = true;
    for (int i=2; i<=sqrt_20000000; i++)
        if (!sieve[i])
            for (int k=(20000000-1)/i, j=i*k; k>=i; k--, j-=i)
                if (!sieve[k])
                    sieve[j] = true;
    sieve[1] = false;
}

int main(){
	int t;
	cin >> t;
	int a = 1;
	eratosthenes();
	while(1){
		if(sieve[a] == true && sieve[a+t] == true){
			cout << a+t << " " << a << endl;
			return 0;
		}
		a++;
	}
	return 0;
}
