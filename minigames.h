#pragma once

#include "Skyline.h"

void skeletonKey(int* res);//мини-игра "Отмычка"
void showMap(char** map, int y, int x);//показывает карту
void moveSK(char** map, int fix_y, int x, int y);//передвигает отмычку
int ifUseSK(char** map, int y, int x);//показывает результат нажатия клавиши в мини-игре "Отмычка"
void inputResult(int a);//