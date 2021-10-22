#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S;
  string items[4] = {"dream", "dreamer", "erase", "eraser"};
  map<string, int> number;
  number["dream"] = 0;
  number["dreamer"] = 1;
  number["erase"] = 2;
  number["eraser"] = 3;
  string tmpS = S;
  vector<string> array;
  while(S != T) {
    for (int i = 0; i < 4; i++) {
      string item = items[i];
      int length = item.size();
      string tmp = tmpS.substr(0, length);
      if (tmp == item) {
        tmpS = tmpS.substr(length, tmpS.size() - length);
        T += item;
        array.push_back(item);
        break;
      } else if (i == 3) {
        // 該当しなかったら1つ戻す
        // dreamなら dreamer、eraseならeraserと比較したい number + 1
        string before = array[array.size() - 1];
        array.pop_back();
        T = T.substr(0, T.size() - before.size());
        tmpS = before + tmpS;
        bool flag;
        string item2 = items[number[before] + 1];
        int length2 = item2.size();
        string tmp2 = tmpS.substr(0, length2);
        if (tmp2 == item2) {
          tmpS = tmpS.substr(length2, tmpS.size() - length2);
          T += item2;
          array.push_back(item2);
          flag = true;
      	  break;
         } else {
           goto BREAK_LABEL_END;
        }
      }
    }
  }
  BREAK_LABEL_END:
  string result = S == T ? "YES" : "NO";
  cout << result << endl;
}