// Move all chips to the top left corner then move them
// over the board together regardless of their initial position.
// (n-1) + (m-1) steps needed to move them to the top left
// n * m - 1 steps needed to move them throughout the board.


#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int x,y;
    for(int i = 0 ; i < 2 * k ; i++){
        cin >> x >> y;
    }
    cout << m * n + m + n - 3 << endl;
    for(int i = 0 ; i < n - 1 ; i++){
        cout << 'U';
    }
    for(int i = 0 ; i < m - 1 ; i++){
        cout << 'L';
    }
    for(int i = 0 ; i < n ; i++){
        if(i % 2){
            for(int j = 0 ; j < m - 1 ; j++){
                cout << 'L';
            }
        }
        else {
            for(int j = 0 ; j < m - 1 ; j++){
                cout << 'R';
            }
        }
        if(i != n - 1){
            cout << 'D';
        }
    }
    cout << endl;
    return 0;
}
