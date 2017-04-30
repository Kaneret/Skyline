#pragma once//������������ ��� ��������� ����������� ��������

#include "Menu.h"//����������� �������� ��������������(���������)
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h> 
#include "Definitions.h"
#include <string> 
#include <fstream>

char mass[9][56];
char str[305];
char *print_array = (char*)mass;

int a = 9;
int b = 25;

char file3[9][25];
 hero MainHero;
 item shop;

using namespace std;

void Print( int rowsCount, int columnsCount, char *filename)
{
	system("color 3");

	
	ifstream txt(filename); // �������� �����
	for (int y = 0; y < rowsCount; y++) // ���� ������������ ������ ������ �� �����
	{
		txt.getline(str, sizeof(str)); // ��������� ������ �� �����
		for (int x = 0; x <= columnsCount; x++) // ������ ������� �� ������������ ������� �����
			mass[y][x] = str[x];
	}
	txt.close(); // �������� �����

	for (int r = 0; r <rowsCount; r++)//����� ������� ���� char(����� ������ ����) ������� ������(�� ������ �������)
	{
		for (int c = 0; c < columnsCount; c++)
		{
			cout << mass[r][c];// ����� �������� ������� �� �����
		}
		cout << "\n\t";// ������, ���������

	}
	

}
void Print( int rowsCount, int columnsCount, int positionOfShop, char *filename)
{
	system("color 3");

	ifstream txt(filename); // �������� �����
	for (int y = 0; y < rowsCount; y++) // ���� ������������ ������ ������ �� �����
	{
		txt.getline(str, sizeof(str)); // ��������� ������ �� �����
		for (int x = 0; x <= columnsCount; x++) // ������ ������� �� ������������ ������� �����
			mass[y][x] = str[x];
	}
	txt.close(); // �������� �����

	for (int r = 0; r < rowsCount; r++)//����� ������� ���� char(����� ������ ����) ������� ������(�� ������ �������)
	{
		for (int c = 0; c < columnsCount; c++)
		{

			cout << mass[r][c];// ����� �������� ������� �� �����
		}

		cout << "\n        ";// ������, ���������

	}

	stand(5, positionOfShop, 7, "-->");

}

void pointToMenuShop()
{// ����������� ������� ������ �����
		
		Print(MainHero.rowsCount, MainHero.columnsCount,"Shop.txt");// ����������� ������� ������ �����
		Print( a, b, MainHero.positionOfShop,  "Items.txt");
		printMeasure();
		
}

void moveToMenuPointShop()
{
	bool f = true;
	
	while (f == true){
		int code = _getch();
		switch (code)
		{
		case DOWN_ARROW:
			if (MainHero.positionOfShop<14)
				MainHero.positionOfShop++;
			stand(0, 0);
			
			Print(MainHero.rowsCount, MainHero.columnsCount, "Shop.txt");
			Print(a, b, MainHero.positionOfShop, "Items.txt");
			printMeasure();
			break;
		case UP_ARROW:
			if (MainHero.positionOfShop>7)
				MainHero.positionOfShop--;

			stand(0, 0);
			
			Print(MainHero.rowsCount, MainHero.columnsCount, "Shop.txt");
			Print( a, b, MainHero.positionOfShop, "Items.txt");
			printMeasure();
			break;
		case ENTER:
			userSelectionShop(MainHero.positionOfShop);
			f = false;

			break;
		}
	}
}

void userSelectionShop(int Cur)
{
	
	stand(0, 0);

	switch (Cur)
	{

	case 7: 
		if (MainHero.Money - QWERTY[0].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[0].gold;
			MainHero.Life = MainHero.Life + QWERTY[0].of;
		}		
		pointToMenuShop();
		moveToMenuPointShop();
		
		break;
	case 8:
		if (MainHero.Money - QWERTY[1].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[1].gold;
			MainHero.Armor = MainHero.Armor + QWERTY[1].of;
			MainHero.levelHelmet++;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;

	case 9:
		if (MainHero.Money - QWERTY[2].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[2].gold;
			MainHero.Armor = MainHero.Armor + QWERTY[2].of;
			MainHero.levelArmor++;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 10:
		if (MainHero.Money - QWERTY[3].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[3].gold;
			MainHero.Armor = MainHero.Armor + QWERTY[3].of;
			MainHero.levelBoots++;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 11:
		if (MainHero.Money - QWERTY[4].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[4].gold;
			MainHero.Armor = MainHero.Armor + QWERTY[4].of;
			MainHero.levelShield++;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 12:
		if (MainHero.Money - QWERTY[5].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[5].gold;
			MainHero.Armor = MainHero.Armor + QWERTY[5].of;
			MainHero.levelSword++; 
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 13:
		if (MainHero.Money - QWERTY[6].gold >= 0) {
			MainHero.Money = MainHero.Money - QWERTY[6].gold;
			MainHero.Attack = MainHero.Attack + QWERTY[6].of;
			MainHero.levelManacles++;
		}
		pointToMenuShop();
		moveToMenuPointShop();
		break;
	case 14:
		system("cls");
		pointToMenu();//� ������ ������� ������� �����, ����� �����������
		moveToMenuPoint();// ����� ����� �����������
		
		break;
	}
}

void printMeasure()

{
	stand(58, 0, 7, "                                                   ");
	stand(58, 0, 7, MainHero.Life, "��");
	stand(64, 0, 7, MainHero.Armor, "��");
	stand(68, 0, 7, MainHero.Attack,"��");
	stand(73, 0, 7, MainHero.Money," $");

}