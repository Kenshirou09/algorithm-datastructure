#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  rep(i,n) cin >> data.at(i);

  bool flag = true;
  int cnt = 0;
  while(flag){
      for(int i = 0; i < n; i++){
          if(data[i] %2 != 0){
              flag = false;
          }
      }
      
      for(int j = 0; j < n; j++){
          data[j] /= 2;
      }
    if(flag)cnt++;
  }
  cout << cnt << endl;

}