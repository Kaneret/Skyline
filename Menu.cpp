#pragma once//������������ ��� ��������� ����������� ��������

//����������� �������� ��������������(���������)
#include "Menu.h"
#include "Definitions.h"


using namespace std;

//enum ����� //������������ ����������� ����������
//{
//�����1 = 13, �����2 = 15, �����3 = 17, �����4 = 19, �����5 = 21
//};


HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE); // ����� ������ ��� ������ ������� � �������

void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, char*str)
{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = 0;
	ci.dwSize = 100;
	SetConsoleCursorInfo(H, &ci); // ������ �������� ������
	setlocale(LC_ALL, "RUS");//��������� ��������� �������� �����
	COORD c;
	c.X = X_COORD; c.Y = Y_COORD;
	SetConsoleCursorPosition(H, c); //��������� �������
	SetConsoleTextAttribute(H, TEXT_COLOR); //��������� ����� ������
	cout << str << "\n";
	//printRecords(Y_COORD,TEXT_COLOR, str); //����� ��������
	
}



void hat()
{
	const int rowsCount = 6;//����������� ������� �� ������
	const int columnsCount = 55;//����������� ������� �� �����
	const unsigned char �����Data[rowsCount][columnsCount + 1] =
	{
		//���������� �������-�����
		"                                                    ",
		"        ****  *  *  *   *  *     ***  *    *  ****  ",
		"        *     * *    * *   *      *   * *  *  *     ",
		"        ****  **      *    *      *   *  * *  ****  ",
		"           *  * *     *    *      *   *   **  *     ",
		"        ****  *  *    *    ****  ***  *    *  ****  ",

	};
	cout << "\t";// ���������
	for (int r = 0; r <rowsCount; r++)//����� ������� ���� char(����� ������ ����) ������� ������(�� ������ �������)
	{
		for (int c = 0; c < columnsCount; c++)
		{
			
			cout << �����Data[r][c];// ����� �������� ������� �� �����
		}
		cout<<"\n\t";// ������, ���������

	}

}

void pointToMenu()
{// ����������� ������� ������ �����

	hat();
	stand(30, 9, GREEN_COLOR, "������ ����"); // ��������� ����� ������� �� �����
	stand(30, 11, GREEN_COLOR_DARK, "�������");
	stand(30, 13, GREEN_COLOR_DARK, "�����");
}
void pointToMenu2()
{
	//system("color 3F");
	hat();// ����������� ������� ������ �����
	stand(30, 9, GREEN_COLOR, "����������");// ��������� ����� ������� �� �����
	stand(30, 11, GREEN_COLOR_DARK, "����������");
	stand(30, 13, GREEN_COLOR_DARK, "����� 1");
	stand(30, 15, GREEN_COLOR_DARK, "����� 2");
	stand(30, 17, GREEN_COLOR_DARK, "����� 3");
	stand(30, 19, GREEN_COLOR_DARK, "����� 4");
	stand(30, 21, GREEN_COLOR_DARK, "����� 5");
	stand(30, 23, GREEN_COLOR_DARK, "�����");
}
void pointToMenu3()
{
	//system("color 3F");
	hat();// ����������� ������� ������ �����
	stand(30, 9, GREEN_COLOR, "Search");// ��������� ����� ������� �� �����
	stand(30, 11, GREEN_COLOR_DARK, "Show all records");
	stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
	stand(30, 15, GREEN_COLOR_DARK, "�����");

}


void rewriterCaseDownPoint(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "������ ����");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� ����
		stand(30, 11, GREEN_COLOR, "�������");
		break;
	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "�������");
		stand(30, 13, GREEN_COLOR, "�����");
		break;
	}

}
void rewriterCaseDownPoint2(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "����������");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� ����
		stand(30, 11, GREEN_COLOR, "����������");
		
		break;

	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "����������");
		stand(30, 13, GREEN_COLOR, "����� 1");

		
		
		
		break;

	case 4:
		stand(30, 13, GREEN_COLOR_DARK, "����� 1");
		stand(30, 15, GREEN_COLOR, "����� 2");

		
		
		break;

	case 5:
		stand(30, 15, GREEN_COLOR_DARK, "����� 2");
		stand(30, 17, GREEN_COLOR, "����� 3");


		
		break;

	case 6:
		stand(30, 17, GREEN_COLOR_DARK, "����� 3");
		stand(30, 19, GREEN_COLOR, "����� 4");


		
		break;

	case 7:
		stand(30, 19, GREEN_COLOR_DARK, "����� 4");
		stand(30, 21, GREEN_COLOR, "����� 5");


		
		break;
	case 8:
		stand(30, 21, GREEN_COLOR_DARK, "����� 5");
		stand(30, 23, GREEN_COLOR, "�����");
	
		
	
		break;
	}

}
void rewriterCaseDownPoint3(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "Search");// ����� �����, ���� ����������� ������� ����, �������� ������ �����������, ��� ������� ������� ����
		stand(30, 11, GREEN_COLOR, "Show all records");
		break;
	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "Show all records");
		stand(30, 13, GREEN_COLOR, "Show 10 records");
		break;
	case 4:
		stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
		stand(30, 15, GREEN_COLOR, "�����");
		break;
	}

}


void rewriterCaseUpPoint(int a)
{
	switch (a)
	{
		
	case 1:
		stand(30, 9, GREEN_COLOR, "������ ����");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� �����
		stand(30, 11, GREEN_COLOR_DARK, "�������");
		break;
	case 2:
		stand(30, 11, GREEN_COLOR, "�������");
		stand(30, 13, GREEN_COLOR_DARK, "�����");
		break;
	case 3:
		stand(30, 13, GREEN_COLOR, "�����");
		break;
	}

}
void rewriterCaseUpPoint2(int a)
{
	switch (a)
	{

	case 1:
		stand(30, 9, GREEN_COLOR, "����������");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� �����
		stand(30, 11, GREEN_COLOR_DARK, "����������");

	

		break;
	case 2:
	
		stand(30, 11, GREEN_COLOR, "����������");
		stand(30, 13, GREEN_COLOR_DARK, "����� 1");


		break;

	case 3:
		stand(30, 13, GREEN_COLOR, "����� 1");
		stand(30, 15, GREEN_COLOR_DARK, "����� 2");


		


		break;

	case 4:
		stand(30, 15, GREEN_COLOR, "����� 2");
		stand(30, 17, GREEN_COLOR_DARK, "����� 3");



	

	

		break;

	case 5:
		stand(30, 17, GREEN_COLOR, "����� 3");
		stand(30, 19, GREEN_COLOR_DARK, "����� 4");



	
		break;

	case 6:
		stand(30, 19, GREEN_COLOR, "����� 4");
		stand(30, 21, GREEN_COLOR_DARK, "����� 5");
	



		break;
	case 7:
		stand(30, 21, GREEN_COLOR, "����� 5");
		stand(30, 23, GREEN_COLOR_DARK, "�����");
		break;


	}
}
void rewriterCaseUpPoint3(int a)
{
	switch (a)
	{

	case 1:
		stand(30, 9, GREEN_COLOR, "Search");// ����� �����, ���� ����������� ������� ����, �������� ������ �����������, ��� ������� ������� �����
		stand(30, 11, GREEN_COLOR_DARK, "Show all records");
		break;
	case 2:
		stand(30, 11, GREEN_COLOR, "Show all records");
		stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
		break;
	case 3:
		stand(30, 13, GREEN_COLOR, "Show 10 records");
		stand(30, 15, GREEN_COLOR_DARK, "�����");
		break;
	case 4:
		stand(30, 15, GREEN_COLOR, "�����");
		
		break;
		break;
	}

}


// ������������ ���� ������� ������ � �������� userSelection2 � userSelection3, ������ ��������������� ��������� ���������
void userSelection(int Cur)
{
	system("cls");//������� ������
	switch (Cur)
	{
	
	case 1:pointToMenu2();//����� ������� (������ ����)
		moveToMenuPoint2();//������ ����� ����������� �� ����, � ��� �� ��� �����������
		break;
	case 2:pointToMenuShop();//����� ������� (Records)
		moveToMenuPointShop();//������ ����� ����������� �� ����, � ��� �� ��� �����������
		break;
	case 3:exit(0);
		
		break;
	}
}                                                                               
void userSelection2(int Cur)
{
	system("cls");//������� ������
	switch (Cur)
	{

	case 1: cout << "����������";// ������� � ���� ����� ������ ������ �������
		cout << "��� �������� � ���� ������� ����� �������";
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		
		break;
	case 2:cout << "����������";// �������� (����� �������� ��������������� �������� �� ����)


		_getch();
		break;
	case 3:cout << "����� 1";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 4:cout << "����� 2";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 5:cout << "����� 3";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 6:cout << "����� 4";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 7:cout << "����� 5";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 8:
		pointToMenu();//� ������ ������� ������� �����, ����� �����������
		moveToMenuPoint();// ����� ����� �����������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	}
}


void moveToMenuPoint()
{
	bool f = true; //���������� ����������, ���������� �� ������������� ����� �� �����
	int position = 1;//�������� ��������� ������� �� ������ �����
	
	while (f == true){//���� �� ����� ����������
int code = _getch();//������������� ������� �������
		switch (code)//�� �����������
		{
		case DOWN_ARROW:
			if (position<3)//��������� ������ �� �������
			position++;//���������� ��� ������������ �����������(������� ����� ������ ����) ���������� �� 1 ��� �������� ����������� �������
			rewriterCaseDownPoint(position);//����� ����������� �� ����� ����
			
			break;
		case UP_ARROW:
			if (position>1)//��������� ������ �� �������

			position--;//���������� ��� ������������ �����������(������� ����� ������ ����) ���������� �� 1 ��� �������� ����������� �������
			rewriterCaseUpPoint(position);//����� ����������� �� ����� �����
			
			break;
		case ENTER://����� ������, ����������� �������

			userSelection(position);// �������� ��������� ������� � ������� ������ ��������, ������� ����������� ��� ������ ����
			f = false;//���������� �����, ����� �� ����
			break;
		}
	}
}
void moveToMenuPoint2()
{
	bool f = true;
	int position = 1;

	while (f == true){
		int code = _getch();
		switch (code)
		{
		case DOWN_ARROW:
			if (position<8)
				position++;
			rewriterCaseDownPoint2(position);

			break;
		case UP_ARROW:
			if (position>1)

				position--;
			rewriterCaseUpPoint2(position);

			break;
		case ENTER:
			userSelection2(position);
			f = false;

			break;
		}
	}
}



//////////////////////////////////////////////////////////// �������� �  main ������ �������: pointToMenu(); � moveToMenuPoint();


