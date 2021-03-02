#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;

int main() {
  int K,S,count = 0;
  cin >> K >> S;

  for(int i = 0; i <= K; i++){
    for(int j = 0; j <= K; j++){
      int k = S-j-i;
      if(k >= 0 && k <= K){
        count++;
      }
    }
  }
  cout << count << endl;

}