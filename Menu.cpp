#pragma once//������������ ��� ��������� ����������� ��������

#include "Menu.h"//����������� �������� ��������������(���������)
#include "Definitions.h"

using namespace std;
item QWERTY[7] = { { LifePosion,cost1,Life1 },{ helmet ,cost2,Armor1 },{ armor,cost3,Armor1 },
{ boots,cost4,Armor1 },{ manacles,cost5, Armor1 },{ shield,cost6,Armor1 },{ sword,cost7,Attack1 } };


char file2[6][56];

char file4[4][11];int c = 4;int d = 11;// ������ ����������� ������� �������� ����
char file5[8][11]; int q = 9; int w = 11;// ������ ����������� ������� �������� ����



void pointToMenu()
{
	MainHero.positionOfMenu =7;

	Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
	Print(c, d, MainHero.positionOfMenu, "MainMenu.txt");
	
}
void pointToMenu2()
{
	MainHero.positionOfMenu = 7;

	Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");// ����������� ������� ������ �����
	Print( q, w, MainHero.positionOfMenu, "StartGame.txt");
	
}

// ������������ ���� ������� ������ � �������� userSelection2 � userSelection3, ������ ��������������� ��������� ���������
void userSelection(int Cur)
{
	system("cls");//������� ������
	switch (Cur)
	{
	
	case 7:pointToMenu2();//����� ������� (������ ����)
		moveToMenuPoint2();//������ ����� ����������� �� ����, � ��� �� ��� �����������
		break;
	case 8:pointToMenuShop();//����� ������� (Records)
		moveToMenuPointShop();//������ ����� ����������� �� ����, � ��� �� ��� �����������
		break;
	case 9:		
		break;
	}
}                                                                               
void userSelection2(int Cur)
{
	system("cls");//������� ������
	switch (Cur)
	{

	case 7: cout << "����������";// ������� � ���� ����� ������ ������ �������
		cout << "��� �������� � ���� ������� ����� �������";
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		
		break;
	case 8:cout << "����������";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������

		_getch();
		break;
	case 9:cout << "����� 1";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������	
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 10:cout << "����� 2";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 11:cout << "����� 3";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 12:cout << "����� 4";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 13:cout << "����� 5";// �������� (����� �������� ��������������� �������� �� ����)
		_getch();// �������� ������� �������
		system("cls");// ������� ������
		pointToMenu2();// ����������� �������
		moveToMenuPoint2();// ����� ����� ����� �����������
		break;
	case 14:
		pointToMenu();//� ������ ������� ������� �����, ����� �����������
		moveToMenuPoint();// ����� ����� �����������
		break;
	}
}

void moveToMenuPoint()
{
	bool f = true; //���������� ����������, ���������� �� ������������� ����� �� �����
		
	while (f == true){//���� �� ����� ����������
		int code = _getch();//������������� ������� �������
		switch (code)//�� �����������
		{
		case DOWN_ARROW:
			if (MainHero.positionOfMenu<9)//��������� ������ �� �������
				MainHero.positionOfMenu++;//���������� ��� ������������ �����������(������� ����� ������ ����) ���������� �� 1 ��� �������� ����������� �������
			stand(0, 0);

			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( c, d, MainHero.positionOfMenu, "MainMenu.txt");
			break;
		case UP_ARROW:
			if (MainHero.positionOfMenu>7)//��������� ������ �� �������

				MainHero.positionOfMenu--;//���������� ��� ������������ �����������(������� ����� ������ ����) ���������� �� 1 ��� �������� ����������� �������
			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( c, d, MainHero.positionOfMenu, "MainMenu.txt");
			break;
		case ENTER://����� ������, ����������� �������

			userSelection(MainHero.positionOfMenu);// �������� ��������� ������� � ������� ������ ��������, ������� ����������� ��� ������ ����
			f = false;//���������� �����, ����� �� ����
			break;
		}
	}
}
void moveToMenuPoint2()
{
	bool f = true;
		

	while (f == true){
		int code = _getch();
		switch (code)
		{
		case DOWN_ARROW:
			if (MainHero.positionOfMenu<14)
				MainHero.positionOfMenu++;
			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print(q, w, MainHero.positionOfMenu, "StartGame.txt");
			

			break;
		case UP_ARROW:
			if (MainHero.positionOfMenu>7)
				MainHero.positionOfMenu--;

			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( q, w, MainHero.positionOfMenu, "StartGame.txt");
		

			break;
		case ENTER:
			userSelection2(MainHero.positionOfMenu);
			f = false;

			break;
		}
	}
}

/*void main()
{
	
	setlocale(LC_ALL, "RUS");//��������� ��������� �������� �����
	pointToMenu();
	
	moveToMenuPoint();
}*/