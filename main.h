#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdio.h>
#include<stdbool.h>
#include<limits.h>
int _printf(const char *format, ...);
int _printd(int val);
int print_number(int n);
int _putchar(char c);
int print_char(char c);
int _print_string(char *str);
int _strlen(char *s);
int _printbinary(unsigned int value);
int print_unsigned(unsigned int num);
#endif
