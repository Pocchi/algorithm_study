#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<string> &B, int N) {
  for (int i = 0; i <= N-1; i++) {
    for (int j = N-1; j >= i+1; j--) {
      if (B[j][1] < B[j-1][1]) {
         swap(B[j], B[j-1]);
      }
    }
  }
}
void SelectionSort(vector<string> &S, int N) {
  for (int i = 0; i <= N-1; i++) {
    int minj = i;
    for (int j = i; j <= N-1; j++) {
      if (S[j][1] < S[minj][1]) {
        minj = j;
      }
    }
    if (minj != i) {
      swap(S[i], S[minj]);
    }
  }
}
bool isStable(vector<string> in, vector<string> out, int N) {
  for (int i = 0; i <= N - 1; i++) {
    for (int j = i + 1;  j <= N - 1; j++) {
      for (int a = 0; a <= N - 1; a++) {
        for(int b = a + 1; b <= N - 1; b++) {
          if (in[i][1] == in[j][1] && in[i] == out[b] && in[j] == out[a]) {
            return false;
          }
        }
      } 
    }
  }
  return true;
}

int main() {
  int N;
  cin >> N;
  vector<string> in(N);
  vector<string> B(N);
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    string tmp;
    cin >> tmp;
    in[i] = tmp;
    B[i] = tmp;
    S[i] = tmp;
  }
  /* バブルソート */
  BubbleSort(B, N);
  for (int i = 0; i < N; i++) {
    cout << B[i];
    if (i == N - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
  string stableB = isStable(in, B, N) ? "Stable" : "Not stable";
  cout << stableB << endl;

  /* 挿入ソート */
  SelectionSort(S, N);
  for (int i = 0; i < N; i++) {
    cout << S[i];
    if (i == N - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
  string stableS = isStable(in, S, N) ? "Stable" : "Not stable";
  cout << stableS << endl;
}