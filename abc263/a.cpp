#include <bits/stdc++.h>
using namespace std;

int main()
{

  int A, B, C, D, E;

  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;
  cin >> E;

  int card1 = -1, card2 = -1;
  int num1 = 0, num2 = 0;
  vector<int> cards = {A, B, C, D, E};

  for (int i = 0; i < 5; i++)
  {
    int card = cards[i];
    if (card1 == card)
    {
      num1 += 1;
      continue;
    }

    if (card2 == card)
    {
      num2 += 1;
      continue;
    }

    if (card1 == -1)
    {
      card1 = card;
      num1 += 1;
      continue;
    }

    if (card2 == -1)
    {
      card2 = card;
      num2 += 1;
      continue;
    }
  }

  if ((num1 == 2 && num2 == 3) || (num1 == 3 && num2 == 2))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}