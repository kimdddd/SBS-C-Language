#pragma once
#include <stdio.h>
/*
void main()
{
	// 부호가 없는 자료형
	// unsigned 자료형도 언더플로우와 오버 플로우가 발생합니다.

	unsigned char value = 255; // 0 ~ 255

	printf("unsigend char의 값 : %d\n", value);

	// 실수를 저랑하는 방법
	// IEEE 754
	// float - 4 byte 32 bit (단정도)
	// double - 8 byte 64 bit (배정도)

	// 고정 소수점
	// 소수점을 사용하여 고정된 자릿수의 소수를 나타내는 방법입니다.
	// [1] [15] [16] <- 4 byte
	// 부호 지수 가수

	// 부동 소수점
	// 소수점의 위치를 고정하지 않고 그 위치를 나타내는 수를 따로 적는 것으로 유효숫자를 나타내는 가수와 소수점의 위치를 풀이하는 지수로 나누어 표현하는 방법입니다.
	// [1] [8] [23] <- 4 byte (정밀도 소수점 6 자릿수)
	// [1] [13] [52] <- 8 byte (정밀도 소수점 15 자릿수)
	// 부호 지수 가수

	float pi = 9.25; // 0.25, 0.5 오차x

	// 9.25 = 0000 1001.01
	// 첫 번째로 정규화 (소수점을 왼쪽으로 이동시켜 정수부가 한자릿수가 되도록 옮기는 과정입니다.)
	// 이동시킨 자릿수 (3)만큼 2의 지수로 사용하여 곱해줍니다.
	// 1.00101 x 2^3 

	// bias = (float 127), (double 1023) 
	// 3 + 127 = 130
	// 130 = 1000 0001 
	// [0][1000 0001][00010100000000000000000] 

	// 0.5 =       .1
	// 0.25 =      .01
	// 부동 소수점 오차 0.1, 0.3
	// 4 == 4 ok
	// 4.71 == 4.71 no

	double rotation = 1.25;

	// 정밀도
	// float 오차없이 표현할 수 있는 수 (소수점 6자릿수)
	// double 오차없이 표현할 수 있는 수 (소수점 15 자릿수)


	printf("float 변수의 값 : %f\n", pi); // 부동 소수점 오차

	printf("double 변수의 값 : %.15lf\n", rotation);

	//조건문
	// if : 어떤 특정한 조건을 조건이 맞다면  실행되는 명령문입니다.

	// 관계 연산자
	// 2개의 실체 간의 특정한 종류의 관계를 비교하여 원하는 값을 출력하는 연산자입니다.
	// 컴퓨터에서는 0은 거짓을 의미하고 , 1은 참을 의미합니다.
	int a = 10 > 5;
	int b = 10 == 10;
	int c = 10 >= 10;
	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);
	printf("c의 값 : %d\n", c);


	// if문의 조건이 참이면 if문 안 쪽에 { } 부분이 실행됩니다.
	// if문의 조건이 거짓이면 if문 안 쪽에 있는 { } 부분이 실행되지 않습니다.
	// if문의 조건으로 정수값에 0만 들어가지 않는다면 실행됩니다.
	// if문과 여러 개의 else if문이 조건이 참이라면 가장 위에 있는 조건문만 실행됩니다.
	// else if문은 if문의 조건이 거짓이라면 조건이여 실행하는 조건문입니다.
	// else if문을 사용하기 위해서 if문을 사용한 다음 사용할 수 있습니다.
	if (0)
	{
		printf("첫번째 조건\n");
	}

	else if (0)
	{
		printf("두번째 조건\n");
	}
	else if (0)
	{
		printf("세번째 조건\n");
	}

	// else : if문의 조건과 else if문의 조건 둘 다 거짓이라면 실행되는 조건문입니다.
	else
	{
		printf("if문의 조건과 else if문의 조건 모두 틀립니다.\n");
	}

	if (1)
	{
		printf("두번째 if문\n");
	}
	else
	{
		printf("if문의 조건이 틀립니다.\n");
	}


	if (1)
	{
		printf("세번째 if문\n");
	}
	// switch : 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	//  
	// go to : 

}
*/