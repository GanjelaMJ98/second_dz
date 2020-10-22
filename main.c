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

// функция деления
float division(float a, float b){
	if(b != 0){
		return (a / b);
	}else{
		return -1;
	}
}

void test(void){
	printf("Результат сложения 4 и 2: %d", sum(4,2));
	if(sum(4,2) == 6) printf(" - правильно\n");
	else printf(" - не правильно\n");

	printf("Результат умножения 4 и 2: %d", multiply(4,2));
	if(multiply(4,2) == 8) printf(" - правильно\n");
	else printf(" - не правильно\n");

	printf("Результат вычитания 4 и 2: %d", subtraction(4,2));
	if(subtraction(4,2) == 2) printf(" - правильно\n");
	else printf(" - не правильно\n");

	printf("Результат деления 4 и 2: %f", division(4,2));
	if(division(4,2) == 2) printf(" - правильно\n");
	else printf(" - не правильно\n");

	printf("Результат деления 4 и 0: %f", division(4,0));
	if(division(4,0) == -1) printf(" - правильно\n");
	else printf(" - не правильно\n");
}

int main(int argc, char const *argv[])
{
	int rez = 0;
	rez = printf("Hello, World!\n");
	test();
	// проверка на ошибку функции printf
	if(rez < 0) return -1;
	return 0;
}