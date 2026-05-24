#include "input.h"
#include <random>
#include <stdio.h>
//　0から9の中からランダムな数値を生成
int _RandomNumber()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, 9);

	return dist(mt);
}

int _InputNumber()
{
	printf("0から9の数値を入力してください");

	int inputNumber;
	scanf("%d", &inputNumber);

	return inputNumber;
}