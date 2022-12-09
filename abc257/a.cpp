#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N, X;

  cin >> N;
  cin >> X;

  vector<string> text = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

  string texts = "";
  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < N; j++)
    {
      texts += text[i];
    }
  }

  cout << texts[X - 1] << endl;

  return 0;
}