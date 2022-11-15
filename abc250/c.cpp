#include <bits/stdc++.h>
using namespace std;

int N, Q;

int main()
{
  cin >> N;
  cin >> Q;
  struct Number
  {
    int value;
    int right; // -1の場合は最後
    int left;  // -1の場合は最初
  };
  struct Number Numbers[N + 1];
  int start = 1;

  for (int i = 1; i <= N; i++)
  {
    Numbers[i].value = i;
    if (i == 1)
    {
      Numbers[i].left = -1;
    }
    else
    {
      Numbers[i].left = i - 1;
    }

    if (i == N)
    {
      Numbers[i].right = -1;
    }
    else
    {
      Numbers[i].right = i + 1;
    }
  }

  for (int i = 0; i < Q; i++)
  {
    int change;
    cin >> change;
    if (Numbers[change].right == -1)
    {
      // 右端の場合は左隣と入れ替え
      int left = Numbers[change].left;
      int right = Numbers[change].right;
      int leftLeft = Numbers[left].left;
      Numbers[change].right = left;
      Numbers[left].left = change;
      Numbers[left].right = right;
      if (leftLeft == -1)
      {
        start = left;
      }
      else
      {
        Numbers[leftLeft].right = change;
      }
    }
    else
    {
      // 右隣のボールと入れ替える
      int right = Numbers[change].right;
      int rightRight = Numbers[right].right;
      int left = Numbers[change].left;
      Numbers[change].right = rightRight;
      Numbers[change].left = right;
      Numbers[right].right = change;
      Numbers[right].left = left;
      Numbers[left].right = right;
    }
  }

  int i = start;
  while (true)
  {
    // cout << i << ", right: " << Numbers[i].right << ", left: " << Numbers[i].left;
    cout << i;
    i = Numbers[i].right;
    if (i == -1)
    {
      cout << endl;
      break;
    }
    else
    {
      cout << " ";
    }
  }
}
