#include <bits/stdc++.h>
 
using namespace std;
 
long long n, v, y, m, ans, k, q, cur, t[5000000], x, f[500000], curr;
string ch, ch1;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; ++i)
    	cin >> t[i] >> f[i];
    ch.resize(n, '0');
    ch1.resize(n, '0');
    for (int i = 0;i < n;i++){
	    if (t[cur] < f[curr])ch[cur++] = '1';
	    else ch1[curr++] = '1';
    }
    for (int i = n/2-1;i >= 0;i--)
    	ch[i] = ch1[i] = '1';
    cout << ch << endl << ch1 << endl;
}
