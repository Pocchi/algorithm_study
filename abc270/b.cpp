// TODO: fix WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X, Y, Z;
  cin >> X;
  cin >> Y;
  cin >> Z;
  int result = -1;

  // 壁の向こうにゴールがあるか
  // 壁に阻まれずゴールにたどり着ける
  if (Y > 0 && X > 0)
  {
    // Yが0以上＆Xが0以上
    if (Y > X)
    {
      // 壁に阻まれずゴールにたどり着ける
      cout << X << endl;
    }
    else
    {
      // 壁の向こうにゴールがあるか
      if (Z < Y)
      {
        // 壁を壊してゴールに向かう
        if (Z < 0)
        {
          // Zがマイナス
          cout << (X - Z - Z) << endl;
        }
        else if (Y < Z)
        {
          // 壁の向こうにハンマーがある
          cout << result << endl;
        }
        else
        {
          cout << X << endl;
        }
      }
      else
      {
        cout << result << endl;
      }
    }
  }
  else if ((Y < 0 && X > 0) || (Y > 0 && X < 0))
  {
    // ゴールと壁のベクトルが逆
    cout << X << endl;
  }
  else if (Y > 0 && X > 0)
  {
    // マイナス
    if (Y < X)
    {
      // 壁に阻まれずゴールにたどり着ける
      cout << X << endl;
    }
    else
    {
      // 壁の向こうにゴールがあるか
      if (Z > Y)
      {
        // 壁を壊してゴールに向かう
        if (Z > 0)
        {
          // Zがプラス
          cout << (-(X) + Z + Z) << endl;
        }
        else if (Y > Z)
        {
          // 壁の向こうにハンマーがある
          cout << result << endl;
        }
        else
        {
          cout << (-X) << endl;
        }
      }
      else
      {
        cout << result << endl;
      }
    }
  }

  return 0;
}