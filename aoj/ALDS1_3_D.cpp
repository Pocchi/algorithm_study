#include <bits/stdc++.h>
using namespace std;

// 右端を探す関数
// 水の高さ、右端を返したい
int searchHashi(int &current, string danmen) {
  int hidari = 0; // 下り斜面の高さ
  int startEnd = current; // 下り斜面の終端
  // 左端(下り斜面の高さ)を数える
  int danmensize = danmen.size();
  for (int i = current; i < danmensize; i++) {
    if (danmen[i] == '\\') {
      hidari ++; 
    } else {
      startEnd = i - 1;
      break;
    }
  }
  // 右端(登り斜面)を探す
  // hidariと同じ、または超えたら端
  // 超えなくても、一番高ければ端
  int migi = 0; // 登り斜面の高さ
  int end = startEnd; // 右端の添字
  int maxMigi = 0;
  for (int i = startEnd; i < danmensize; i++) {
    if (danmen[i] == '/') {
      migi ++; 
    } else if (migi > 0) {
      if (maxMigi < migi) {
        end = i - 1;
        maxMigi = migi;
      }
    }
  }
  int suimen = min(hidari, maxMigi);
  current = end; // 右端を参照で返す
  return suimen; // 水の高さを返却 
}

// 水量を計算する関数
int getSuiryo(int start, int end, int suimen, string danmen) {
  int count = 0; // 同じものが続く間数える
  char key = danmen[start]; // countで何を数えているのか入れる '/' '\' '_'
  int suiryo = 0;
  for (int i = start; i < end; i++) {
    if (danmen[i] == key) {
      count++;
    } else {
      // 水量を数える
      if (danmen[i] == '/' || danmen[i] == '\\') {
        // 斜面の場合
        if (count < suimen) {
          // 斜面 < 水面
          suiryo += count * 0.5 + (suimen - count);
        } else {
          // 水面より斜面が高い場合は水面にならされる
          suiryo += count * 0.5;
        }
      } else {
        // 平面の場合
        // 水量 = 水面 * _の数
        suiryo += suimen * count;
      }
      // count、key初期化
      count = 1;
      key = danmen[i];
    }
  }
  return suiryo; // 水量を返却
}

int main() {
  string danmen;
  cin >> danmen;
  int current = 0; // 現在地
  int danmensize = danmen.size();
  // 多分数え終わるまでwhileが必要
  int k = 0; // 水たまりの数
  int A = 0; // 水たまりの総面積
  vector<int> L; // 各水たまりの面積
  while(current <= danmensize) {
    int start = current;
    int suimen = searchHashi(current, danmen);
    int suiryo = getSuiryo(start, current, suimen, danmen);
    L.push_back(suiryo);
    k ++;
    A += suiryo;
  }
  cout << A << endl;
  cout << k;
  int LSize = L.size();
  for (int i = 0; i < LSize; i++) {
    cout << " " << L[i];
  }
  cout << endl;
  return 0;
}