#pragma once
#include <stdio.h>
/*
void main()
{
	// ������

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i,  j, i * j);
		}
		printf("\n");
	}


	// While ��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	int memory = 5;

	while (memory > 1) // ���α׷��ֿ��� 0�� ������ ��Ÿ���ϴ�.
	{
		memory--;
		printf("������ ���Դϴ�.\n");

	}


	// do while ���̶�?
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	int value = 5;
	do
	{
		// do ���� ������ ������ while�� �������� ����� �� �����ϴ�.
		// int x = 10;
		printf("������ �����Դϴ�.");

	}
	while (value == 10);


	// continue ���̶�?
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ����Դϴ�.

	// 1 ~ 10 ������ ���� ����ϴµ�. 3�� ����� �����ϰ� ���

	for (int i = 0; i <= 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d\n", i);
	}


	// �� ��ȯ�̶�?
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.
	// c������ ������ ������ �����ϰ� �Ǹ� ������ ������ ���� ���� �� �ֽ��ϴ�.

	// char x = 10;
	// short y = 20;
	// int sum = x + y; int�� �ڵ� �� ��ȯ�� �߻���

	// �Ϲ��� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	//printf("char�� ũ�� : %d\n", sizeof(char));
	//printf("short�� ũ�� : %d\n", sizeof(short));
	//printf("int�� ũ�� : %d\n", sizeof(int));
	//printf("float�� ũ�� : %d\n", sizeof(float));
	//printf("long�� ũ�� : %d\n", sizeof(long));

	char x = 10;
	short y = 20;
	//   30 = 4 Byte (int) + 4 Byte (int)
	int sum = x + y;

	int z = 500; // [][][][] 4 Byte
	char temp = z; // [] 1 Byte

	printf("temp�� �� : %d\n", temp);

	// ����� �� ��ȯ
	int p0 = 10;
	int p1 = 3;
	//    result <- p0 float / p1 float
	float result = (float)p0 / p1;
	printf("result�� �� : %f\n", result);

	// int�� long�� ����
	// int�� 32��Ʈ �ü���� 64��Ʈ �ü�������� 4 Byte�� ũ�⸦ �����ϴ�.
	// long�� 32��Ʈ �������� 4 Byte�̰� 64��Ʈ �ü�������� 8 Byte�� ũ�⸦ �����ϴ�.
	// ��, �������� 64��Ʈ �ü�������� 4 Byte �Դϴ�.

}
*/