#include <stdio.h>

void main()
{
	// �������� ũ��
	/*
	double value = 9.36;
	double x = 10.97;
		// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؤľ� �մϴ�
	double * ptr = &value;

	printf("value�� �� : %lf\n", *ptr);
	printf("ptr ������ ������ ũ�� : %d\n", sizeof(ptr));


	// ptr ������ ����Ű�� �ּҸ� value���� ��� x��� ������ �ּҷ� �����մϴ�.
	ptr = &x;
	printf("ptr�� �� : %lf\n", *ptr);

	*ptr = 20.52;
	printf("ptr�� �� : %lf\n", *ptr);
	*/

	// �迭
	/*
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	 
	//  0    1    2    3    4
	// [10] [20] [30] [40] [50] <- �迭�� ���(�ε���)
	// 4 byte �޸� �������� 5���� �޸� ������ �����մϴ�.
	int array[5];

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;
	// �迭�� ũ�⸦ ����� ������ �� �����ϴ�.
	//array[5] = 100;

	printf("araay�� ù ��° ��:%d\n", array[0]);
	printf("araay�� �� ��° ��: %d\n", array[1]);
	printf("araay�� �� ��° �� :%d\n", array[2]);
	printf("araay�� �� ��° �� :%d\n", array[3]);
	printf("araay�� �ټ� ��° ��: %d\n", array[4]);
	printf("araay�� ���� ��° ��: %d\n", array[5]);

	printf("araay�� ũ���: %d\n", sizeof(array));
	*/

	// �迭�� �ʱ�ȭ
	/*
	// 0��° ��� (10) 1��° ���(5) 2��° ���(0)
    int room[3] = { 10,5,0 };
	
	// �迭�� ũ�⸦ ���ϴ� ���
	// �迭�� ũ�� / �迭�� �ڷ���
	int size = sizeof(room) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("room %d ��° ��� : %d\n", i, room[i]);
	}
	

	//�迭�� ũ�⸦ ���� ������, �ʱ�ȭ ��Ͽ� ������ ���� �����Ϸ��� �ڵ����� ������ݴϴ�.
	double team[] = { 5.1,6.8,7.7,49.63,11.07 };
	printf("team �迭�� ũ�� : %d", sizeof(team));

	// [0] = 5.1
	// [1] = 6.8
	// [2] = 7.7
	// [3] = 49.36
	// [4] = 11.07

	for (int i = 0; i < 5; i++)
	{
		team[i] = 0;
		printf("%d ��° ����� �� : %d\n", i, team[i]);
	}
	*/

   


}