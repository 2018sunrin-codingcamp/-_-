/*
  정수 한 개가 입력되었을 때 카운트 다운을 출력하는 프로그램을 만들어봐라
  입력 정수 한 개
  출력 1만큼 씩 줄여 한줄에 하나씩 1이 될때까지 출력한다.
  입력예시
  6
  출력
  6
  5
  4
  3
  2
  1
*/

#include <stdio.h>
int main(){
  int tmp;
  scanf(“%d”, &tmp);
  for(int i=tmp; i>0; i--){
    printf(“%d”, i);
  }
  return 0;
}
