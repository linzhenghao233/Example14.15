/* enum.c -- ʹ��ö�����͵�ֵ */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char* s_gets(char* st, int n);

enum spectrum{red, orange, yellow, green, blue, violet};
const char* color[] = { "red", "orange", "yellow", "green", "blue", "violet" };
#define LEN 30