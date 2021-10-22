#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  queue<int> time;
  queue<string> name;
  for (int i = 0; i < n; i ++) {
    string tmpName;
    int tmpTime;
    cin >> tmpName;
    cin >> tmpTime;
    time.push(tmpTime);
    name.push(tmpName);
  }
  int endProcess = 0;
  int count = 0;
  while (endProcess < n) {
    // 先頭の要素の取り出し
    string tmpName = name.front();
    int tmpTime = time.front();
    // 先頭の要素の削除
    name.pop();
    time.pop();
    if (tmpTime == q) {
      count += q;
      endProcess ++;
      cout << tmpName << " " << count << endl;
    } else if (tmpTime > q) {
      count += q;
      name.push(tmpName);
      time.push(tmpTime - q);
    } else {
      count += tmpTime;
      endProcess ++;
      cout << tmpName << " " << count << endl;
    }
  }
}
