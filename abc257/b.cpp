#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N, K, Q;
  cin >> N;
  cin >> K;
  cin >> Q;

  vector<int> A(K + 1);

  for (int i = 1; i <= K; i++)
  {
    cin >> A[i];
  }

  for (int i = 1; i <= Q; i++)
  {
    int L;
    cin >> L;
    if (A[L] < N && A[L + 1] != A[L] + 1)
    {
      A[L] = A[L] + 1;
    }
  }

  for (int i = 1; i <= K; i++)
  {
    cout << A[i];
    if (i == K)
    {
      cout << endl;
    }
    else
    {
      cout << " ";
    }
  }

  return 0;
}