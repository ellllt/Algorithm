#include <bits/stdc++.h>
using namespace std;

// bit全探索基本問題
// https://atcoder.jp/contests/abc128/tasks/abc128_c

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> s(M);

  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int a;
      cin >> a; 
      a--;
      s[i].push_back(a);
    }
  }

  vector<int> p(M);
  for (int i = 0; i < M; i++) cin >> p[i];

  long long res = 0;
  for (int bit = 0; bit < (1<<N); bit++) {
    bool is_ok = true;
    for (int i = 0; i < M; i++) {
      int count = 0;
      for (auto v : s[i]) {
        if (bit & (1<<v)) count++;
      }
      if (count % 2 != p[i]) is_ok = false;
    }
    if (is_ok) res++;
  }

  cout << res << endl;
}

