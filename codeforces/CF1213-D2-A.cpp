#include <bits/stdc++.h>
 
using namespace std;
 
long long n, ans, t[2000000], x, y;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n;
    for(int i = 0;i < n;i++){
    	cin >> x;
    	if(x%2)ans++;
    	else y++;
   }
   cout << min(ans, y);
}
