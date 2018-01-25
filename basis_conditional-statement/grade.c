/*
  국어 수학 영어 성적을 입력받아 유저의 평균점수의 등급을 출력하는 프로그램을 만드시오
  단!
  90점이상 A
  80점이상 B
  70점이상 C
  60점이하 D
  점수가 50점인 사람은 재수강 출력
  그이하 점수는 모두 F로 처리하시오
*/
#include<stdio.h>
int main() {
	int kor,eng,math;
	int aver;
	scanf("%d %d %d", &kor, &math, &eng);
	aver = (kor+math+eng)%3
	if(aver>=90){
    printf(“A”);
	}else if(aver>=80){
    printf(“B”);
	}else if(aver>=70){
    printf(“C”);
  }else if(aver<=60){
    if(aver == 50){
      printf(“재수강”);
    }else{
      printf(“D”);
    }
  }else if(aver<50){
      		printf(“D”);
  }
	return 0;
}
