#pragma once

#include "Includes.h"
#include "Loading.h"

// ��������� ��� ����������� ���� ���������
struct item_menu
{
	// ����������, ������������ ����� ��������
	int action;
	// ����������, ������������ �����
	const char *text;
};


// �������, ������������ ����
int show_menu(const item_menu *m, int max_item);

