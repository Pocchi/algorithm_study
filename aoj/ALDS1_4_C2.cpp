#include<stdio.h>
#include<string.h>

#define M 1046527 // これ何？
#define L 14 // defineは定数らしい

char H[M][L]; /* Hash Table */

// 文字から数値に変換
int getChar(char ch){
  if ( ch == 'A') return 1; // A -> 1
  else if ( ch == 'C') return 2; // C -> 2
  else if ( ch == 'G') return 3; // G -> 3
  else if ( ch == 'T') return 4; // T -> 4
  else return 0;
}

// 文字列から数値へ変換してkeyを生成する
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M - 1)); }

int find(char str[]){
  long long key, i, h;
  key = getKey(str); // 文字列を数値に変換
  for (i = 0; ; i ++) {
    h = (h1(key) + i * h2(key)) % M; // ハッシュ値を求める
    if (strcmp(H[h], str) == 0) return 1; // H[h] と str が等しければ1を返却(見つかった)
    else if (strlen(H[h]) == 0) return 0; // H[h]の文字列の長さが0なら0を返却(見つからなかった)
  }
}

int insert(char str[]){
  long long key, i, h;
  key = getKey(str); //文字列を数値に返却
  for (i = 0; ;i++) {
    h = (h1(key) + i * h2(key)) % M; // ハッシュ値を求める
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H[h]) == 0) { // H[h]の文字列が0
      strcpy(H[h], str); //  strをH[h]にコピー
      return 0;
    }
  }
  return 0;

}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0';
  scanf("%d", &n);
  
  for ( i = 0; i < n; i++ ) {
	  scanf("%s %s", com, str);
    if ( com[0] == 'i' ){
        insert(str);
    } else {
      if (find(str)) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
    }
  }
    return 0;
}