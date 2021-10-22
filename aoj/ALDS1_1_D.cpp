#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  vector<int> value(n - 1);
  int minData;
  int maxData;
  int minIndex;
  int maxIndex;
  for (int i = 0; i < n; i++) {
    cin >> data[i];
    if (i == 0) {
      minData = data[i];
      maxData = data[i];
      minIndex = i;
      maxIndex = i;
    } else {
      if (minData > data[i]) {
        minData = data[i];
        minIndex = i;
      }
      if (maxData < data[i]) {
        maxData = data[i];
        maxIndex = i;
      }
    }
  }
  if (maxIndex > minIndex) {
    cout << data[maxIndex] - data[minIndex] << endl;
  } else {
    for (int i = 0; i < n - 1; i++) {
      value[i] = data[i - 1] - data[i];
   }
  }


}