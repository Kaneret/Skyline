#include "Header.h"
#define M 100
#define N 100

void main()
{
	/*system("CLS");
	createFile();//Функция записывает строки в файл
	readFile(); //Функция читает строки из файла и выводит их на экран*/

	//"ключик"
	COORD coord = { 0,0 };                        //координаты курсора в консоли;
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);//получаем handle консоли;

	char** map = new char*[M];
	for (int i = 0; i < M; i++)
		map[i] = new char[N];
	map[][] = { '|', '|', '|', '|', '|\n',
				'|', '|', '|', '|', '|' };


	SetConsoleCursorPosition(hout, coord);//устанавливаем курсор по координатам 
										  //(устраняем "мигание" экрана при обновлении карты)


	for (int i = 0; i < M; i++)	delete[]map[i];
	delete[]map;
	//"ключик" end...
}