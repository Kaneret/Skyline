#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdio> 
#include <string>
#include <Windows.h>
using namespace std;

void read();
void itemSort(int **a, int minstr, int maxstr, int kind);
void load(int coins, int hp, int choice);
void new_game(int coins, int hp, int choice);