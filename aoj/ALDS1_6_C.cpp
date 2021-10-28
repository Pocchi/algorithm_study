#include <bits/stdc++.h>
using namespace std;
int partition(vector<string> &AString, vector<int> &ANumber, int p, int r) {
  int x = ANumber[r];
  int i = p - 1;
  for(int j = p; j < r; j ++) {
    if(ANumber[j] <= x) {
      i = i + 1;
      swap(ANumber[i], ANumber[j]);
      swap(AString[i], AString[j]);
    }
  }
  swap(ANumber[i + 1], ANumber[r]);
  swap(AString[i + 1], AString[r]);
  return i + 1;
}


void quicksort(vector<string> &AString, vector<int> &ANumber, int p, int r) {
  if(p < r) {
    int q = partition(AString, ANumber, p, r);
    quicksort(AString, ANumber, p, q - 1);
    quicksort(AString, ANumber, q + 1, r);
  }
}

int main()
{
  int n;
  cin >> n;
  vector<string>AString(n);
  vector<int>ANumber(n);

  map<int, vector<string>> Amap;

  for (int i = 0; i < n; i++)
  {
    cin >> AString[i];
    cin >> ANumber[i];

    Amap[ANumber][0] = AString;
  }

  quicksort(AString, ANumber, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << AString[i] << " " << ANumber[i] << endl;
  }


  return 0;
}