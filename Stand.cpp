#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h> 
#include "Menu.h"

using namespace std;

HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE); // ����� ������ ��� ������ ������� � �������

void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, int Q, char*str)
{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = 0;
	ci.dwSize = 100;
	SetConsoleCursorInfo(H, &ci); // ������ �������� ������

	COORD c;
	c.X = X_COORD; c.Y = Y_COORD;
	SetConsoleCursorPosition(H, c); //��������� �������
	SetConsoleTextAttribute(H, TEXT_COLOR); //��������� ����� ������
	cout << Q <<str<< "\n";
	
}

void stand(int X_COORD, int Y_COORD, int TEXT_COLOR,  char*str)
{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = 0;
	ci.dwSize = 100;
	SetConsoleCursorInfo(H, &ci); // ������ �������� ������

	COORD c;
	c.X = X_COORD; c.Y = Y_COORD;
	SetConsoleCursorPosition(H, c); //��������� �������
	SetConsoleTextAttribute(H, TEXT_COLOR); //��������� ����� ������
	cout << str << "\n";
	
}


void stand(int X_COORD, int Y_COORD)//������ system cls, ������������� ������ � ������

{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible =0;
	ci.dwSize =100;
	SetConsoleCursorInfo(H, &ci); // ������ �������� ������
	COORD c;
	c.X = X_COORD; c.Y = Y_COORD;
	SetConsoleCursorPosition(H, c); //��������� �������

}