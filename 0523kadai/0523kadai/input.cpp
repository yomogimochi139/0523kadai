#include "input.h"
#include <random>
#include <stdio.h>
int RandomNumber()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, 9);

	return dist(mt);
}

int InputNumber()
{
	printf("0‚©‚ç9‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");

	int num;
	scanf("%d", &num);

	return num;
}