#include <stdio.h>

int max(int a,int b) {
  scanf("");
  int c;
  if(a>b) c=a;
  else c=b;

  return c;
}

int main() {

  int a=20;
  int b=30;
  int e,d;

  e=max(a,b);//first compare

  a=30;
  b=40;

  d=max(a,b);

  printf("第一次比較結果為%d\n第二次比較結果為%d\n",e,d);

}
