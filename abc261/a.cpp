#include <bits/stdc++.h>
using namespace std;

int main()
{

  int L1, R1, L2, R2;

  cin >> L1;
  cin >> R1;
  cin >> L2;
  cin >> R2;

  int maxL = max(L1, L2);
  int minR = min(R1, R2);

  int count = 0;
  for (int i = maxL; i <= minR; i++)
  {
    if ((L1 <= i && R1 >= i) && (L2 <= i && R2 >= i))
    {
      count += 1;
    }
  }
  count = count > 0 ? count - 1 : count;
  cout << count << endl;

  return 0;
}