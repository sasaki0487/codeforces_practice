// If n[i] is 0 then both is 0
// If n[i] is 1 then a = 1, b = 0,
// then for the later characters, a = 0 , b = n[i] to make 'a' smallest
// If n[i] is 2 and haven't met 1 yet, then a = 1 b = 1
// else a = 0 , b = 2


#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t,l;
    string n;
    cin >> t;
    while(t--){
        cin >> l >> n;
        string a = "1" , b = "1";
        int f = 0;
        for(int i = 1; i < l ; i++){
            if(n[i] == '0'){
                a += '0';
                b += '0';
            }
            else if(n[i] == '1'){
                if(f == 1){
                    a += '0';
                    b += '1';
                }
                else{
                    a += '1';
                    b += '0';
                    f = 1;
                }
            }
            else{
                if(f == 1){
                    a += '0';
                    b += '2';
                }   
                else{
                    a += '1';
                    b += '1';
                }
            }
        }
        cout << a << endl << b << endl;
    }
    return 0;
}
