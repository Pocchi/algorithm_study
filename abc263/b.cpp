#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N;
  cin >> N;
  vector<int> array(N + 1);

  for (int i = 2; i <= N; i++)
  {
    cin >> array[i];
  }

  int currentIndex = N;
  int count = 0;
  while (true)
  {
    if (currentIndex == 1)
    {
      cout << count << endl;
      break;
    }
    else
    {
      currentIndex = array[currentIndex];
      count += 1;
    }
  }

  return 0;
}