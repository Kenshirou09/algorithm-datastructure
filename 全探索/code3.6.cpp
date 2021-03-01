#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

int main() {
  int N,W;
  cin >> N >> W;
  vector<int> a(N);
  rep(i,N) cin >> a[i];

  //bitは2のN乗通りの部分集合全体を動く
  bool exist = false;
  //整数値2のN乗を表している
  for(int bit = 0; bit < (1 << N); bit++)
  {
      int sum = 0;//部分集合に含まれる要素の和
      for(int i = 0; i < N; i++){
          //i番目の要素a[i]が部分集合に含まれているかどうか
          if(bit & (1 << i)){
              sum += a[i];
          }
      }
      if(sum == W) exist = true;
  }
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;

}