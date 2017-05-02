#pragma once

#include "Includes.h"
#include "Inventory.h"

// Структура хранит в себе информацию о игроке
struct Player
{
	int coins;
	int hp;
	int choice;
	string items[9];
};

// функция загрузки количества монет, здоровья, выборов игрока (основана на массиве)
void load_massive(Player* player);

// функция сохранения количества монет, здоровья, выборов игрока
void save(Player* player);

// функция создания новой игры
void new_game(Player* player);

// функция показа предметов, которые уже есть в инвентаре
void show_items(Player* player);

// функция псевдосортировки (поиск по слову)
void find_items(Player* player);