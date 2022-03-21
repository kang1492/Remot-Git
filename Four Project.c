#include <stdio.h>

void main()
{

	//삼항 연산자
	
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
	//     이거  같다  저것  =   참       거짓  = 200 나옴

	printf("%d", temp);  //200 나옴.
	*/

	
	/*
	//if 문
	if (value == x_value)
	{
		temp = value;
	}
	*/

	// 암묵적 형 변환
	/*
	char m = 10;
	short n = 100;

	sizeof(int); //자료형의 크기 바이트 양
	
	printf("자료형의 크기 : %d", sizeof(m)); 

	//정수의 승격 sizeof ( m + n ) == 4 가 됨.
	*/

	/*
	char m = 10;
	short n = 100;

	printf("자료형의 크기 : %d", sizeof(m + n));

	float t = 100.56; // 4 byte  더 크
	int x = 0; // 4 byte   int 정수만 담을수 잇음. 0000 0000 * 4

	// int < float(저장방식이 다름)

	float t = 100.56; // 4 byte  더 크
	long long x = 0; // 8 byte   0000 0000 * 4

	//        8     4
	// long long < ftoat
	*/


	/*
	float t = 100.56; // 4 byte  더 크
	int x = 0; // 4 byte   int 정수만 담을수 잇음. 0000 0000 * 4
	x = t;

	printf("%d", x);


	double f = 100; //정수는 암묵적으로 실수로 저장됨
	printf("%lf", f);

	*/


	// 명시적 형 변환
	/*
	int x = 5;
	int y = 2;

	float t = x / y; // 2 가 나옴
	// 2.00000 

	printf("%f", t); //실수로 출력이 됨
	*/

	/*
	int x = 5;
	int y = 2;

	float t = (float)x / y;  //           x(float) / y(int) 작은것이 큰것으로 암묵적 변환됨.
	                         //float t <- x(float) / y(float)
	

	printf("%f", t); //실수로 출력이 됨 2.5 됨
	*/

	/*
	// x 집주소같은
	int x = 10; // x 메모리에 지정이 됨니다. 계속 랜덤으로 , 메모리주소는 1바이트식 나누어 져잇음
	            // 4 byte 0x00 0x01 0x02 0x03 , char 1바이트 int 4바이트 저장

	            // 묵여있는 공간에 시작주소 값으로 출력된다
	printf("%p", &x);
	*/

/*
	//입력 함수 (다른점)
int x = 10;

scanf_s("%d", &x); // 주소는 받는 이유 (변수 안에 있는 값을 저장하기 때문에 변수의 주소가 필요함.)

printf("입력한 x의 값 : %d", x); //F5 입력시 커서 깜박 < 입력을 대기 하겟다는 뜻
*/


//변수의 명명규칙
/*
int b = 10;
int b - 20; //값이 같아서 출력이 안됨. 대소문자 구별함 , 공백이 있으면 안된다.특수문자필요 _ 언더바
// 숫자로 시작하면 안됨.뒤에 넣을수 잇음.
*/

// 네이밍 규칙 ,표기법 (카멜
// 카멜 표기법 소문자시작
int backColor = 10;

// 파스칼 표기법 대문자시작
int PowerPoint = 20;

//스네이크 표기법 _ 밑줄 문자로 표기
int desk_top = 30;

// c# = 카멜 + 파스칼
// C++ = 스네이크



#include <stdio.h>

int main()
{

	//증감 연산자
		/*
		int number_1 = 10;
		int number_2 = 10;

		// ++ 변수 앞에 오게 되면 먼저 연산을 수행한 후에 값을 증가시킵니다.
		printf("전위 증가 연산자 : %d\n", ++number_1);

		// --가 변수 앞에 오게되면 먼저 연산을 수행한 후에 값을 감소시킵니다.
		printf("전위 감소 연산자 : %d\n", --number_2);

		//변수 뒤에 ++가 오게되면 나중에 값을 증가시키고 연산을 수행합니다.
		printf("후기 증가 연산자 : %d\n", number_1++);

		//변수 뒤에 --가 오게되면 나중에 값을 감소시키고 연산을 수행합니다.
		printf("후기 감소 연산자 : %d\n", number_2--);

		printf("number_1의 값 : %d\n", number_1);
		printf("number_2의 값 : %d\n", number_2);


		/*
		int resul_1 = ++number
		int resul_2 = --number


		*/

		// while 문

		/*
		// 변수를 이용하여 값을 전달해서 조건이 불이치되도록 설정하고 while문을 탈출하는 과제
		int person = 3;

		while (person > 2) // "1 : 조건이 참이다" 라는 의미입니다.
		{
			printf("공장의 인원을 재 배치해주세요.");
			scanf_s("%d", & person); //변수 안에 있는 메모리 넘겨줘야 , 깜박 대기 < 숫자 입력


			if (person > 2)
			{
				printf("공장이 돌아가고 있습니다.\n");
			}

		}
		*/

		//do while 문
		/*
		do
		{
			printf("조건이 틀렸지만, 실행됩니다.");

		}
		while (0 > 2); // 3>2 조건이 맞으면 계속 실행됨.

		return 0;
		*/

		// for 문
		/*
		for (int i = 0; i <= 5; i++) //5번 실행됨 <= 6번 실행됨
		{
			printf("안녕하세요? 집에 가고 싶습니다.\n");


		}
		*/

		/*
		// 1~10 까지의 합을 구해주세요.
		int value = 0;

		for (int i = 1; i <= 10; i++ )
		{
			value += i;
		 }

		printf("1~10 까지의 합 : %d", value); // 55 나옴



		*/

		/*
		int value = 0;

		for (int i = 5; i >= 1; i--)
		{
			printf("%d\n", i);
		}

		//5
		//4
		//3
		//2
		//1
		*/

		/*
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					printf("j의 값 : %d\n", j); // j - 1 하면 -숫자 됨.
				}
				printf("\n");
			}
			*/


			// 구구단

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");


	}

	print()


	return 0;

}
}