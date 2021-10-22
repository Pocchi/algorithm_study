#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
typedef long long llong;
int n, k; // 荷物の数, トラックの数
llong T[MAX]; // 荷物の重さの配列

// 最大積載量Pのk台のトラックで何個の荷物を積めるか？
int check(llong P) {
  int i = 0;
  for (int j = 0; j < k; j++) { // トラックの台数分ループ
    llong s = 0;
    while(s + T[i] <= P) { // トラックの重さが最大積載量Pを超えるまで
      s += T[i];
      i++;
      if (i == n) return n; // 荷物の数と同じになったらnを返す
    }
  }
  return i; // 荷物の数を返す
}

int solve() {
  llong left = 0;
  llong right = 100000 * 10000; // 荷物の個数 * 1個あたりの最大重量
  llong mid;
  while (right - left > 1) { // rightとleftの差が1まで
    mid = (left + right) / 2; // leftとrightの平均
    int v = check(mid); // mid == Pを決めて何個積めるかチェック
    if (v >= n) right = mid; // 積める数が荷物の数より多ければ、rightにmidを代入
    else left = mid; // 少なければleftにmidを代入
  }

  return right; // 最大積載量
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> T[i];
  llong ans = solve();
  cout << ans << endl;
}

