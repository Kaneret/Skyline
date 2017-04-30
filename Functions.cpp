#include "Functions.h"

//��� ������ ���������� ����� ��������, �� ������ ��������� ����
//����� ����������� ����������: �� ���������������(1), �����(2), ���������(3) ��� ��������(4)
//�.�. �� ���� ��������� �������� kind, ������ 1, ���� 2, ���� 3
//min ���������� ����������� ������, ������� �� ����� 0
//� ����� - ������ ������� ���������� � �.�.
//max ���������� ������������ ������, ������� �� ����� ����� ������� - 1
//� ����� - ����� ������� ���������� � �.�.
void itemSortStructure(item *a, int min, int max, int kind)
{
	item b = a[(min + max) / 2];              //������� �������(�� �������)
	int s_min = min;                          //����������� ������ ������
	int s_max = max;                          //������������ ������ ������

	
	while (s_min <= s_max)                    //���������� �� 2 ����������
	{
		if (kind==1)                          //��������� �� ���������������
		{ 
			while (a[s_min].of < b.of) s_min++;
			while (a[s_max].of > b.of) s_max--;
		}
		else if (kind==2)                     //��������� �� ��������
		{
			while (a[s_min].is < b.is) s_min++;
			while (a[s_max].is > b.is) s_max--;
		}
		else if (kind == 3)                     //��������� �� ���������
		{
			while (a[s_min].at < b.at) s_min++;
			while (a[s_max].at > b.at) s_max--;
		}
		else                                  //��������� �� ���������
		{
			while (a[s_min].gold < b.gold) s_min++;
			while (a[s_max].gold > b.gold) s_max--;
		}
		if (s_min <= s_max)
		{
			swap(a[s_min], a[s_max]);         //������ �� �������
			s_min++;
			s_max--;
		}
	}

	if (s_min < max) itemSortStructure(a, s_min, max, kind);//������ �� b
	if (min < s_max) itemSortStructure(a, min, s_max, kind);//����� �� b
}

//���������� � ����� �� �����
const int N = 256; //����������� ������ ������ (read)
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

//����������
void save(int coins, int hp, int choice)
{
	coins = 50; // ����� ��� ��� ��������, � ���� �������� ����� ������������� � �� ������
	hp = 2;
	choice = 1;
	ofstream out("Save1.txt");
	out << coins << endl << hp;////////////// � 'choice' ����? 
	out.close();
}

//��������
/*void load(int coins, int hp, int choice)
{
	ifstream in("Save1.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/

//�������� ���������� ��� ����� ����
/*void new_game(int coins, int hp, int choice)
{
	ifstream in("Save.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/

//����� ����� ����� ����������(���������� ����� � ����� ��������)
void printInterBlue(int coins, int hp)
{

}

//����� ������ ����� ����������(������ �������� � ���������)
void printInterGreen()
{

}
