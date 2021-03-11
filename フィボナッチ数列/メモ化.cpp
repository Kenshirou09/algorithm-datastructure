#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;
const int INF = 200000000;

//fibo(N)の答えをメモ化する配列
vector<ll> memo;

ll fibo(int N){
  //ベースケース
  if(N == 0) return 0;
  else if(N == 1) return 1;

  //メモをチェックする
  if(memo[N] != -1) return memo[N];

  //答えをメモしながら再帰呼び出し
  return memo[N] = fibo(N-1) + fibo(N-2);
}

int main() { 
  //メモ化用配列を-1で初期化する assign関数は特定の値で要素を埋める関数
  //50個の要素を-1で埋めている
  memo.assign(50,-1);
  //fibo(49)を呼び出す
  fibo(49);
  
  for(int N = 2; N < 50; N++){
    cout << N << "項目:" << memo[N] << endl;
  } 
}



