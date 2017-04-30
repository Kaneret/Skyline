#include "Loading.h"


//Путь к файлу сохранения/загрузки
char *SaveGameFileName = "Save1.txt"; 
//Путь к файлу создания новой игры
char *NewGameFileName = "New.txt";
//Путь к файлу создания новой игры
char *ItemsFileName = "Items1.txt";



void load_massive(int coins, int hp, int choice) // это будет функция load_massive, для проверки это временный main
{
	// установка русского языка для ввода-вывода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//int coins, int hp, int choice;
	// массив строк
	string Item[9];
	// открытие файла для чтения
	ifstream in3(ItemsFileName);
	// проверка на наличие файла
	if (!in3)
	{
		// если файл не существует - выводится сообщение об ошибке
		cout << "Ошибка! Файл не найден" << endl;
	}
	else
	{
		// чтение значений переменных из файла и запись их в массив
		for (int i = 0; i < 9; i++)
		{
			in3 >>Item[i];

		}
		// закрытие файла
		in3.close();
	}
	// перевод значений в строках в числа целого типа
	coins = atoi(Item[0].c_str());
	hp = atoi(Item[1].c_str());
	choice = atoi(Item[2].c_str());

	// вывод значений переменных на экран
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << "		" << "Choice: "<< choice<<endl << endl;
	// вывод предметов инвентаря на экран
	for (int i = 3; i < 9; i++)
		{
		cout << Item[i] << endl;
		}
	system("pause");
}


// функция сохранения количества монет, здоровья, выборов игрока, инвентаря
void save(int* coins, int* hp, int* choice)
{
	// открытие файла для записи
	ofstream out0(SaveGameFileName);
	// проверка на наличие файла
	if (!out0)
	{
		// если файл не существует - выводится сообщение об ошибке
		cout << "Ошибка! Файл не найден" << endl;
	}
	else
	{
		// запись значений переменных в файл
		out0 << coins << endl << hp << endl << choice;
		// закрытие файла
		out0.close();
	}
}


// функция загрузки количества монет, здоровья, выборов игрока
/*void load(int coins, int hp, int choice)
{
	// открытие файла для чтения
	ifstream in1(SaveGameFileName);
	// проверка на наличие файла
	if (!in1)
	{
		// если файл не существует - выводится сообщение об ошибке
		cout << "Ошибка! Файл не найден" << endl;
	}
	else
	{
		// чтение значений переменных из файла
		in1 >> coins >> hp >> choice;
		// закрытие файла
		in1.close();
	}
	// вывод значений переменных на экран
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/


// функция создания новой игры
void new_game(int coins, int hp, int choice)
{
	// открытие файла для чтения
	ifstream in0(NewGameFileName);
	// проверка на наличие файла
	if (!in0)
	{
		// если файл не существует - выводится сообщение об ошибке
		cout << "Ошибка! Файл не найден" << endl;
	}
	else
	{
		// чтение значений переменных из файла
		in0 >> coins >> hp >> choice;
		// закрытие файла
		in0.close();
	}
	// вывод значений переменных на экран
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}


/*
// главный алгоритм (будет перемещён в др место)
int main()
{
	int choice;	int hp; int coins;
	// установка русского языка для ввода-вывода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// чтение варианта
	int variant;
	do
	{
		// вызов меню
		variant = show_menu(menu, 3);
		switch (variant)
		{
			// показывает содержимое инвентаря
		case 1:
			cout << "\n" << "Содержимое:" << "\n" <<endl;
			show_items();
			break;
			// производит поиск по инвентарю
		case 2:
			cout  << endl;
			sort_items();
			break;
			// удаляет предметы из инвентаря
		case 3:
			cout << "Выберите предмет, который хотите выбросить:  " << endl;
			//show_items();
			//cout << endl;
			//drop_item();
			load_massive(&coins, &hp, &choice);
			break;
			// сообщает об ошибке
		default:
			cerr << "Вы выбрали неверный вариант" << endl;
		}
		// при выборе 0 происходит выход
	} while (variant != 0);
	// возврат значения
	return 0;
}


*/
