#include "Loading.h"


void load_massive(Player* player)
{
	// массив строк
	//string Item[9];
	// открытие файла для чтения
	ifstream in3(SaveGameFileName);
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
			in3 >> player->items[i];

		}
		// закрытие файла
		in3.close();
	}
	// перевод значений в строках в числа целого типа
	player->coins = atoi(player->items[0].c_str());
	player->hp = atoi(player->items[1].c_str());
	player->choice = atoi(player->items[2].c_str());

	// вывод значений переменных на экран
	cout << endl << "COINS: " << player->coins << "		" << "HP: " << player->hp << "		" << "Choice: "<< player->choice 
	<<endl << endl;
	system("pause");
}



// функция сохранения количества монет, здоровья, выборов игрока, инвентаря
void save(Player* player)
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
		for (int i = 0; i < 9; i++)
		{
			out0 << player->items[i]<< endl;
		}
		// закрытие файла
		out0.close();
	}
}


// функция создания новой игры
void new_game(Player* player)
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
		for (int i = 0; i < 9; i++)
		{
			in0 >> player->items[i];
		}
		// закрытие файла
		in0.close();
	}
	// вывод значений переменных на экран
	cout << endl << "COINS: " << player->coins << "		" << "HP: " << player->hp << endl << endl;
	system("pause");
}
