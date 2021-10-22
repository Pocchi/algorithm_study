#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll merge_count(vector<int> &a)
{
  int n = a.size();
  if (n <= 1)
  {
    return 0;
  }

  ll cnt = 0;
  vector<int> b(a.begin(), a.begin() + n / 2); // 前半半分
  vector<int> c(a.begin() + n / 2, a.end());   // 後半半分

  cnt += merge_count(b);
  cnt += merge_count(c);

  int ai = 0, bi = 0, ci = 0;

  while (ai < n)
  { // (ai = 0 から aの配列最後まで)
    if (bi < b.size() && (ci == c.size() || b[bi] <= c[ci]))
    {
      // biがbの配列の範囲内 かつ
      // ciがcの配列の最後 または b[bi] が c[ci]より小さい
      a[ai++] = b[bi++]; // a[ai++]にb
      cout << 'ai';
    }
    else
    {
      cnt += n / 2 - bi; // n/2 は数列B のサイズ
      // bi は BのインデックスでBの要素全てがAに代入されると n/2 となる
      // 数列Cの要素が merge されるとき, 数列 B のうちまだ merge されていない要素の個数を cnt に足している.
      a[ai++] = c[ci++];
    }
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << merge_count(a) << endl;

  return 0;
}
