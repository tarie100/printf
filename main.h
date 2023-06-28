#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
int _printf(const char *format, ...);
int _handle(const char *format, ...);
int _precision(const char *format, int *i, va_list args);
int _putchar(void);
/** Custom Binary**/
void print_binary(unsigned int n);
void custom_printf(const char *format, ...);
/** String Print **/
int _string(char *ps);
#endif
