#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &A, int p, int r) {
  int x = A[r];
  int i = p - 1;
  for(int j = p; j < r; j ++) {
    if(A[j] <= x) {
      i = i + 1;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}


int quicksort(vector<int> &A, int p, int r) {
  if(p < r) {
    q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> A(n, vector<int>(2));
  for (int i = 0; i < n; i++)
  {
    cin >> A.at(i).at(0);
    cin >> A.at(i).at(1);
  }

  int result = partition(A, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    if (i == result) {
      cout << "[" << A[i] << "]";
    } else {
      cout << A[i];
    }
    if (i == n - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }


  return 0;
}