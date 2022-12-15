#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N, K;
  cin >> N >> K;

  queue<int> A;

  for (int i = 1; i <= N; i++)
  {
    int tmp;
    cin >> tmp;
    A.push(tmp);
  }

  for (int i = 0; i < K; i++)
  {
    A.pop();
    A.push(0);
  }

  while (A.size() > 0)
  {
    cout << A.front() << " ";
    A.pop();
  }

  cout << endl;

  return 0;
}