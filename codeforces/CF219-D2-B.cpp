#include <bits/stdc++.h>
 
using namespace std;
 
long long n, m, t[600][600], f[100200], cur = 10, ans, x;
vector <int> v;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	n++;
	ans = n;
	while(n % cur <= m){
		ans = n-(n%cur);
		cur *= 10;
	}
	cout << ans-1 << endl;
}
