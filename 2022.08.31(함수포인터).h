#pragma once
#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("Hello");
}


void main()
{
	// ���� ������ ����
	/*
	int a = 10;
	int b = 20;

	int * ptr1 = &a;
	int * ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	int * temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;
	//                                  10,20

	printf("a�� �� : %d, b�� �� : %d\n", a, b);

	printf("ptr1�� ����Ű�� ��: %d, ptr2�� ����Ű�� �� : %d\n", *ptr1, *ptr2);
	*/

	// ��۸� ������
	/*
	// �̹� ������ �޸𸮸� ����Ű�� �ִ� �������Դϴ�.

	int * ptr = (int*)malloc(4);

	*ptr = 10;

	printf("ptr�� ����Ű�� �ּҴ�: %p\n", ptr);
	printf("ptr�� ����Ű�� ��: %d\n", *ptr);

	free(ptr);
	// ���� �Ҵ��� �޸𸮸� ������ �� ������ ������ NULL�� �ʱ�ȭ�մϴ�.
	ptr = NULL;

	// ������ �޸𸮸� �ٽ� �Ҵ��ϸ� ó�� ������ ��ġ���� �޸𸮰� �����˴ϴ�.
	ptr = (int*)malloc(4);

	*ptr = 20;
	printf("ptr�� ����Ű�� �ּҴ�: %p\n", ptr);
	printf("ptr�� ����Ű�� ��: %d\n", *ptr);
	*/

	// �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

	//printf("Function�Լ��� �ּ�: %p\n", Function);
	//printf("Function�Լ��� �ּ�: %p\n", &Function);

	void(*fp)();

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ� �ϸ�, 
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
	fp = Function;

	fp();



}



