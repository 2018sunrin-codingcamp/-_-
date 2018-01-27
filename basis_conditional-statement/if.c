#include <stdio.h>
int main(){
   int opt;
   double num1, num2;
   double result;
   printf(“1. 덧셈 2. 뺄셈 3. 곱셈 5.나눗셈”);
   printf(“선택 해보던가”);
   scanf(“%d”, &opt);
   printf(“두개의 실수입력”);
   scanf(“%lf %lf”,  &num1, &num2);
   if(opt == 1){
     result = num1 + num2;
   }else if(opt == 2){
     result = num1 - num2;
   }else{
     result = num1 / num2;
   }
   printf(“결과: %f \n”, result);
   return 0;
}
