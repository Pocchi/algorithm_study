#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }
  int q;
  cin >> q;
  vector<int> T(q);
  for (int i = 0; i < q; i++) {
    cin >> T[i];
  }
  vector<int> C;
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < q; j++) {
      if (S[i] == T[j]) {
        C.push_back(S[i]);
      }
    }
  }
  sort(C.begin(), C.end());

  C.erase(unique(C.begin(), C.end()), C.end());

  cout << C.size() << endl;

  return 0;
}