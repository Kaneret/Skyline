#include "Header.h"
#include "Sourse.h"



void quickSort(int *a, int min, int max) {
	int b = a[(min + max) / 2];//������� �������(�� �������)
	int l_min = min;
	int l_max = max;

	while (l_min <= l_max) //���������� �� 2 ����������
	{
		while (a[l_min] < b) l_min++;
		while (a[l_max] > b) l_max--;
		if (l_min <= l_max) 
		{
			swap(a[l_min], a[l_max]);
			l_min++;
			l_max--;
		}
	}
	if (l_min < max) quickSort(a, l_min, max);//������ �� �
	if (min < l_max) quickSort(a, min, l_max);//����� �� �
}

void graph()
{}

void inventory()
{}

void search()
{}

void magazine()
{}

const int N = 256; //����������� ������ ������ 

void read()
{
	setlocale(LC_ALL, ".1251");
	char S[N] = { "" }; //� S ����� ����������� ������ 
	ifstream in1("Text.txt"); //������� ���� ��� ������ 
	while (!in1.eof()) //����� ������ ���������� ���� �� ������ �� ����� ����� 
	{
		in1.getline(S, N); //���������� ���������� ���������� � S 
		cout � S � endl; //����� ��������� ������ �� ����� 

	}
	in1.close(); //������� �������� ���� 
	system("pause");
}

void save(int coins, int hp, int choice)
{
	coins = 50; // ����� ��� ��� ��������, � ���� �������� ����� ������������� � �� ������
	hp = 2;
	choice = 1;
	ofstream out("Save1.txt");
	out << coins << endl << hp;
	out.close();
}

void load(int coins, int hp, int choice)
{
	ifstream in("Save1.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}

void new_game(int coins, int hp, int choice)
{
	ifstream in("Save.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}


// ������� ������ ������� ����� � �������
void showMap(char** map, int x, int y)
{
	for (int i = 0; i < y; i++)//������� �� ���������
	{
		for (int j = 1; j < x; j++)//������� �� �����������
			cout << map[i][j];
	}
}