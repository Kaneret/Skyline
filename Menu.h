#pragma once//используется для избежания бесконечной рекурсии
//подключение директив предпроцессора(библиотек)
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h> 

using namespace std;

enum Colors //перечисление константных переменных
{
	GREEN_COLOR = 10, GREEN_COLOR_DARK = 2, LEVEL1 = 13, LEVEL2 = 15, LEVEL3 = 17, LEVEL4 = 19, LEVEL5 = 21
};


enum PlayerChoice //перечисление константных переменных
{
	StartGame = 49,
	Instruction = 50,
	HighScores = 51,
	Exit = 52
};
void printMeasure();
void printСharacteristic();
void printText(int X_COORD, int Y_COORD, int TEXT_COLOR, int Q);
//инициализация функций (праобразов функций)
void rewriterCaseDownPointShop(int a);
void rewriterCaseUpPointShop(int a);
void moveToMenuPointShop();
void userSelectionShop(int Cur);
void pointToMenuShop();
void printShopHeader();

void moveToMenuPoint2();
void moveToMenuPoint();

void userSelection2(int Cur);
void userSelection(int Cur);
void rewriterCaseUpPoint3(int a);
void rewriterCaseUpPoint2(int a);
void rewriterCaseUpPoint(int a);
void rewriterCaseDownPoint3(int a);
void rewriterCaseDownPoint2(int a);
void rewriterCaseDownPoint(int a);
void pointToMenu3();
void pointToMenu2();
void pointToMenu();
void hat();
void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, char*str);

