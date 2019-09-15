#include <bits/stdc++.h>
 
using namespace std;
 
long long n, y, m, ans, cur, q, x, ans1, a[500000], l=1e9+11, r;
string ch;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> ch;
	long long j = n;
    for(long long i = 0;i < n/2;i++){
    	j--;
    	if(ch[i] != ch[j]){
	        l = min(i,l);
	        r = max(i,r);
	        if(ch[i] < ch[j]) swap(ch[i],ch[j]);
	        ans+=min(ch[i]-ch[j],'z'-ch[i] + ch[j]-'a' + 1);
    	}
	}
    if(m > n/2) m=n-m+1;
    m--;
    l = min(m,l);
    r = max(m,r);
    cout << ans+2*min(m-l, r-m)+max(m-l, r-m) << endl;
}
