#include "Header.h"
#include "Sourse.h"
const int N = 256; //Константный размер строки (read)

void itemSort(int **a, int minstr, int maxstr, int kind)
{
	int column = kind;                        //выбранный столбец
	int b = a[(minstr + maxstr) / 2][column]; //средний элемент(по индексу)
	int l_min = minstr;                       //минимальный индекс строки
	int l_max = maxstr;                       //максимальный индекс строки

	//разделение на 2 подмассива
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

	if (l_min < maxstr) itemSort(a, l_min, maxstr, kind);//справа от b
	if (minstr < l_max) itemSort(a, minstr, l_max, kind);//слева от b
}

//пустые
void graph()
{}
void inventory()
{}
void search()
{}
void magazine()
{}
//пустые END

void read()
{
	setlocale(LC_ALL, ".1251");
	char S[N] = { "" }; //В S будут считываться строки 
	ifstream in1("Text.txt"); //Открыли файл для чтения 
	while (!in1.eof()) //Будем читать информацию пока не дойдем до конца файла 
	{
		in1.getline(S, N); //Построчное считывание информации в S 
		cout << S << endl; //Вывод очередной строки на экран 
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
	out << coins << endl << hp;////////////// а 'choice' куда? 
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
