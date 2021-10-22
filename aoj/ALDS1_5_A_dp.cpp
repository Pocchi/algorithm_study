#include <bits/stdc++.h>
using namespace std;

string tasu(int m, vector<int> A, int start) {
  // mから引いていって、
  // ソートした方がいいかも？
  // 降順とする
  int tmp = m;
  int size = A.size();
  int startSize = size - start;
  
  for (int i = 0; i < startSize; i++) {
    if (tmp - A[i] > 0) {
      tmp -= A[i];
    } else if (tmp - A[i] == 0) {
      return "yes";
    } else if (tmp - A[i] < 0) {
      tasu(m, A, i);
    }
  }
  if (start == size - 1) {
    return "no";
  }
}

int main() {
  int n, q; 
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  // 降順でソートしてみる
  sort(A.begin(), A.end(), greater<int>());
  cin >> q;
  vector<int> m(q);
  for (int i = 0; i < q; i++) {
    cin >> m[i];
    cout << tasu(m[i], A, 0) << endl;
  }
}

