#pragma once
#include <stdio.h>

void main()
{
	// 문자열
	/*
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// char는 1 byte이므로 하나의 문자만 저장할 수 있습니다.
	char alphabet = 'A';
	//                  0   1   2   3   4
	char string[6] = { 'A','B','C','D','E'};

	string[0] = 'T';
	// 문자 배열을 선언할 때 맨 마지막에 NULL만 포함됩니다.
	// 문자 배열같은 경우에는 배열의 크기 n + 1로 설정해야 합니다.
	printf("string 배열의 값: %s\n", string);

	// NULL문자는 문자열의 끝을 알려주는 제어 문자입니다.
	//[T] [B] [C] [D] [E]
	//[T] [\0] [C] [D] [E]
	string[2] = '\0';

	// 문자 배열 중간에 NULL문자가 있으면 NULL문자 이전의 문자열까지만 출력합니다.
	printf("string 배열의 값: %s\n", string);
	*/

	// 문자열 초기화
	/*
	// 코드 영역
	// 데이터 영역 -> BSS, Read Only Data Segment,
	// 스택
	// 힙

	// "count"
	// [c][o][u][n][t][\0] = 5 char + null = 6 byte

	// 4 byte 변수의 메모리를 저장할 수 있는 포인터 변수
	// char * ptr -> [c][o][u][n][t][\0]
	const char * ptr = "count";

	// 포인터 변수가 어디를 가리키고 있는지 확인하기 위해서
	// 거기 있는 값을 출력하기 위해서 %c로 출력합니다.

	//ptr[0] = "T";

	// *ptr을 하는 순간 포인터가 가리키고 있는 위치에 접근해서 값을 출력합니다.

	//ptr = count
	//"%s" 문자열의 시작주소로 접근해서 값을 count 출력한다고 보시면 됩니다.
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %c\n", ptr[0]);
	printf("ptr이 가리키는 문자열의 값 : %c\n", *ptr);
	printf("ptr이 가리키는 문자열의 값은: %s\n", ptr);
	*/

	// 이중 포인터
	/*
	// [4 byte]

	int value = 100;

	// ptr(value주소) -> value의 시작 주소를 가리킵니다.
	int * ptr = &value;

	// twoptr(이중 포인터)은 ptr이라는포인터 변수의 주소를 저장합니다.
	// twoptr(ptr의 주소) -> ptr의 시작 주소를 가리킵니다.
	int ** twoPtr = &ptr;
	printf("value이 가리키는 값:%p\n", &value);
	printf("ptr이 가리키는 값:%p\n", ptr);
	printf("twoPtr이 가리키는 값:%p\n", twoPtr);

	printf("ptr이 가리키고 있는 변수의 값 :%d\n", *ptr);
	printf("twoPtr이 가리키고 있는 변수의 값:%d\n", **twoPtr);

	// twoPtr          ptr(00ff883a)   value
	// [00ff883a]----->[00ddfc55]----->[00ddfc55]
	*/

	// 소수 구하기
	// 소수(1보다 큰 자연수 중에 1과 자기 자신만을 약수로 가지는 수)
	// 1과 20 사이의 소수를 출력해주세요.

	// 내가 입력한 숫자가 소수인지 아닌지 판별하는 프로그램
	// 5 -> 소수입니다.
	// 6 -> 소수가 아닙니다.

	int count = 0;
	int value;

	scanf_s("%d", &value);


	for (int i = 2; i < value - 1; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}

	if (count == 0)
	{

		printf("소수");
	}
	else
	{
		printf("소수가 아닙니다");
	}






}