/*
  세 숫자를 입력받아 평균을 구하는 프로그램을 만들어보시오
  단 소수점 2째자리까지만 출력
  (출력문자는 %.xf 이렇게 사용하면 x번째자리까지만 출력되요)
*/
#include<stdio.h>
int main() {
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.2f", (a+b)/3.0);
	return 0;
}
