#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> A;
  int result = 0;
  for (int i = 0; i < 5; i++)
  {
    int num;
    cin >> num;
    int size = A.size();

    if (i > 0)
    {
      bool f = true;
      for (int j = 0; j < size; j++)
      {
        if (A[j] == num)
        {
          f = false;
        }
      }
      if (f)
      {
        A.push_back(num);
        result++;
      }
    }
    else
    {
      A.push_back(num);
      result++;
    }
  }

  cout << result << endl;

  return 0;
}