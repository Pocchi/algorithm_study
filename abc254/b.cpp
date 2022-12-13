#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N;

  cin >> N;

  vector<int> array(N);
  vector<int> tmpArray(N);

  int count = 0;

  while (count < N)
  {
    for (int i = 0; i <= count; i++)
    {
      if (i == count)
      {
        tmpArray[i] = 1;
        cout << tmpArray[i] << endl;
      }
      else
      {
        tmpArray[i] = array[i - 1] + array[i];
        cout << tmpArray[i];
        if (i != 0)
        {
          cout << " ";
        }
      }
    }
    array = tmpArray;
    count++;
  }

  return 0;
}