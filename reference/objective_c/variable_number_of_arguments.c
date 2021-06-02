//variable number of arguments with out using count variable
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _sum(int count, ...);

#define COUNT(...) _COUNT(__VA_ARGS__, 5, 4, 3, 2, 1)
#define _COUNT(a, b, c, d, e, count, ...) count

#define sum(...) _sum(COUNT(__VA_ARGS__), __VA_ARGS__)

int _sum(int count, ...) {
	va_list	arg_ptr;
	int		sum = 0;
	int		i = 0;

	va_start(arg_ptr, count);

	for (i = 0; i < count; i++) {
		printf( "%d ", va_arg(arg_ptr, int));
	}

	//return sum;
}

int main() {
	printf("%d\n", sum(1, 2, 3, 4, 5));
	printf("%d\n", sum(1, 2, 3));
	printf("%d\n", sum(1));
	printf("%d\n", sum(2, 2, 2, 2, 2,3,3,3,3,3,3,7,5,7));

	return 0;
}