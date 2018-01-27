#include <stdio.h>
int main(){
  int dan, num = 1;
  printf(“내가 특별히 구구단을 알려주지 몇단이 궁금한가?”);
  scanf(“%d”, &dan);
  while(num<10){
    printf(“%dx%d=%d \n”, dan, num, dan*num);
    num++;
  }
  return 0;
}
