#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

const int INF = 20000000;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  int min_value = INF;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int num = a[i]+b[j];
      if(num > k && min_value > num){
        min_value = num;
      }
    }
  }
  cout << min_value << endl;

}