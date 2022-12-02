#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N, K;

  cin >> N;
  cin >> K;

  vector<int> A(N + 1);
  vector<int> B(K + 1);
  int maxValue = 0;

  for (int i = 1; i < N + 1; i++)
  {
    cin >> A[i];
    maxValue = max(A[i], maxValue);
  }

  for (int i = 1; i < K + 1; i++)
  {
    cin >> B[i];
  }

  bool result = false;

  for (int i = 1; i < N + 1; i++)
  {
    if (result)
    {
      break;
    }
    if (maxValue == A[i])
    {
      for (int j = 1; j < K + 1; j++)
      {
        if (i == B[j])
        {
          result = true;
          break;
        }
      }
    }
  }

  cout << (result ? "Yes" : "No") << endl;

  return 0;
}