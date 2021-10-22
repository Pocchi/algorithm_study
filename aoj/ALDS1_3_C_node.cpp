#include <bits/stdc++.h>
using namespace std;

struct Node { // 構造体でNodeを作る
  int key; // データ本体
  Node *prev, *next; // 前の要素、次の要素をもつ構造体変数
};

Node *nil;

Node* listSearch(int key){
  Node *cur = nil->next; // 番兵の次の要素から巡る
  while(cur != nil && cur->key != key) { // keyを発見するか、番兵に戻ると探索が終了
   cur = cur->next;
  }
  return cur;
}

// リストの初期化
// nextとprevをnilにして空のリストを作成
// リストの先頭を表す番兵というらしい・・？
void init(){
  nil = (Node *)malloc(sizeof(Node)); // mallocは指定したサイズだけメモリを動的に確保する
  nil->next = nil; // ->はアロー演算子。ポインタ変数からメンバにアクセスする
  nil->prev = nil;
}


void printList(){
  Node *cur = nil->next;
  int isf = 0;
  while(1){
    if ( cur == nil ) break;
    if ( isf++ > 0)  printf(" ");
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

void deleteNode(Node *t){
  if (t == nil) return; // tが番兵の時は処理しない。
  t->prev->next = t->next; // tの前の要素のnextをtのnextの指定に変更
  t->next->prev = t->prev; // tの次の要素のprevをtのprevの指定に変更
  free(t); // メモリ解放
}

void deleteFirst(){
  deleteNode(nil->next);
}

void deleteLast(){
  deleteNode(nil->prev);
}

void deleteKey(int key){
  // 検索したノードを削除
  deleteNode(listSearch(key));
}


void insert(int key){
  Node *x;
  x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next; // nilのprevをxのnextと繋いでいるらしい？
  // 番兵の直後に要素を追加
  nil->next->prev = x; 
  nil->next = x;
  x->prev = nil;
}

int main() {
  int key, n, i;
  int size = 0;
  char com[20];
  int np = 0, nd = 0;
  scanf("%d", &n);
  
  init();
  for ( i = 0; i < n; i++ ){
    scanf("%s%d", com, &key);
    if ( com[0] == 'i' ) { insert(key); np++; size++; }
    else if ( com[0] == 'd' ) {
      if (strlen(com) > 6){
	      if ( com[6] == 'F' ) deleteFirst();
	      else if ( com[6] == 'L' ) deleteLast();
      } else {
	      deleteKey(key); nd++; 
      }
      size--;
    }
  }

  printList();
  return 0;
}
