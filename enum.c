/* enum.c -- 使用枚举类型的值 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char* s_gets(char* st, int n);

enum spectrum{red, orange, yellow, green, blue, violet};
const char* color[] = { "red", "orange", "yellow", "green", "blue", "violet" };
#define LEN 30