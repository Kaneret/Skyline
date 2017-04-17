#pragma once//используется для избежания бесконечной рекурсии

//подключение директив предпроцессора(библиотек)
#include "Menu.h"
#include "Definitions.h"


using namespace std;

//enum Глава //перечисление константных переменных
//{
//Глава1 = 13, Глава2 = 15, Глава3 = 17, Глава4 = 19, Глава5 = 21
//};


HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE); // номер потока для буфера консоли в системе

void stand(int X_COORD, int Y_COORD, int TEXT_COLOR, char*str)
{
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = 0;
	ci.dwSize = 100;
	SetConsoleCursorInfo(H, &ci); // убрать мигающий курсор
	setlocale(LC_ALL, "RUS");//поддержка кодировки русского языка
	COORD c;
	c.X = X_COORD; c.Y = Y_COORD;
	SetConsoleCursorPosition(H, c); //установка курсора
	SetConsoleTextAttribute(H, TEXT_COLOR); //установка цвета текста
	cout << str << "\n";
	//printRecords(Y_COORD,TEXT_COLOR, str); //вывод рекордов
	
}



void hat()
{
	const int rowsCount = 6;//колличество сиволов по ширине
	const int columnsCount = 55;//колличество сиволов по длине
	const unsigned char ГлаваData[rowsCount][columnsCount + 1] =
	{
		//заполнение массива-шапки
		"                                                    ",
		"        ****  *  *  *   *  *     ***  *    *  ****  ",
		"        *     * *    * *   *      *   * *  *  *     ",
		"        ****  **      *    *      *   *  * *  ****  ",
		"           *  * *     *    *      *   *   **  *     ",
		"        ****  *  *    *    ****  ***  *    *  ****  ",

	};
	cout << "\t";// табуляция
	for (int r = 0; r <rowsCount; r++)//вывод массива типа char(шапки нашего меню) двойным циклом(по одному символу)
	{
		for (int c = 0; c < columnsCount; c++)
		{
			
			cout << ГлаваData[r][c];// вывод текущего символа на экран
		}
		cout<<"\n\t";// отступ, табуляция

	}

}

void pointToMenu()
{// подключение функции вывода шапки

	hat();
	stand(30, 9, GREEN_COLOR, "Начать игру"); // начальный вывод пунктов на экран
	stand(30, 11, GREEN_COLOR_DARK, "Магазин");
	stand(30, 13, GREEN_COLOR_DARK, "Выход");
}
void pointToMenu2()
{
	//system("color 3F");
	hat();// подключение функции вывода шапки
	stand(30, 9, GREEN_COLOR, "Инструкция");// начальный вывод пунктов на экран
	stand(30, 11, GREEN_COLOR_DARK, "Сохранения");
	stand(30, 13, GREEN_COLOR_DARK, "Глава 1");
	stand(30, 15, GREEN_COLOR_DARK, "Глава 2");
	stand(30, 17, GREEN_COLOR_DARK, "Глава 3");
	stand(30, 19, GREEN_COLOR_DARK, "Глава 4");
	stand(30, 21, GREEN_COLOR_DARK, "Глава 5");
	stand(30, 23, GREEN_COLOR_DARK, "Назад");
}
void pointToMenu3()
{
	//system("color 3F");
	hat();// подключение функции вывода шапки
	stand(30, 9, GREEN_COLOR, "Search");// начальный вывод пунктов на экран
	stand(30, 11, GREEN_COLOR_DARK, "Show all records");
	stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
	stand(30, 15, GREEN_COLOR_DARK, "Назад");

}


void rewriterCaseDownPoint(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "Начать игру");// смена цвета, двух действующих пунктов меню, первого слайда раскадровки, при нажатии клавиши вниз
		stand(30, 11, GREEN_COLOR, "Магазин");
		break;
	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "Магазин");
		stand(30, 13, GREEN_COLOR, "Выход");
		break;
	}

}
void rewriterCaseDownPoint2(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "Инструкция");// смена цвета, двух действующих пунктов меню, второго слайда раскадровки, при нажатии клавиши вниз
		stand(30, 11, GREEN_COLOR, "Сохранения");
		
		break;

	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "Сохранения");
		stand(30, 13, GREEN_COLOR, "Глава 1");

		
		
		
		break;

	case 4:
		stand(30, 13, GREEN_COLOR_DARK, "Глава 1");
		stand(30, 15, GREEN_COLOR, "Глава 2");

		
		
		break;

	case 5:
		stand(30, 15, GREEN_COLOR_DARK, "Глава 2");
		stand(30, 17, GREEN_COLOR, "Глава 3");


		
		break;

	case 6:
		stand(30, 17, GREEN_COLOR_DARK, "Глава 3");
		stand(30, 19, GREEN_COLOR, "Глава 4");


		
		break;

	case 7:
		stand(30, 19, GREEN_COLOR_DARK, "Глава 4");
		stand(30, 21, GREEN_COLOR, "Глава 5");


		
		break;
	case 8:
		stand(30, 21, GREEN_COLOR_DARK, "Глава 5");
		stand(30, 23, GREEN_COLOR, "Назад");
	
		
	
		break;
	}

}
void rewriterCaseDownPoint3(int a)
{
	switch (a)
	{
	case 2:
		stand(30, 9, GREEN_COLOR_DARK, "Search");// смена цвета, двух действующих пунктов меню, третьего слайда раскадровки, при нажатии клавиши вниз
		stand(30, 11, GREEN_COLOR, "Show all records");
		break;
	case 3:
		stand(30, 11, GREEN_COLOR_DARK, "Show all records");
		stand(30, 13, GREEN_COLOR, "Show 10 records");
		break;
	case 4:
		stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
		stand(30, 15, GREEN_COLOR, "Назад");
		break;
	}

}


void rewriterCaseUpPoint(int a)
{
	switch (a)
	{
		
	case 1:
		stand(30, 9, GREEN_COLOR, "Начать игру");// смена цвета, двух действующих пунктов меню, первого слайда раскадровки, при нажатии клавиши вверх
		stand(30, 11, GREEN_COLOR_DARK, "Магазин");
		break;
	case 2:
		stand(30, 11, GREEN_COLOR, "Магазин");
		stand(30, 13, GREEN_COLOR_DARK, "Выход");
		break;
	case 3:
		stand(30, 13, GREEN_COLOR, "Выход");
		break;
	}

}
void rewriterCaseUpPoint2(int a)
{
	switch (a)
	{

	case 1:
		stand(30, 9, GREEN_COLOR, "Инструкция");// смена цвета, двух действующих пунктов меню, второго слайда раскадровки, при нажатии клавиши вверх
		stand(30, 11, GREEN_COLOR_DARK, "Сохранения");

	

		break;
	case 2:
	
		stand(30, 11, GREEN_COLOR, "Сохранения");
		stand(30, 13, GREEN_COLOR_DARK, "Глава 1");


		break;

	case 3:
		stand(30, 13, GREEN_COLOR, "Глава 1");
		stand(30, 15, GREEN_COLOR_DARK, "Глава 2");


		


		break;

	case 4:
		stand(30, 15, GREEN_COLOR, "Глава 2");
		stand(30, 17, GREEN_COLOR_DARK, "Глава 3");



	

	

		break;

	case 5:
		stand(30, 17, GREEN_COLOR, "Глава 3");
		stand(30, 19, GREEN_COLOR_DARK, "Глава 4");



	
		break;

	case 6:
		stand(30, 19, GREEN_COLOR, "Глава 4");
		stand(30, 21, GREEN_COLOR_DARK, "Глава 5");
	



		break;
	case 7:
		stand(30, 21, GREEN_COLOR, "Глава 5");
		stand(30, 23, GREEN_COLOR_DARK, "Назад");
		break;


	}
}
void rewriterCaseUpPoint3(int a)
{
	switch (a)
	{

	case 1:
		stand(30, 9, GREEN_COLOR, "Search");// смена цвета, двух действующих пунктов меню, третьего слайда раскадровки, при нажатии клавиши вверх
		stand(30, 11, GREEN_COLOR_DARK, "Show all records");
		break;
	case 2:
		stand(30, 11, GREEN_COLOR, "Show all records");
		stand(30, 13, GREEN_COLOR_DARK, "Show 10 records");
		break;
	case 3:
		stand(30, 13, GREEN_COLOR, "Show 10 records");
		stand(30, 15, GREEN_COLOR_DARK, "Назад");
		break;
	case 4:
		stand(30, 15, GREEN_COLOR, "Назад");
		
		break;
		break;
	}

}


// присоединять свои функции только в функциях userSelection2 и userSelection3, вместо соответствующих текстовых сообщений
void userSelection(int Cur)
{
	system("cls");//очистка экрана
	switch (Cur)
	{
	
	case 1:pointToMenu2();//вывод пунктов (Начать игру)
		moveToMenuPoint2();//запуск цикла перемешения по меню, а так же его перерисовки
		break;
	case 2:pointToMenuShop();//вывод пунктов (Records)
		moveToMenuPointShop();//запуск цикла перемешения по меню, а так же его перерисовки
		break;
	case 3:exit(0);
		
		break;
	}
}                                                                               
void userSelection2(int Cur)
{
	system("cls");//очистка экрана
	switch (Cur)
	{

	case 1: cout << "Инструкция";// возврат в меню после вывода тексов рекорда
		cout << "Для возврата в меню нажмите любую клавишу";
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		
		break;
	case 2:cout << "Сохранения";// заглушки (вывод названия соответсвующего перехода по меню)


		_getch();
		break;
	case 3:cout << "Глава 1";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 4:cout << "Глава 2";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 5:cout << "Глава 3";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 6:cout << "Глава 4";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 7:cout << "Глава 5";// заглушки (вывод названия соответсвующего перехода по меню)
		_getch();// ожидание нажатия клавиши
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	case 8:
		pointToMenu();//в случае нажатия клавиши назад, новая перерисовка
		moveToMenuPoint();// вызов цикла перемешения
		system("cls");// очитска экрана
		pointToMenu2();// перерисовка пунктов
		moveToMenuPoint2();// новый вызов цикла перемещения
		break;
	}
}


void moveToMenuPoint()
{
	bool f = true; //логическая переменная, отвечающая за своевременный выход из цикла
	int position = 1;//условная установка курсора на первый пункт
	
	while (f == true){//цикл по логич переменной
int code = _getch();//оствлеживание нажатой клавиши
		switch (code)//ее индефикация
		{
		case DOWN_ARROW:
			if (position<3)//избежания выхода за границы
			position++;//переменная для отслеживания перемещения(подсчет номер пункта меню) увеличение на 1 при единожды выполненном условии
			rewriterCaseDownPoint(position);//вызов перерисовки на пункт вниз
			
			break;
		case UP_ARROW:
			if (position>1)//избежания выхода за границы

			position--;//переменная для отслеживания перемещения(подсчет номер пункта меню) уменьшение на 1 при единожды выполненном условии
			rewriterCaseUpPoint(position);//вызов перерисовки на пункт вверх
			
			break;
		case ENTER://выбор пункта, наведенного курсора

			userSelection(position);// передача параметра позиции в функцию выбора действия, заранее отведенного для пункта меню
			f = false;//прерывание цикла, выход из него
			break;
		}
	}
}
void moveToMenuPoint2()
{
	bool f = true;
	int position = 1;

	while (f == true){
		int code = _getch();
		switch (code)
		{
		case DOWN_ARROW:
			if (position<8)
				position++;
			rewriterCaseDownPoint2(position);

			break;
		case UP_ARROW:
			if (position>1)

				position--;
			rewriterCaseUpPoint2(position);

			break;
		case ENTER:
			userSelection2(position);
			f = false;

			break;
		}
	}
}



//////////////////////////////////////////////////////////// вызывать в  main только функции: pointToMenu(); и moveToMenuPoint();


