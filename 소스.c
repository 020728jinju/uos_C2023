#include <stdio.h>
int main(void) {
	char name[15];//name=이름 변수선언 
	int birthdate;//birthdate=생년월일 변수선언 
	int number;//number=학번 변수선언 
	char department[30];//department=학과명 변수선언 

	scanf_s("%s", name, sizeof(name));// 이름 입력받음
	scanf_s("%d", &birthdate);// 생년월일 입력받음
	scanf_s("%d", &number);// 학번 입력받음
	scanf_s("%s", department, sizeof(department));// 학과명 입력받음

	printf("이름 : %s\n생년월일 : %d\n학번:%d\n학과명 : %s\n", name, birthdate, number, department);//이름, 생년월일, 학번, 학과명 출력
	return 0;//메인함수 종료
}