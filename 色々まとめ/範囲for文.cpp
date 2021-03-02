#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
// using P = pair<int, int>;


//配列のすべての要素に対して何かしらの処理を行いたいときに使う

/*構文
for (配列の要素の型 変数名 : 配列変数) {
   各要素に対する処理
}
*/
int main(){
    vector<int> a = {1,2,3,4,5};
    for(int x : a){
        cout << x << endl;
    }
}