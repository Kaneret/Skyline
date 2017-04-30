#include "Loading.h"


//���� � ����� ����������/��������
char *SaveGameFileName = "Save1.txt"; 
//���� � ����� �������� ����� ����
char *NewGameFileName = "New.txt";
//���� � ����� �������� ����� ����
char *ItemsFileName = "Items1.txt";



void load_massive(int coins, int hp, int choice) // ��� ����� ������� load_massive, ��� �������� ��� ��������� main
{
	// ��������� �������� ����� ��� �����-������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//int coins, int hp, int choice;
	// ������ �����
	string Item[9];
	// �������� ����� ��� ������
	ifstream in3(ItemsFileName);
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
			in3 >>Item[i];

		}
		// �������� �����
		in3.close();
	}
	// ������� �������� � ������� � ����� ������ ����
	coins = atoi(Item[0].c_str());
	hp = atoi(Item[1].c_str());
	choice = atoi(Item[2].c_str());

	// ����� �������� ���������� �� �����
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << "		" << "Choice: "<< choice<<endl << endl;
	// ����� ��������� ��������� �� �����
	for (int i = 3; i < 9; i++)
		{
		cout << Item[i] << endl;
		}
	system("pause");
}


// ������� ���������� ���������� �����, ��������, ������� ������, ���������
void save(int* coins, int* hp, int* choice)
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
		out0 << coins << endl << hp << endl << choice;
		// �������� �����
		out0.close();
	}
}


// ������� �������� ���������� �����, ��������, ������� ������
/*void load(int coins, int hp, int choice)
{
	// �������� ����� ��� ������
	ifstream in1(SaveGameFileName);
	// �������� �� ������� �����
	if (!in1)
	{
		// ���� ���� �� ���������� - ��������� ��������� �� ������
		cout << "������! ���� �� ������" << endl;
	}
	else
	{
		// ������ �������� ���������� �� �����
		in1 >> coins >> hp >> choice;
		// �������� �����
		in1.close();
	}
	// ����� �������� ���������� �� �����
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/


// ������� �������� ����� ����
void new_game(int coins, int hp, int choice)
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
		in0 >> coins >> hp >> choice;
		// �������� �����
		in0.close();
	}
	// ����� �������� ���������� �� �����
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}


/*
// ������� �������� (����� ��������� � �� �����)
int main()
{
	int choice;	int hp; int coins;
	// ��������� �������� ����� ��� �����-������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ������ ��������
	int variant;
	do
	{
		// ����� ����
		variant = show_menu(menu, 3);
		switch (variant)
		{
			// ���������� ���������� ���������
		case 1:
			cout << "\n" << "����������:" << "\n" <<endl;
			show_items();
			break;
			// ���������� ����� �� ���������
		case 2:
			cout  << endl;
			sort_items();
			break;
			// ������� �������� �� ���������
		case 3:
			cout << "�������� �������, ������� ������ ���������:  " << endl;
			//show_items();
			//cout << endl;
			//drop_item();
			load_massive(&coins, &hp, &choice);
			break;
			// �������� �� ������
		default:
			cerr << "�� ������� �������� �������" << endl;
		}
		// ��� ������ 0 ���������� �����
	} while (variant != 0);
	// ������� ��������
	return 0;
}


*/
