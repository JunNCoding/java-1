/*
//for �� 1
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
//for �� 2(�ʱ��, ����� ����)
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
//for ��(���ѷ���)
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
			break;//���ѷ���(�ݺ���) Ż�� ���
	}
	
	cout << Sum << endl;
}
*/
/*
//������?
#include<iostream>
using namespace std;

void main()
{
	for (int i = 1; i <= 9; i++)//����
	{
		for (int j = 2; j <= 5; j++)//����
		{
			cout << j << " * " << i << " = " << j * i<<"\t";
		}
		cout << endl;
	}
	
}
*/

/*
//�����Ƕ�̵�
#include<iostream>
using namespace std;

int main()
{
	//1. ���̸�ū �ݺ�
	//2. �����Ģ(����-�ټ���)
	//3. �����ϴ� �� ��Ģ(1���� ����, �� ����(����)���� ����)
	//4. �����ϴ� �� ��Ģ(�� ����(����)-1 ����, 1���� ����

	int ����;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> ����;
	int j;
	for (int i = 1;i <= ����; i++)
	{
		for (j = 0; j < ���� - i; j++)
			cout << "+";
		for (j = 1; j <= i; j++)
			cout << j;
		for (j = i - 1; j > 0; j--)
			cout << j;
		cout << endl;
	}
}
*/

