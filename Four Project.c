#include <stdio.h>

void main()
{

	//���� ������
	
	/*
	int value = 100;
	int x_value = 200;

	printf("%d", value == x_value ? value : x_value);
	*/


	/*
	int value = 100;  
	int x_value = 200;
	int temp = 0;

	temp = value == x_value ? value : x_value; 
	//     �̰�  ����  ����  =   ��       ����  = 200 ����

	printf("%d", temp);  //200 ����.
	*/

	
	/*
	//if ��
	if (value == x_value)
	{
		temp = value;
	}
	*/

	// �Ϲ��� �� ��ȯ
	/*
	char m = 10;
	short n = 100;

	sizeof(int); //�ڷ����� ũ�� ����Ʈ ��
	
	printf("�ڷ����� ũ�� : %d", sizeof(m)); 

	//������ �°� sizeof ( m + n ) == 4 �� ��.
	*/

	/*
	char m = 10;
	short n = 100;

	printf("�ڷ����� ũ�� : %d", sizeof(m + n));

	float t = 100.56; // 4 byte  �� ũ
	int x = 0; // 4 byte   int ������ ������ ����. 0000 0000 * 4

	// int < float(�������� �ٸ�)

	float t = 100.56; // 4 byte  �� ũ
	long long x = 0; // 8 byte   0000 0000 * 4

	//        8     4
	// long long < ftoat
	*/


	/*
	float t = 100.56; // 4 byte  �� ũ
	int x = 0; // 4 byte   int ������ ������ ����. 0000 0000 * 4
	x = t;

	printf("%d", x);


	double f = 100; //������ �Ϲ������� �Ǽ��� �����
	printf("%lf", f);

	*/


	// ����� �� ��ȯ
	/*
	int x = 5;
	int y = 2;

	float t = x / y; // 2 �� ����
	// 2.00000 

	printf("%f", t); //�Ǽ��� ����� ��
	*/

	/*
	int x = 5;
	int y = 2;

	float t = (float)x / y;  //           x(float) / y(int) �������� ū������ �Ϲ��� ��ȯ��.
	                         //float t <- x(float) / y(float)
	

	printf("%f", t); //�Ǽ��� ����� �� 2.5 ��
	*/

	/*
	// x ���ּҰ���
	int x = 10; // x �޸𸮿� ������ �ʴϴ�. ��� �������� , �޸��ּҴ� 1����Ʈ�� ������ ������
	            // 4 byte 0x00 0x01 0x02 0x03 , char 1����Ʈ int 4����Ʈ ����

	            // �����ִ� ������ �����ּ� ������ ��µȴ�
	printf("%p", &x);
	*/

/*
	//�Է� �Լ� (�ٸ���)
int x = 10;

scanf_s("%d", &x); // �ּҴ� �޴� ���� (���� �ȿ� �ִ� ���� �����ϱ� ������ ������ �ּҰ� �ʿ���.)

printf("�Է��� x�� �� : %d", x); //F5 �Է½� Ŀ�� ���� < �Է��� ��� �ϰٴٴ� ��
*/


//������ ����Ģ
/*
int b = 10;
int b - 20; //���� ���Ƽ� ����� �ȵ�. ��ҹ��� ������ , ������ ������ �ȵȴ�.Ư�������ʿ� _ �����
// ���ڷ� �����ϸ� �ȵ�.�ڿ� ������ ����.
*/

// ���̹� ��Ģ ,ǥ��� (ī��
// ī�� ǥ��� �ҹ��ڽ���
int backColor = 10;

// �Ľ�Į ǥ��� �빮�ڽ���
int PowerPoint = 20;

//������ũ ǥ��� _ ���� ���ڷ� ǥ��
int desk_top = 30;

// c# = ī�� + �Ľ�Į
// C++ = ������ũ


}