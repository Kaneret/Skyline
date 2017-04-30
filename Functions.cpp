#include "Functions.h"

//при вызове сортировки игрок выбирает, по какому параметру вещи
//будет проводитьс€ сортировка: по характеристикам(1), имени(2), материалу(3) или стомости(4)
//т.е. на вход поступает значение kind, равное 1, либо 2, либо 3
//min обозначает минимальный индекс, сначала он равен 0
//а после - началу второго подмассива и т.д.
//max обозначает максимальный индекс, сначала он равен длине массива - 1
//а после - концу первого подмассива и т.д.
void itemSortStructure(item *a, int min, int max, int kind)
{
	item b = a[(min + max) / 2];              //средний элемент(по индексу)
	int s_min = min;                          //минимальный индекс строки
	int s_max = max;                          //максимальный индекс строки

	
	while (s_min <= s_max)                    //разделение на 2 подмассива
	{
		if (kind==1)                          //сортируем по характеристикам
		{ 
			while (a[s_min].of < b.of) s_min++;
			while (a[s_max].of > b.of) s_max--;
		}
		else if (kind==2)                     //сортируем по названию
		{
			while (a[s_min].is < b.is) s_min++;
			while (a[s_max].is > b.is) s_max--;
		}
		else if (kind == 3)                     //сортируем по материалу
		{
			while (a[s_min].at < b.at) s_min++;
			while (a[s_max].at > b.at) s_max--;
		}
		else                                  //сортируем по стоимости
		{
			while (a[s_min].gold < b.gold) s_min++;
			while (a[s_max].gold > b.gold) s_max--;
		}
		if (s_min <= s_max)
		{
			swap(a[s_min], a[s_max]);         //мен€ем их местами
			s_min++;
			s_max--;
		}
	}

	if (s_min < max) itemSortStructure(a, s_min, max, kind);//справа от b
	if (min < s_max) itemSortStructure(a, min, s_max, kind);//слева от b
}

//считывание и вывод из файла
const int N = 256; // онстантный размер строки (read)
void read()
{
	setlocale(LC_ALL, ".1251");
	char S[N] = { "" }; //¬ S будут считыватьс€ строки 
	ifstream in1("Text.txt"); //ќткрыли файл дл€ чтени€ 
	while (!in1.eof()) //Ѕудем читать информацию пока не дойдем до конца файла 
	{
		in1.getline(S, N); //ѕострочное считывание информации в S 
		cout << S << endl; //¬ывод очередной строки на экран 
	}
	in1.close(); //«акрыли открытый файл 
	system("pause");
}

//сохранение
void save(int coins, int hp, int choice)
{
	coins = 50; // здесь это дл€ проверки, в коде значение будет присваиватьс€ в др местах
	hp = 2;
	choice = 1;
	ofstream out("Save1.txt");
	out << coins << endl << hp;////////////// а 'choice' куда? 
	out.close();
}

//загрузка
/*void load(int coins, int hp, int choice)
{
	ifstream in("Save1.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/

//загрузка сохранени€ дл€ новой игры
/*void new_game(int coins, int hp, int choice)
{
	ifstream in("Save.txt");
	in >> coins >> hp >> choice;
	cout << endl << "COINS: " << coins << "		" << "HP: " << hp << endl << endl;
	system("pause");
}*/

//вывод синей линии интерфейса(количество монет и очков здоровь€)
void printInterBlue(int coins, int hp)
{

}

//вывод зелЄной линии интерфейса(кнопки магазина и инвентар€)
void printInterGreen()
{

}
