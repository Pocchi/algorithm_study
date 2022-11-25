#include <bits/stdc++.h>
using namespace std;

int main()
{

  int R, C;

  cin >> R;
  cin >> C;

  int start = 8;
  int end = 8;
  bool isWhite = true;

  while (true)
  {
    if ((start <= R && R <= end) && (start <= C && C <= end))
    {
      string result = isWhite ? "white" : "black";
      cout << result << endl;
      break;
    }
    else
    {
      start = start - 1;
      end = end + 1;
      isWhite = !isWhite;
    }
  }

  return 0;
}