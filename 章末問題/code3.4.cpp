#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

//2つの値の差の最大値
int main() {
  int N,big = 0,small = 100000000;
  cin >> N;
  vector<int> a(N);
  rep(i,N) cin >> a[i];

  for(int i = 0; i < N; i++){
      if(big < a[i]) big = a[i];
      if(small > a[i]) small = a[i];
  }
  cout << big - small << endl;

}