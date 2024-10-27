#include <bits/stdc++.h>
using namespace std;

// 線形探索基本問題
// https://atcoder.jp/contests/abc277/tasks/abc277_a

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> P(N);
  for (size_t i = 0; i < N; i++) {
    cin >> P[i];
  }
  
  for (size_t i = 0; i < N; i++) {
   if (P[i] == X) {
     cout << i+1 << endl;
   } 
  }
}
