#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &A, int n, int g, int &cnt) {
  for (int i = g; i < n; i++) {
    int v = A[i];
    int j = i - g;
    while (j >= 0 && A[j] > v) {
      A[j + g] = A[j];
      j = j - g;
      cnt++;
    }
    A[j + g] = v;
  }
}
void shellSort(vector<int> &A, int n) {
  int cnt = 0;
  vector<int> tmpG;
  int index = 0;
  while (true) {
    int tmp; 
    // 1から始まり3倍 + 1をしていくのが一般的
    if (index == 0) {
      tmp = 1;
    } else {
      tmp = (3 * tmpG[index - 1]) + 1;
    }
    if (tmp <= n) {  
      tmpG.push_back(tmp);
    } else {
      break;
    }
    index ++;
  }

  int m = 0;
  vector<int> G(tmpG.size());
  int indexG = tmpG.size() - 1;
  
  cout << tmpG.size() << endl;
  while (true) {
    G[m] = tmpG[indexG];
    cout << G[m];
    if (m == tmpG.size() - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
    if (indexG == 0) {
      break;
    }
    m++;
    indexG --;
  }
  for(int i = 0; i < tmpG.size(); i++) {
    insertionSort(A, n, G[i], cnt);
  }
  cout << cnt << endl;
}
int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  shellSort(A, n);
  for (int i = 0; i < n; i++) {
    cout << A[i] << endl;
  }
}
