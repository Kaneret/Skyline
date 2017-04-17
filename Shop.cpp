#pragma once//������������ ��� ��������� ����������� ��������
//����������� �������� ��������������(���������)
#include "Menu.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h> 
#include "Definitions.h"

int Money = 500;
int Life = 100;
int Armor = 0;
int Attack = 0;


using namespace std;
enum cost { Life1 = 50, helmet1=100, armor1= 200, boots1=300, sheld1=10, sword1=99,manacles1=1000 };
enum characteristic { Life2 = 1, helmet2 = 10, armor2 = 10, boots2 = 10, sheld2 = 10, sword2 = 10, manacles2 = 10 };

HANDLE G = GetStdHandle(STD_OUTPUT_HANDLE); // ����� ������ ��� ������ ������� � �������

void printText(int X, int Y, int COLOR, int Q)
{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = 0;
	ci.dwSize = 100;
	SetConsoleCursorInfo(G, &ci); // ������ �������� ������
	setlocale(LC_ALL, "RUS");//��������� ��������� �������� �����
	COORD c;
	c.X = X; c.Y = Y;
	SetConsoleCursorPosition(G, c); //��������� �������
	SetConsoleTextAttribute(G,COLOR); //��������� ����� ������
	cout << Q ;
	

}


void printShopHeader()
{
	const int rowsCount = 6;//���������� ������� �� ������
	const int columnsCount = 55;//���������� ������� �� �����
	const unsigned char PartData[rowsCount][columnsCount + 1] =
	{
		//���������� �������-�����
		"                                            ",
		"                     ****  *  *  ****  **** ",
		"                     *     *  *  *  *  *  * ",
		"                     ****  ****  *  *  **** ",
		"                        *  *  *  *  *  *    ",
		"                     ****  *  *  ****  *    ",

	};
	cout << "\t";// ���������
	for (int r = 0; r <rowsCount; r++)//����� ������� ���� char(����� ������ ����) ������� ������(�� ������ �������)
	{
		for (int c = 0; c < columnsCount; c++)
		{

			cout << PartData[r][c];// ����� �������� ������� �� �����
		}
		cout << "\n\t";// ������, ���������

	}
	
}


//��� ������ �� ����
void pointToMenuShop()
{// ����������� ������� ������ �����
		
		printShopHeader();// ����������� ������� ������ �����
		printMeasure();
		print�haracteristic();

		stand(30, 9, GREEN_COLOR, "����� ������� (+1 ��) 50$");// ��������� ����� ������� �� �����
		stand(30, 11, GREEN_COLOR_DARK, "���� (+10 ��) 100$");
		stand(30, 13, GREEN_COLOR_DARK, "����� (+10 ��) 200$");
		stand(30, 15, GREEN_COLOR_DARK, "C����� (+10 ��) 300$");
		stand(30, 17, GREEN_COLOR_DARK, "������ (+10 ��) 1000$");
		stand(30, 19, GREEN_COLOR_DARK, "��� (+10 ��) 10$");
		stand(30, 21, GREEN_COLOR_DARK, "��� (+10 ��) 99$");
		stand(30, 23, GREEN_COLOR_DARK, "�����");
		_getch();
}

void rewriterCaseDownPointShop(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "����� ������� (+20 ��) 50$");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� ����
		stand(30, 11, GREEN_COLOR, "���� (+10 ��) 100$");
		break;

	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "���� (+10 ��) 100$");
		stand(30, 13, GREEN_COLOR, "����� (+10 ��) 200$");

		break;

	case 4:
		stand(30, 13, GREEN_COLOR_DARK, "����� (+10 ��) 200$");
		stand(30, 15, GREEN_COLOR, "C����� (+10 ��) 300$");

		break;

	case 5:
		stand(30, 15, GREEN_COLOR_DARK, "C����� (+10 ��) 300$");
		stand(30, 17, GREEN_COLOR, "������ (+10 ��) 1000$");

		break;

	case 6:
		stand(30, 17, GREEN_COLOR_DARK, "������ (+10 ��) 1000$");
		stand(30, 19, GREEN_COLOR, "��� (+10 ��) 10$");

		break;

	case 7:
		stand(30, 19, GREEN_COLOR_DARK, "��� (+10 ��) 10$");
		stand(30, 21, GREEN_COLOR, "��� (+10 ��) 99$");

		break;
	case 8:
		stand(30, 21, GREEN_COLOR_DARK, "��� (+10 ��) 99$");
		stand(30, 23, GREEN_COLOR, "�����");

		break;
	}

}
void rewriterCaseUpPointShop(int a)
{
	switch (a)
	{

	case 1:
		stand(30, 9, GREEN_COLOR, "����� ������� (+1 ��) 50$");// ����� �����, ���� ����������� ������� ����, ������� ������ �����������, ��� ������� ������� �����
		stand(30, 11, GREEN_COLOR_DARK, "���� (+10 ��) 100$");

		break;
	case 2:

		stand(30, 11, GREEN_COLOR, "���� (+10 ��) 100$");
		stand(30, 13, GREEN_COLOR_DARK, "����� (+10 ��) 200$");

		break;

	case 3:
		stand(30, 13, GREEN_COLOR, "����� (+10 ��) 200$");
		stand(30, 15, GREEN_COLOR_DARK, "C����� (+10 ��) 300$");

		break;

	case 4:
		stand(30, 15, GREEN_COLOR, "C����� (+10 ��) 300$");
		stand(30, 17, GREEN_COLOR_DARK, "������ (+10 ��) 1000$");

		break;

	case 5:
		stand(30, 17, GREEN_COLOR, "������ (+10 ��) 1000$");
		stand(30, 19, GREEN_COLOR_DARK, "��� (+10 ��) 10$");

		break;

	case 6:
		stand(30, 19, GREEN_COLOR, "��� (+10 ��) 10$");
		stand(30, 21, GREEN_COLOR_DARK, "��� (+10 ��) 99$");

		break;
	case 7:
		stand(30, 21, GREEN_COLOR, "��� (+10 ��) 99$");
		stand(30, 23, GREEN_COLOR_DARK, "�����");
		break;

	}
}

//��� ������ �� ����
void moveToMenuPointShop()
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
			rewriterCaseDownPointShop(position);

			break;
		case UP_ARROW:
			if (position>1)

				position--;
			rewriterCaseUpPointShop(position);

			break;
		case ENTER:
			userSelectionShop(position);
			f = false;

			break;
		}
	}
}


void userSelectionShop(int Cur)
{
	
	system("cls");//������� ������
	switch (Cur)
	{

	case 1: 
		if (Money- Life1 >=0) {
			Money = Money - Life1;
			Life = Life + Life2;
		}		
		pointToMenuShop();
		moveToMenuPointShop();
		
		break;
	case 2:
		if (Money - helmet1 >= 0) {
			Money = Money - helmet1;
			Armor = Armor + helmet2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;

	case 3:
		if (Money - armor1 >= 0) {
			Money = Money - armor1;
			Armor = Armor + armor2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 4:
		if (Money - boots1 >= 0) {
			Money = Money - boots1;
			Armor = Armor + boots2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 5:
		if (Money - manacles1 >= 0) {
			Money = Money - manacles1;
			Armor = Armor + manacles2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 6:
		if (Money - sheld1 >= 0) {
			Money = Money - sheld1;
			Armor = Armor + sheld2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 7:
		if (Money - sword1 >= 0) {
			Money = Money - sword1;
			Attack = Attack + sword2;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 8:
		pointToMenu();//� ������ ������� ������� �����, ����� �����������
		moveToMenuPoint();// ����� ����� �����������

		break;
	}
}

void printMeasure()
{
	stand(75, 0, GREEN_COLOR, "$");
	stand(63, 0, GREEN_COLOR, "��");
	stand(58, 0, GREEN_COLOR, "��");
	stand(68, 0, GREEN_COLOR, "��");
	
}
void print�haracteristic()
{
	printText(54, 0, GREEN_COLOR, Life);
	printText(61, 0, GREEN_COLOR, Armor);
	printText(66, 0, GREEN_COLOR, Attack);
	printText(71, 0, GREEN_COLOR, Money);
}
