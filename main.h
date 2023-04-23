#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

int _printf(const char *format, ...);
int _printd(int val);
void print_number(int n);
int _putchar(char c);
int print_char(char c);
int _print_string(char *str);
int _strlen(char *s);
#endif
