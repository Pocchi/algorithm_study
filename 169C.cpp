#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  long long result = 0;
  
  for (int i = 0; i < N; i++) {
  	string str;
    cin >> str;
    map<char, int> count;
    string tmp;
	  int size = str.size();
    for (int j = 0; j < size; j++) {
    	count[str[j]] += 1;
    }
    for (auto p : count) {
  	  tmp += p.first;
  	  tmp += to_string(p.second);
    }
    s[i] = tmp;
    for (int j = 0; j < i; j++) {
    	if (s[i] == s[j]) {
        result ++;
        break;
      }
    }
  }
  /*
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
    	if (s[i] == s[j]) {
         result ++;
        }
    }
  }
  */
  cout << result << endl;
}
