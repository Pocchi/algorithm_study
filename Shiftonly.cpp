#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int data[N];
  for (int i = 0; i < N; i++) {
    cin >> data[i];
  }

  int count = 0;
  int flag = true;
  while(flag) {
    for (int i = 0; i < N; i++) {
      if (data[i] % 2 == 1) {
        flag = false;
        break;
      } else {
        data[i] /= 2;
      }
    }
   	if (flag) count += 1;
  }
  cout << count << endl;
}