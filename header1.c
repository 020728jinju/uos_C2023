#include <stdio.h>

void lcm1(void) {                           //파라미터 없이 수를 scanf로 받는 최소공배수 함수
	int num1, num2;

	printf("숫자1을 입력하세요. : ");
	scanf_s("%d", &num1);
	printf("숫자2를 입력하세요. : ");
	scanf_s("%d", &num2);
	int result = 0;
	while (1) {
		if (num1 > num2) {
			if (num1 % num2 == 0){printf("두 수의 최소공배수는 : %d\n", num1);
			break;
		}//num1>num2일때 num1%num2가 0이면 최소공배수는 num1이나옴
		else {
			printf("두 수의 최소공배수는 : %d\n", num1 * num2);
			break;
		}//num1>num2일때 num1%num2가 0이 아니면 최소공배수는 두 수의 곱
	}

		else if (num1 < num2) {
			if (num2 % num1 == 0) {
				printf("두 수의 최소공배수는 : %d\n", num2);
				break;
			}//num1<num2일때 num2%num1가 0이면 최소공배수는 num2가나옴
			else {
				printf("%d\n", num1 * num2);
			break;
		}//num1<num2일때 num2%num1이 0이 아니면 최소공배수는 num1이나옴

	}
		else {
			printf("두 수는 같습니다. 최소공배수는 %d입니다.\n", num1);
			break;
		}//두 수가 같으면 최소공배수는 num1=num2
}


	int lcm2(int num1, int num2){     // 정수 자료형을 파라미터로 하는 수를 scanf로 받는 최소공배수 함수
		int result = 0;
		while (1) {
			if (num1 > num2) {
				if (num1 % num2 == 0) {
					result = num1;
					break;
				}
				else {
					result = num1 * num2;
					break;
				}
			}
			else if (num1 < num2) {
				if (num2 % num1 == 0) {
					result = num2;
					break;
				}
				else {
					result = num1 * num2;
					break;
				}
			}
			else {
				result = num1;
				break;
			}
		}
		return result;
	} // 이하동문