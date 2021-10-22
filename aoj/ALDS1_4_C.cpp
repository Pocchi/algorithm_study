#include <bits/stdc++.h>
using namespace std;

void insert (string str, vector<string> &S) {
  S.push_back(str);
}

string find (string str, vector<string> S) {
  for (int i = 0; i < S.size(); i++) {
    if (str == S[i]) {
      return "yes";
    }
  }
  return "no";
}

int main() {
  int n;
  cin >> n;
  vector<string> S;
  for (int i = 0; i < n; i++) {
    string command, str;
    cin >> command >> str;
    if (command == "insert") {
      insert(str, S);
    } else if (command == "find") {
      cout << find(str, S) << endl;
    }
  }

  return 0;
}