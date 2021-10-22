#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> A)
{
  int cnt = 0; // 反転数
  int Asize = A.size();
  for (int i = 0; i < Asize - 1; i++)
  {
    for (int j = Asize - 1; j > i; j--)
    {
      if (A[j] < A[j - 1])
      {
        swap(A[j], A[j - 1]);
        cnt++;
      }
    }
  }
  return cnt;
}
int main()
{
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  int cnt = bubbleSort(A);
  cout << cnt << endl;
  return 0;
}
