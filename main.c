#include <stdio.h>


// функция сложения
int sum(int a, int b){
	return (a + b);
}

// функция умножения
int multiply(int a, int b){
    return (a * b);
}

// функция вычитания
int subtraction(int a, int b){
	return (a - b);
}



int main(int argc, char const *argv[])
{
	int rez = 0;
	rez = printf("Hello, World!\n");
	
	// проверка на ошибку функции printf
	if(rez < 0) return -1;
	return 0;
}