#include <bits/stdc++.h>
using namespace std;

void pop (vector<int> &S, int &second, int &first) {
  second =  S[S.size() - 1];
  S.pop_back();
  first = S[S.size() - 1];
  S.pop_back();
}

int main() {
  vector<int> S;
  while (true) {
    string tmp;
    cin >> tmp;
    int second, first;
	  if(tmp == "*") {  // switch文書こうと思ったらstringじゃ使えなかった
      pop(S, second, first);
      S.push_back(first * second);
    } else if (tmp == "+") {
      pop(S, second, first);
      S.push_back(first + second);
    } else if (tmp == "-") {
      pop(S, second, first);
      S.push_back(first - second);
    } else if (tmp == "/") {
      pop(S, second, first);
      S.push_back(first / second);
    } else if (tmp == "") {
      goto BREAK_LABEL;
    } else {
      // 数値の場合はスタックする
      int i = stoi(tmp);
      S.push_back(i);
    }
  }
  BREAK_LABEL:
  cout << S[0] << endl;
}
