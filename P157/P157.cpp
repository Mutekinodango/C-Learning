/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	142 ��ҵʹ��[��������]������ݹ�


*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

uint32_t fibonacci_iterative(uint32_t);
int main(void)
{
	/**

		쳲���������
		�ݹ�,�׳�
	*/
	uint32_t number = 10;
	printf("%u � %u\n", number, fibonacci_iterative(number));



	system("pause");
	return 0;
}

uint32_t fibonacci_iterative(uint32_t n) {
	// ��������
	if (n <= 1)
	{
		return n;
	}

	uint32_t fib_n_minus_2 = 0;
	uint32_t fib_n_minus_1 = 1;
	uint32_t fib_n = 0;

	for (size_t i = 2; i <= n; ++i)	// ��i++ һ��������Ч�ʸ���
	{
		fib_n = fib_n_minus_1 + fib_n_minus_2;
		fib_n_minus_2 = fib_n_minus_1;
		fib_n_minus_1 = fib_n;
	}
	return fib_n;
}