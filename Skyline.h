#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdio> 
#include <string>
#include <Windows.h>
#include "Menu.h"
#include "Definitions.h"

using namespace std;

void read();
void itemSort(int **a, int minstr, int maxstr, int kind);
void load(int coins, int hp, int choice);
void new_game(int coins, int hp, int choice);
void printInterBlue(int coins, int hp);//вывод синей линии интерфейса(количество монет и очков здоровь€)
void printInterGreen();//вывод зелЄной линии интерфейса(кнопки магазина и инвентар€)

/*
функции, необходимые дл€ мини-игр
*/
void skeletonKey(int* res);//мини-игра "ќтмычка"
void showMap(char** map, int y, int x/*, int coins, int hp*/);//показывает карту
void moveSK(char** map, int fix_y, int x, int y, int* res);//передвигает отмычку (часть мини-игры "ќтмычка")
int ifUseSK(char** map, int y, int x);//если совершена попытка открыть замок, эта функци€ определ€ет результат попытки 
                                      //(часть мини-игры "ќтмычка")
void inputResult(int a, int* res);//выводит результат попытки

const enum Direction { left = 1, top, right, lower };//направление входа в €чейку микросхемы
struct cell
{
	Direction in;//точка входа в €чейку
	Direction out;//точка выхода из €чейки
	char map[4][4];//изображение €чейки
};