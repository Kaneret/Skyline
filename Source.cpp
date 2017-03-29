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
char *FName = "c:\\Users\\Олег\documents\visual studio 2015\Projects\Skyline\Skyline\Text.txt"; //Путь к файлу
/*Вывод текста из файла на экран*/
void readFile()
{
	cout << endl << "ReadFile:  "; //Для красоты
	char S[N] = { "" }; //В S будут считываться строки
	ifstream in1(FName); //Открыли файл для чтения
	while (!in1.eof()) //Будем читать информацию пока не дойдем до конца файла
	{
		in1.getline(S, N); //Построчное считывание информации в S
		cout << S << endl; //Вывод очередной строки на экран
	}
	in1.close(); //Закрыли открытый файл
}

/*Ввод текста в файл*/
void createFile()
{
	cout << "Create File:  " << endl; //Для красоты
	char S[255]; //В S будет считываться строка
	int count = 0; //Число строк для ввода в файл
	cout << "Strok budet:  ";
	cin >> count; //Определили сколько строк вводить
				  /*Главная часть функции*/
	ofstream out1(FName); //Открыли файл для записи
	for (int i = 0; i<count + 1; i++)   //Цикл по количеству нужных строк
	{
		cin.getline(S, N); //Запоминаем в S то что ввели с клавиатуры
		out1 << S << endl; //Записали S в файл и дописали перенос строки
	}
	out1.close();
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