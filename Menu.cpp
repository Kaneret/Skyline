#pragma once//используется для избежания бесконечной рекурсии

#include "Menu.h"//подключение директив предпроцессора(библиотек)
#include "Definitions.h"

using namespace std;
item QWERTY[7] = { { LifePosion,cost1,Life1 },{ helmet ,cost2,Armor1 },{ armor,cost3,Armor1 },
{ boots,cost4,Armor1 },{ manacles,cost5, Armor1 },{ shield,cost6,Armor1 },{ sword,cost7,Attack1 } };


char file2[6][56];

char file4[4][11];int c = 4;int d = 11;// массив отобрадения пунктов главного меню
char file5[8][11]; int q = 9; int w = 11;// массив отобрадения пунктов главного меню



void pointToMenu()
{
	MainHero.positionOfMenu =7;

	Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
	Print(c, d, MainHero.positionOfMenu, "MainMenu.txt");
	
}
void pointToMenu2()
{
	MainHero.positionOfMenu = 7;

	Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");// подключение функции вывода шапки
	Print( q, w, MainHero.positionOfMenu, "StartGame.txt");
	
}

// присоединять свои функции только в функциях userSelection2 и userSelection3, вместо соответствующих текстовых сообщений
void userSelection(int Cur)
{
	system("cls");//очистка экрана
	switch (Cur)
	{
	
	case 7:pointToMenu2();//вывод пунктов (Начать игру)
		moveToMenuPoint2();//запуск цикла перемешения по меню, а так же его перерисовки
		break;
	case 8:pointToMenuShop();//вывод пунктов (Records)
		moveToMenuPointShop();//запуск цикла перемешения по меню, а так же его перерисовки
		break;
	case 9:		
		break;
	}
}                                                                               
void userSelection2(int Cur)
{
	system("cls");//очистка экрана
	switch (Cur)
	{

	case 7: cout << "Инструкция";// возврат в меню после вывода тексов рекорда
		cout << "Для возврата в меню нажмите любую клавишу";
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		
		break;
	case 8:cout << "Сохранения";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения

		_getch();
		break;
	case 9:cout << "Глава 1";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши	
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 10:cout << "Глава 2";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 11:cout << "Глава 3";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 12:cout << "Глава 4";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 13:cout << "Глава 5";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 14:
		pointToMenu();//в случае нажатия клавиши назад, новая перерисовка
		moveToMenuPoint();// вызов цикла перемешения
		break;
	}
}

void moveToMenuPoint()
{
	bool f = true; //логическая переменная, отвечающая за своевременный выход из цикла
		
	while (f == true){//цикл по логич переменной
		int code = _getch();//оствлеживание нажатой клавиши
		switch (code)//ее индефикация
		{
		case DOWN_ARROW:
			if (MainHero.positionOfMenu<9)//избежания выхода за границы
				MainHero.positionOfMenu++;//переменная для отслеживания перемещения(подсчет номер пункта меню) увеличение на 1 при единожды выполненном условии
			stand(0, 0);

			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( c, d, MainHero.positionOfMenu, "MainMenu.txt");
			break;
		case UP_ARROW:
			if (MainHero.positionOfMenu>7)//избежания выхода за границы

				MainHero.positionOfMenu--;//переменная для отслеживания перемещения(подсчет номер пункта меню) уменьшение на 1 при единожды выполненном условии
			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( c, d, MainHero.positionOfMenu, "MainMenu.txt");
			break;
		case ENTER://выбор пункта, наведенного курсора

			userSelection(MainHero.positionOfMenu);// передача параметра позиции в функцию выбора действия, заранее отведенного для пункта меню
			f = false;//прерывание цикла, выход из него
			break;
		}
	}
}
void moveToMenuPoint2()
{
	bool f = true;
		

	while (f == true){
		int code = _getch();
		switch (code)
		{
		case DOWN_ARROW:
			if (MainHero.positionOfMenu<14)
				MainHero.positionOfMenu++;
			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print(q, w, MainHero.positionOfMenu, "StartGame.txt");
			

			break;
		case UP_ARROW:
			if (MainHero.positionOfMenu>7)
				MainHero.positionOfMenu--;

			stand(0, 0);
			Print(MainHero.rowsCount, MainHero.columnsCount, "Skyline.txt");
			Print( q, w, MainHero.positionOfMenu, "StartGame.txt");
		

			break;
		case ENTER:
			userSelection2(MainHero.positionOfMenu);
			f = false;

			break;
		}
	}
}

/*void main()
{
	
	setlocale(LC_ALL, "RUS");//поддержка кодировки русского языка
	pointToMenu();
	
	moveToMenuPoint();
}*/