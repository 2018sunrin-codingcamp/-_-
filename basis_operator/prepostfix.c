#include<stdio.h>
int main() {
	int a=4;
  printf(“%d”, a++); //4 출력후 1더함
  printf(“%d”, ++a); //5에서 1더한 6출력
  printf(“%d”, a--); //6 출력후 1뺌
  printf(“%d”, --a); //5에서 1빼고 출력
  return 0;
}
