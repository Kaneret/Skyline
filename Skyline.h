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
void printInterBlue(int coins, int hp);//����� ����� ����� ����������(���������� ����� � ����� ��������)
void printInterGreen();//����� ������ ����� ����������(������ �������� � ���������)

/*
�������, ����������� ��� ����-���
*/
void skeletonKey(int* res);//����-���� "�������"
void showMap(char** map, int y, int x/*, int coins, int hp*/);//���������� �����
void moveSK(char** map, int fix_y, int x, int y, int* res);//����������� ������� (����� ����-���� "�������")
int ifUseSK(char** map, int y, int x);//���� ��������� ������� ������� �����, ��� ������� ���������� ��������� ������� 
                                      //(����� ����-���� "�������")
void inputResult(int a, int* res);//������� ��������� �������

const enum Direction { left = 1, top, right, lower };//����������� ����� � ������ ����������
struct cell
{
	Direction in;//����� ����� � ������
	Direction out;//����� ������ �� ������
	char map[4][4];//����������� ������
};