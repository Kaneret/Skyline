#pragma once

#include "Skyline.h"

void skeletonKey(int* res);//����-���� "�������"
void showMap(char** map, int y, int x);//���������� �����
void moveSK(char** map, int fix_y, int x, int y);//����������� �������
int ifUseSK(char** map, int y, int x);//���������� ��������� ������� ������� � ����-���� "�������"
void inputResult(int a);//