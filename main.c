#include <stdio.h>

int main(int argc, char const *argv[])
{
	int rez = 0;
	rez = printf("Hello, World!\n");
	
	// проверка на ошибку функции printf
	if(rez < 0) return -1;
	return 0;
}