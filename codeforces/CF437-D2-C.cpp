#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, cur, q, x, t[500000], f[500000];
string ch, ch1, s;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0;i < n;i++) 
		 cin >> t[i];
	while(m--){
		cin >> x >> y;
		x--;
		y--;
		ans += min(t[x], t[y]);
	}
	cout << ans << endl;
}
