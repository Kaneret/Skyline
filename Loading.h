#pragma once
#include "Includes.h"


// функция сохранения количества монет, здоровья, выборов игрока
void save(int* coins, int* hp, int* choice);
// функция загрузки количества монет, здоровья, выборов игрока
void load(int coins, int hp, int choice);
// функция создания новой игры
void new_game(int coins, int hp, int choice);

void load_massive(int coins, int hp, int choice);

// главный алгоритм (временно тут)
//int main();
