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

  //線型探索
  bool exist = false;
  for(int i = 0; i < n; i++){
    if(a[i] == V){
      exist = true;
    }
  }

  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;

}