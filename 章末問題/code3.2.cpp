#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

int main() {
  int n,V;
  cin >> n >> V;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int counter = 0;
  for(int i = 0; i < n; i++){
      if(a[i] == V) counter++;
  }
  cout << counter << endl;

}