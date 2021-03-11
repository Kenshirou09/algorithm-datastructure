#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;
const int INF = 200000000;

int fibo(int n){
  if(n == 0){
    return 0;
  }else if(n == 1){
    return 1;
  }else{
    return fibo(n - 1) + fibo(n - 2);
  }
}
int main() { 
  int n;
  cin >> n;  
  cout << fibo(n) << endl;
}



