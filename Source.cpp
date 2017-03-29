#include "Header.h"
#include "Sourse.h"
const int N = 256; //����������� ������ ������ (read)

void itemSort(int **a, int minstr, int maxstr, int kind)
{
	int column = kind;                        //��������� �������
	int b = a[(minstr + maxstr) / 2][column]; //������� �������(�� �������)
	int l_min = minstr;                       //����������� ������ ������
	int l_max = maxstr;                       //������������ ������ ������

	//���������� �� 2 ����������
	while (l_min <= l_max)                    
	{
		while (a[l_min][column] < b) l_min++;
		while (a[l_max][column] > b) l_max--;
		if (l_min <= l_max)
		{
			swap(a[l_min][column], a[l_max][column]);
			l_min++;
			l_max--;
		}
	}

	if (l_min < maxstr) itemSort(a, l_min, maxstr, kind);//������ �� b
	if (minstr < l_max) itemSort(a, minstr, l_max, kind);//����� �� b
}

//������
void graph()
{}
void inventory()
{}
void search()
{}
void magazine()
{}
//������ END

void read()
{
	setlocale(LC_ALL, ".1251");
	char S[N] = { "" }; //� S ����� ����������� ������ 
	ifstream in1("Text.txt"); //������� ���� ��� ������ 
	while (!in1.eof()) //����� ������ ���������� ���� �� ������ �� ����� ����� 
	{
		in1.getline(S, N); //���������� ���������� ���������� � S 
		cout << S << endl; //����� ��������� ������ �� ����� 
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
	out << coins << endl << hp;////////////// � 'choice' ����? 
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
