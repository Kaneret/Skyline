#pragma once//используется для избежания бесконечной рекурсии
//подключение директив предпроцессора(библиотек)
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h> 
#include "Skyline.h"

using namespace std;

enum Colors //перечисление константных переменных
{
	GREEN_COLOR = 10, GREEN_COLOR_DARK = 2
};

struct hero
{
		int levelHelmet = 0;
		int levelArmor = 0;
		int levelBoots = 0;
		int levelShield = 0;
		int levelSword = 0;
		int levelManacles = 0;
		int Money = 500;
		int Life = 100;
		int Armor = 0;
		int Attack = 5;
		int positionOfShop = 7;
		int positionOfMenu = 7;
		int rowsCount = 6;
		int columnsCount = 55;

};
extern hero MainHero;



	const enum character { Life1=1, Armor1=10, Attack1=10};
	const enum nameItem {  LifePosion, helmet, armor, boots, shield, sword, manacles };
	const enum material { wood, bronze, iron, steel, orichalc, ebonite };
	const enum cost {  cost1=50, cost2=100, cost3=200, cost4=300, cost5=1000, cost6=10, cost7=99};
	struct item 
	{		
		nameItem is;
		cost gold;
		character of;
		material at;
	}; 

	extern item QWERTY[7];
	

//инициализация функций (праобразов функций)

void printMeasure();

void moveToMenuPointShop();
void userSelectionShop(int Cur);
void pointToMenuShop();
//**************
void Print( int rowsCount, int columnsCount, char *filename);
void Print( int rowsCount, int columnsCount, int positionOfMenu, char *filename);
//**************
void stand();
void moveToMenuPoint2();
void moveToMenuPoint();


void stand(int X_COORD, int Y_COORD);

void userSelection2(int Cur);
void userSelection(int Cur);

void pointToMenu2();
void pointToMenu();

void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, char*str);
void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, int Q, char*str);
void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, int Q);
