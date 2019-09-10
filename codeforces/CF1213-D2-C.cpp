#include <bits/stdc++.h>
 
using namespace std;
 
long long n, ans, t[2000000], x, y, cur, mi, q, m;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> q;
    while(q--){
    	cin >> n >> m;
    	for(int i = 0;i < 10;i++)cur+=(m*i)%10;
    	ans = ((n/m)/10)*cur;
    	for(int i = 1;i <= (n/m)%10;i++)ans+=(i*m)%10;
    	cout << ans << endl;
    	ans = 0;
    	cur = 0;
    }
