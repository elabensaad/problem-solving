#include <bits/stdc++.h>
 
using namespace std;
 
long long n, t[500000], x, y, m, ans;
 
int main () {
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
	scanf("%lld", &n);
	for(int i= 0;i < n;i++){
		scanf("%lld", &x);
		t[i] = -x;
	}
	sort(t,t+n);
	//m = t[n-1];
	//for(int i = 0;i < n;i++)t[i] = -t[i];
	for(int i = 1;i < n;i++)t[i]+=t[i-1];
	//for(int i = 0;i < n;i++)cout << t[i] << ' ';
	//cout << endl;
	while(n > 0){
		//cout << t[n-1] << endl;
		ans+=-t[n-1];
		n/=4;
	}
	//ans += m;
	printf("%lld\n", ans);
} 
