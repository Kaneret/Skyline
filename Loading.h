#pragma once

#include "Includes.h"
#include "Inventory.h"

// ��������� ������ � ���� ���������� � ������
struct Player
{
	int coins;
	int hp;
	int choice;
	string items[9];
};

// ������� �������� ���������� �����, ��������, ������� ������ (�������� �� �������)
void load_massive(Player* player);

// ������� ���������� ���������� �����, ��������, ������� ������
void save(Player* player);

// ������� �������� ����� ����
void new_game(Player* player);

// ������� ������ ���������, ������� ��� ���� � ���������
void show_items(Player* player);

// ������� ���������������� (����� �� �����)
void find_items(Player* player);