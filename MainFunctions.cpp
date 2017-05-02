#include "Includes.h"
#include "Loading.h"
#include "Inventory.h"



// ������� ��������
int main()
{
	// ������� ����������� ����������, �������� ���������� � ������
	Player* player = new Player;
	// ������� ��� ���� � ���������
	item_menu menu[] =
	{
		{ 1, "����������� ����������" },
		{ 2, "�������������" },
	};
	// ��������� �������� ����� ��� �����-������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	load_massive(player);
	// ������ ��������
	int variant;
	do
	{
		// ����� ����
		variant = show_menu(menu, 2);
		switch (variant)
		{
			// ���������� ���������� ���������
		case 1:
			cout << "\n" << "����������:" << "\n" << endl;
			show_items(player);
			break;
			// ���������� ����� �� ���������
		case 2:
			cout << endl;
			find_items(player);
			break;
			// �������� �� ������
		default:
			cerr << "�� ������� �������� �������" << endl;
		}
		// ��� ������ 0 ���������� �����
	} while (variant != 0);

	// ����������� ������, ������� ��� ���������� ������
	delete player;

	// ������� ��������
	return 0;
}

