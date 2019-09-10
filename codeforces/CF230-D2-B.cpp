#include <bits/stdc++.h>
 
using namespace std;
 
long long n, m, t[600][600], f[100200], cur, ans = 1e9, x, q, i;
vector <int> v;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> q;
	while(q--){
		cin >> x;
		m = sqrt(x);
		for(i = 2;i * i < m;i++){
			if(x % i == 0){break;}
		}
		if(i*i > m && m * m == x && x > 1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
