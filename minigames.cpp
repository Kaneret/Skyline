#include "Header.h"
#include "minigames.h"
#define M 100
#define N 100

/*
**������� "�������" (����� "�������" ��� "������")
**
*******************************************
**��� ��������� �������� �� ������� ������
*******************************************
*/
void skeletonKey()
{
	COORD coord = { 0,0 };                        //���������� ������� � �������;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);//�������� handle �������;

	char** map = new char*[M];
	for (int i = 0; i < M; i++)
		map[i] = new char[N];



	SetConsoleCursorPosition(hout, coord);//������������� ������ �� ����������� 
										  //(��������� "�������" ������ ��� ���������� �����)


	for (int i = 0; i < M; i++)	delete[]map[i];
	delete[]map;
}

// ������� ������ ������� ����� � �������
void showMapInMinigame(char** map, int y, int x)
{
	for (int i = 0; i < y; i++)//������� �� ���������
	{
		for (int j = 1; j < x; j++)//������� �� �����������
			cout << map[i][j];
	}
}