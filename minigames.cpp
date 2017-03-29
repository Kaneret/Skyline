#include "Header.h"
#include "minigames.h"
#define M 100
#define N 100

/*
**Мииигра "Отмычка" (ранее "Замочек" или "Ключик")
**
*******************************************
**еще предстоит доделать до рабочей версии
*******************************************
*/
void skeletonKey()
{
	COORD coord = { 0,0 };                        //координаты курсора в консоли;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);//получаем handle консоли;

	char** map = new char*[M];
	for (int i = 0; i < M; i++)
		map[i] = new char[N];



	SetConsoleCursorPosition(hout, coord);//устанавливаем курсор по координатам 
										  //(устраняем "мигание" экрана при обновлении карты)


	for (int i = 0; i < M; i++)	delete[]map[i];
	delete[]map;
}

// функция вывода игровой карты в консоль
void showMapInMinigame(char** map, int y, int x)
{
	for (int i = 0; i < y; i++)//перебор по вертикали
	{
		for (int j = 1; j < x; j++)//перебор по горизонтали
			cout << map[i][j];
	}
}