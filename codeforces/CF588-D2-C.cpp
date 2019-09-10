#include <bits/stdc++.h>
 
using namespace std;
 
vector <int> v;
long long n, m, t[300005], cur, ans = 1, q, x;
 
int main() {
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> t[i];
  }
  sort(t, t+n);
  if(t[n-1] != 1)t[n-1] = 1;
  else t[n-1] = 2;
  sort(t, t+n);
  for(int i = 0;i < n;i++){
    cout << t[i] << ' ';
  }
}
