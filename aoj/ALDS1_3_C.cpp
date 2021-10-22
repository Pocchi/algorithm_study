#include <bits/stdc++.h>
using namespace std;

vector<int> deleteCommand (vector<int> list, int number) {
  for (auto it = v.begin(); it != v.end();) {
    if (it == number) {
      list.erase(list.begin() + i);
      break;
    } else {
      ++it;
    }
  }
  return list;
}

int main() {
  int n;
  cin >> n;
  vector<int> list;
  for (int i = 0; i < n; i++) {
  	string command;
    int number;
    cin >> command;
    if (command == "insert") {
      cin >> number;
      list.insert(list.begin(), number);
    } else if(command == "delete") {
      cin >> number;
      list = deleteCommand(list, number);
    } else if (command == "deleteFirst") {
      list.erase(list.begin());
    } else if (command == "deleteLast") {
      list.pop_back();
    }
  }
  // 表示
  for (int i = 0; i < list.size(); i++) {
    cout << list[i];
    if (i == list.size() - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
