#include "Loading.h"


void load_massive(Player* player)
{
	// ������ �����
	//string Item[9];
	// �������� ����� ��� ������
	ifstream in3(SaveGameFileName);
	// �������� �� ������� �����
	if (!in3)
	{
		// ���� ���� �� ���������� - ��������� ��������� �� ������
		cout << "������! ���� �� ������" << endl;
	}
	else
	{
		// ������ �������� ���������� �� ����� � ������ �� � ������
		for (int i = 0; i < 9; i++)
		{
			in3 >> player->items[i];

		}
		// �������� �����
		in3.close();
	}
	// ������� �������� � ������� � ����� ������ ����
	player->coins = atoi(player->items[0].c_str());
	player->hp = atoi(player->items[1].c_str());
	player->choice = atoi(player->items[2].c_str());

	// ����� �������� ���������� �� �����
	cout << endl << "COINS: " << player->coins << "		" << "HP: " << player->hp << "		" << "Choice: "<< player->choice 
	<<endl << endl;
	system("pause");
}



// ������� ���������� ���������� �����, ��������, ������� ������, ���������
void save(Player* player)
{
	// �������� ����� ��� ������
	ofstream out0(SaveGameFileName);
	// �������� �� ������� �����
	if (!out0)
	{
		// ���� ���� �� ���������� - ��������� ��������� �� ������
		cout << "������! ���� �� ������" << endl;
	}
	else
	{
		// ������ �������� ���������� � ����
		for (int i = 0; i < 9; i++)
		{
			out0 << player->items[i]<< endl;
		}
		// �������� �����
		out0.close();
	}
}


// ������� �������� ����� ����
void new_game(Player* player)
{
	// �������� ����� ��� ������
	ifstream in0(NewGameFileName);
	// �������� �� ������� �����
	if (!in0)
	{
		// ���� ���� �� ���������� - ��������� ��������� �� ������
		cout << "������! ���� �� ������" << endl;
	}
	else
	{
		// ������ �������� ���������� �� �����
		for (int i = 0; i < 9; i++)
		{
			in0 >> player->items[i];
		}
		// �������� �����
		in0.close();
	}
	// ����� �������� ���������� �� �����
	cout << endl << "COINS: " << player->coins << "		" << "HP: " << player->hp << endl << endl;
	system("pause");
}
