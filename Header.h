#pragma once

#include <conio.h>
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

void createFile();
void readFile();
void showMap(char** map, int x, int y);
void quickSort(int *a, int min, int max);