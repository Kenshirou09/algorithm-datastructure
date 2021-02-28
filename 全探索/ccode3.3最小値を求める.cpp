#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

const int INF = 20000000;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int min_value = INF;
  for(int i = 0; i < n; i++){
      if(a[i] < min_value){
          min_value = a[i];
      }
  }
  cout << min_value << endl;

}