#include "Header.h"
#define M 100
#define N 100

void main()
{
	/*system("CLS");
	createFile();//������� ���������� ������ � ����
	readFile(); //������� ������ ������ �� ����� � ������� �� �� �����*/

	//"������"
	COORD coord = { 0,0 };                        //���������� ������� � �������;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);//�������� handle �������;

	char** map = new char*[M];
	for (int i = 0; i < M; i++)
		map[i] = new char[N];
	map[][] = { '|', '|', '|', '|', '|\n',
				'|', '|', '|', '|', '|' };


	SetConsoleCursorPosition(hout, coord);//������������� ������ �� ����������� 
										  //(��������� "�������" ������ ��� ���������� �����)


	for (int i = 0; i < M; i++)	delete[]map[i];
	delete[]map;
	//"������" end...
}