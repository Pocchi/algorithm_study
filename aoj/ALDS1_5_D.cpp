#include <bits/stdc++.h>
using namespace std;
#define INF 10000000000000;
int countTmp;

void merge(vector<int> &A, int left, int mid, int right)
{

  cout << endl;
  cout << "merge" << endl;

  int n = A.size();
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1);
  vector<int> R(n2);
  // L[0...n1], R[0...n2] を生成  // 配列を左と右に分割
  cout << endl;
  cout << "L" << endl;
  for (int i = 0; i < n1; i++)
  {
    L[i] = A[left + i];
    cout << L[i] << " ";
  }

  cout << endl;
  cout << "R" << endl;
  for (int i = 0; i < n2; i++)
  {
    R[i] = A[mid + i];
    cout << R[i] << " ";
  }

  int Ai = 0;
  int Li = 0;
  int Ri = 0;
  while (Ai < n)
  {
    if (Li < L.size() && (Ri == R.size() || L[i] <= < R[j]))
    {
      A[Ai++] = L[Li++];
    }
    else
    {
      countTmp += A.size() / 2 - Li;
      A[Ai++] = R[Ri++];
    }
  }
}

void mergeSort(vector<int> &A, int left, int right)
{
  if (left + 1 < right)
  {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);    // 左から中央
    mergeSort(A, mid, right);   // 中央から右
    merge(A, left, mid, right); // マージ
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++)
  {
    cin >> S[i];
  }

  mergeSort(S, 0, n);

  for (int i = 0; i < n; i++)
  {
    cout << S[i];
    if (i == n - 1)
    {
      cout << endl;
    }
    else
    {
      cout << " ";
    }
  }

  cout << countTmp << endl;

  return 0;
}