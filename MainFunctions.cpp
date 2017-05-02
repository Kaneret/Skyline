#include "Includes.h"
#include "Loading.h"
#include "Inventory.h"



// главный алгоритм
int main()
{
	// Создаем структурную переменную, хранящую информацию о игроке
	Player* player = new Player;
	// внешний вид меню в инвентаре
	item_menu menu[] =
	{
		{ 1, "просмотреть содержимое" },
		{ 2, "отсортировать" },
	};
	// установка русского языка для ввода-вывода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	load_massive(player);
	// чтение варианта
	int variant;
	do
	{
		// вызов меню
		variant = show_menu(menu, 2);
		switch (variant)
		{
			// показывает содержимое инвентаря
		case 1:
			cout << "\n" << "Содержимое:" << "\n" << endl;
			show_items(player);
			break;
			// производит поиск по инвентарю
		case 2:
			cout << endl;
			find_items(player);
			break;
			// сообщает об ошибке
		default:
			cerr << "Вы выбрали неверный вариант" << endl;
		}
		// при выборе 0 происходит выход
	} while (variant != 0);

	// Освобождаем память, занятую под переменную игрока
	delete player;

	// возврат значения
	return 0;
}

