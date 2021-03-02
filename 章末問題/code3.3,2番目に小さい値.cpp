#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;
const INF = 200000000;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N) cin >> a[i];

  //2番目に小さい値
  int worst_value = INF;
  int secound_value = INF;
  for(int i = 0; i < N; i++){
      if(a[i] < worst_value){
          secound_value = worst_value;
          worst_value = a[i];
      }else if(a[i] < secound_value){
          secound_value = a[i];
      }
  }
  cout << secound_value << endl;

}