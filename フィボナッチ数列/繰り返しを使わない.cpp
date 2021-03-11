#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;
const int INF = 200000000;

int fibo(int n){
  int fn,fn1 = 0,fn2 = 1;
  for(int i = 2; i <= n; i++){
    fn = fn1 + fn2;
    fn1 = fn2,
    fn2 = fn;
  }
  return fn;
}

int main() { 
  int n;
  cin >> n;  
  cout << fibo(n) << endl;
}



