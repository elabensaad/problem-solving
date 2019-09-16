#include <bits/stdc++.h>
 
using namespace std;
 
long long n, y, m, ans, cur, q, x, ans1, t[50000], l=1e9+11, r, f[50000];
string ch, ch1;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	if(n/2 > m)cout << -1 << endl;
	else{
		if(n == 1){
			if(m == 0)cout << 1 << endl;
			else cout << -1 << endl;
		}
		else{
			cur = m-n/2+1;
			cout << cur << ' ' << cur*2 << ' ';
			for(int i = 3;i <= n;i++){
				cout << i+cur*2 << ' ';
			} 
			cout << endl;
		}
	}
}
