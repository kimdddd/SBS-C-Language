#pragma once
#include <stdio.h>

void main()
{
	// ������ �迭�̶�?
	/*
	// �迭�� ��ҷ� ������ ������ ������ �迭�Դϴ�.

	int num1 = 10, num2 = 20, num3 = 30;

	int* array[3] = { &num1,&num2,&num3 };

	for (int i = 0; i < 3; i++)
	{
		printf("array �������� �� : %p\n", array[i]);
		printf("array �����Ͱ� ����Ű�� �� : %d\n", *array[i]);
	}

	const char * data[3] = { "Apple","Banana","Melon" };

	// ���ο� Kimchi��� ���ڿ��� ���� �ּҸ� �ٽ� ����ŵ�ϴ�.
	// �׸��� ������ �����Ǿ� �ִ� Apple�� ������ ����ϴ�.
	data[0] = "Kimchi";

	//*data[0] = 'A';

	for (int i = 0; i < 3; i++)
	{  //       %s : '\0 ���ڸ� ������ �������� �Լ� ����ϴ� ���� �������Դϴ�.'
		printf("%s\n", data[i]);
	}
	*/

	// ASCII �ڵ��?
	/*
	// �̱� ǥ��ȭ ��ȸ�� ������ ���� ��ȯ�� ǥ�� �ڵ��
	// ���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ��Դϴ�.000000000000000000000000

	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'A' + i;
			printf("%c\n", alphabet);
		}
	}
	*/

	// �����
	/*
	// (int) �� ���� ������ �Է¹޽��ϴ�.
	// A ������ B ������ ����� ����� ������ּ���.

	int a, b;

	scanf_s("%d%d", &a, &b);

	for (int i = 1; i <= a && i<= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
		}
	}
	*/

	// ������
	// �ڱ� �ڽ��� ������ ���� ���(�����)�� ������ �� �ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�.

	int value;
	int result = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}

	}

	if (value == result)
	{
		printf("������");

	}
	else
	{
		printf("�������� �ƴϴ�.");
	}








}