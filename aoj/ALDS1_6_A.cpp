#include <bits/stdc++.h>
using namespace std;
int n;

void CountingSort(vector<int> A, vector<int> &B, int k, vector<int> C)
{
  // 初期化
  for (int i = 0; i < k; i++)
  {
    C[i] = 0;
  }

  /* C[i] に i の出現数を記録する = 何回現れるか数えている */
  for (int j = 0; j < n; j++)
  {
    C[A[j]]++;
  }

  /* C[i] に i 以下の数の出現数を記録する = 累積和を出している */
  for (int i = 1; i < k; i++)
  {
    C[i] = C[i] + C[i - 1];
  }

  for (int j = n - 1; j >= 0; j--)
  {

    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }
}

int main()
{
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
    k = max(k, A[i]);
  }

  vector<int> C(k + 1);

  CountingSort(A, B, k + 1, C);

  for (int i = 1; i <= n; i++)
  {
    cout << B[i];
    if (i < n)
    {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}