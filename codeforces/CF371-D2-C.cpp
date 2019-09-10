#include <bits/stdc++.h>
 
using namespace std;
 
long long n, t[600000], f[100200], ans, b, c, s, z, k, l, cur, x;
vector <int> v;
string ch;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> ch;
	for( int i = 0; i < ch.size(); i ++ ){
	    if(ch[i]=='B')b++;
	    if(ch[i]=='S')s++;
	    if(ch[i]=='C')c++;
	}
	cin >> t['B'] >> t['S'] >> t['C'];
	cin >> f['B'] >> f['S'] >> f['C'];
	cin >> n;
	x = n;
	if(b > 0)x += t['B']/b;
	if(s > 0)x += t['S']/s;
	if(c > 0)x += t['C']/c;
	while(ans < x){
	    cur = ( ans + x ) / 2 + 1;
	    k = n;
	    k -= max(z, b*cur-t['B'])*f['B'];
	    k -= max(z, s*cur-t['S'])*f['S'];
	    k -= max(z, c*cur-t['C'])*f['C'];
	    if(k >= 0)ans = cur;
	    else x = cur-1;
	}
	cout << ans;
}
