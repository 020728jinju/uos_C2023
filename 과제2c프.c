#include <stdio.h>

void convert_base(int num, int base) // num은 변환할 10진수(양의 정수), base는 변환할 진법
{
    if (num == 0) {
        return;
    } // 재귀함수의 종료 조건 설정

    convert_base(num / base, base); // 재귀함수 호출

    int remainder = num % base; //remainder변수는 진법을 변환하기 위하여 필요한 num을 base로 나눈 나머지를 저장하고있음
    if (remainder < 10) {
        printf("%d", remainder);
    } //remainder<10 : 그대로 출력
    else {
        printf("%c", remainder - 10 + 'A');
    } // remainder>=10이면 10~15=A~F를 출력
}



int main() {
    int num, base; // num은 변환할 10진수(양의 정수), base는 변환할 진법
    printf("변환할 10진수 입력 : ");
    scanf_s("%d", &num);
    //10진수(양의정수) 입력함
    
    if (num <= 0) {
        printf("양의 정수를 입력하세요. ");
        return;
    }//0이하의 정수는 입력x

    printf("변환할 진법 입력 (2-16): "); //2~16까지의 진법 입력
    scanf_s("%d", &base);
    //2~16까지의 진법 입력함

    if (base < 2 || base>16) {
        printf("2-16까지의 진법만 입력하세요. ");
        return;
    }//2~16 이외는 입력x

        printf("%d의 %d진수 변환 값 : ", num, base);
        convert_base(num, base);
        printf("\n"); // 위에서 설정한 convert_base함수가 실행되어 구하고자 하는것이 출력됨
    


    return 0; //프로그램 성공적으로 종료
}