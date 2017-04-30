#pragma once
#include "Includes.h"

// функция, показывающая меню
//int show_menu(const item_menu *m, int max_item);

// функция показа предметов, которые уже есть в инвентаре
int show_items();

// функция псевдосортировки (поиск по слову)
int sort_items();

// функция удаления предмета из инвентаря (не дописана)
void drop_item();
