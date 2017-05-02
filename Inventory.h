#pragma once

#include "Includes.h"
#include "Loading.h"

// структура для вызываемого меню инвентаря
struct item_menu
{
	// переменная, запоминающая номер действия
	int action;
	// переменная, запоминающая текст
	const char *text;
};


// функция, показывающая меню
int show_menu(const item_menu *m, int max_item);

