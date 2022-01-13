/*
//for 문 1
#include<iostream>
using namespace std;

void main()
{
	int Sum = 0;
	for (int i = 0; i < 11; i++)
		Sum += i;

	cout << Sum << endl;
}
*/

/*
//for 문 2(초기식, 제어식 생략)
#include<iostream>
using namespace std;

void main()
{
	int Sum = 0;
	
	int i = 1;
	for (; i < 11;)
	{
		Sum += i;
		i++;
	}
}
*/

/*
//for 문(무한루프)
#include<iostream>
using namespace std;

void main()
{
	int Sum = 0;
	int i = 0;

	for (;;)
	{
		Sum += i;
		i++;

		if (i > 10)
			break;//무한루프(반복문) 탈출 방법
	}
	
	cout << Sum << endl;
}
*/
/*
//구구단?
#include<iostream>
using namespace std;

void main()
{
	for (int i = 1; i <= 9; i++)//세로
	{
		for (int j = 2; j <= 5; j++)//가로
		{
			cout << j << " * " << i << " = " << j * i<<"\t";
		}
		cout << endl;
	}
	
}
*/

/*
//숫자피라미드
#include<iostream>
using namespace std;

int main()
{
	//1. 높이만큰 반복
	//2. 공백규칙(높이-줄순번)
	//3. 증가하는 수 규칙(1부터 시작, 줄 순번(높이)까지 증가)
	//4. 감소하는 수 규칙(줄 순번(높이)-1 부터, 1까지 감소

	int 높이;
	cout << "높이를 입력하세요 : ";
	cin >> 높이;
	int j;
	for (int i = 1;i <= 높이; i++)
	{
		for (j = 0; j < 높이 - i; j++)
			cout << "+";
		for (j = 1; j <= i; j++)
			cout << j;
		for (j = i - 1; j > 0; j--)
			cout << j;
		cout << endl;
	}
}
*/

