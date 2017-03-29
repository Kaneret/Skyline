#include "Header.h"
#include "Sourse.h"



void quickSort(int *a, int min, int max) {
	int b = a[(min + max) / 2];//средний элемент(по индексу)
	int l_min = min;
	int l_max = max;

	while (l_min <= l_max) //разделение на 2 подмассива
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
	if (l_min < max) quickSort(a, l_min, max);//справа от р
	if (min < l_max) quickSort(a, min, l_max);//слева от р
}

void graph()
{}

void inventory()
{}

void search()
{}

void magazine()
{}

const int N = 256; //Константный размер строки 

void read()
{
	setlocale(LC_ALL, ".1251");
	char S[N] = { "" }; //В S будут считываться строки 
	ifstream in1("Text.txt"); //Открыли файл для чтения 
	while (!in1.eof()) //Будем читать информацию пока не дойдем до конца файла 
	{
		in1.getline(S, N); //Построчное считывание информации в S 
		cout « S « endl; //Вывод очередной строки на экран 

	}
	in1.close(); //Закрыли открытый файл 
	system("pause");
}

void save(int coins, int hp, int choice)
{
	coins = 50; // здесь это для проверки, в коде значение будет присваиваться в др местах
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


// функция вывода игровой карты в консоль
void showMap(char** map, int x, int y)
{
	for (int i = 0; i < y; i++)//перебор по вертикали
	{
		for (int j = 1; j < x; j++)//перебор по горизонтали
			cout << map[i][j];
	}
}