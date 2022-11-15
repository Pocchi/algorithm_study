#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W, R, C;
  cin >> H;
  cin >> W;
  cin >> R;
  cin >> C;

  int count = 0;

  // 1つ上 R - 1
  if (R - 1 >= 1)
    count++;
  // 1つ下 R + 1
  if (R + 1 <= H)
    count++;
  // 1つ右 C + 1
  if (C + 1 <= W)
    count++;
  // 1つ左 C - 1
  if (C - 1 >= 1)
    count++;

  cout << count << endl;
}
