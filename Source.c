#include <stdio.h> // <>���̺귯�� ��� ������ ������ �� ����մϴ�.
#include "Calculator.h" // ""����� ���� ��� ������ ������ �� ����մϴ�.

// ��ũ�ζ�?
/* 
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����Դϴ�.

// ��ũ�δ� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʽ��ϴ�.
#define PI 3.14
// ��ũ�ο����� ; �ʿ����� �ʽ��ϴ�.
 
// ��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʽ��ϴ�.
#define Solution(x,y) x * y // 1 +(1 * 2)+ 1 

#define ANDROID 1
#define IOS 0
*/

// ����ü
struct Character
{

	// ����ü
	int health;
	float weight;
	const char * name;
	// ����ü�� �����ϱ� ���� ����ü�� 
	// �޸� ������ �������� �����Ƿ�, 
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
};


void main()
{
	// ��ó�����?
	/* 
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� �����Դϴ�.

	printf("�ȳ��ϼ���\n");

	int result = Function(10, 20);

	printf("result ������ �� : %d\n",result);

	// ��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� �����ϴ�.
	// PI = 3.45;

	printf("PI�� �� : %f\n", PI);
	// ��ũ���� ����
	// ������ ������ �� ������� ���� �ʽ��ϴ�.
	int a = 1;
	int b = 2;

	printf("Solution �Լ��� ��� :%d\n", Solution(10, 20)); 
	printf("Solution �Լ��� ��� :%d\n", Solution(a+1,b+1));
	*/

	// ���Ǻ� ������
/*
	// ���ǿ� ���� �ڵ��� ���� �κ��� ���������� �� ���� ������ �� �ֽ��ϴ�.
	// ���Ǻ� �������� #endif�� ����ؼ� ������ �˴ϴ�.

#if IOS
	// PC�� �˸´� Ű �Է�
	printf("�ȵ���̵� ����Դϴ�.\n");
#elif ANDROID
	// ����Ͽ� �˸´� Ű �Է�
	printf("�� ��° �����Դϴ�.");
#else
	printf("2���� ������ �� Ʋ���ϴ�.");
#endif
*/

	// ����ü��?
	/* 
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� 
	// ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	struct Character leesin;

	leesin.health = 100;
	leesin.name = "leesin";
	leesin.weight = 80.5f;

	printf("leesin�� ü�� : %d\n", leesin.health);
	printf("leesin�� �̸� : %s\n", leesin.name);
	printf("leesin�� ������ : %f\n", leesin.weight);

	// �ʱ�ȭ ����Ʈ�� ����� ���� ����ü ������ ����� ������ ������ ���ǵǾ���մϴ�.
	struct Character Alistar = { 200, 100.5, "Alistar"};
	
	printf("Alistar�� ü�� : %d\n", Alistar.health);
	printf("Alistar�� �̸� : %s\n", Alistar.name);
	printf("Alistar�� ������ : %f\n", Alistar.weight);
	*/

	// ���׼�
	// �ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� ����� ��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ���̴�.
	
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

	if (value < result)
	{
		printf("���׼�");

	}
	else
	{
		printf("���׼��� �ƴϴ�.");
	}





}