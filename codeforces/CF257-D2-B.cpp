#include <bits/stdc++.h>
 
using namespace std;
 
long long n, m, t[600][600], f[100200], cur, ans = 1e9, x, q, i;
vector <int> v;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	cout << max(n, m)-1 << ' ' << min(n, m) << endl;
}
