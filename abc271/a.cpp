#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
  string one = num[N / 16];
  string two = num[N % 16];
  cout << one << two << endl;
  return 0;
}