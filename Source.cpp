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
char *FName = "c:\\Users\\����\documents\visual studio 2015\Projects\Skyline\Skyline\Text.txt"; //���� � �����
/*����� ������ �� ����� �� �����*/
void readFile()
{
	cout << endl << "ReadFile:��"; //��� �������
	char S[N] = { "" }; //� S ����� ����������� ������
	ifstream in1(FName); //������� ���� ��� ������
	while (!in1.eof()) //����� ������ ���������� ���� �� ������ �� ����� �����
	{
		in1.getline(S, N); //���������� ���������� ���������� � S
		cout << S << endl; //����� ��������� ������ �� �����
	}
	in1.close(); //������� �������� ����
}

/*���� ������ � ����*/
void createFile()
{
	cout << "Create File:��" << endl; //��� �������
	char S[255]; //� S ����� ����������� ������
	int count = 0; //����� ����� ��� ����� � ����
	cout << "Strok budet:��";
	cin >> count; //���������� ������� ����� �������
				  /*������� ����� �������*/
	ofstream out1(FName); //������� ���� ��� ������
	for (int i = 0; i<count + 1; i++)   //���� �� ���������� ������ �����
	{
		cin.getline(S, N); //���������� � S �� ��� ����� � ����������
		out1 << S << endl; //�������� S � ���� � �������� ������� ������
	}
	out1.close();
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