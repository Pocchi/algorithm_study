#include <bits/stdc++.h>
using namespace std;

int search (int key, vector<int> S, int n) {
  int left = 0;
  int right = n;
  while(left < right) {
    int mid = (left + right) / 2; 
    if (S[mid] == key) {
      return mid;
    } else if (key > S[mid]) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return -1;
}

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
  int sum = 0;
  for (int i = 0; i < q; i++) {
    cin >> T[i];
    if (search(T[i], S, n) >= 0) sum++;
  }
  cout << sum << endl;

  return 0;
}