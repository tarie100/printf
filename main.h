#ifndef MAIN_H
#define MAIN_H
#include<unistd.h>
int _printf(const char *format, ...);
int _handle(const char *format, ...);

/** Custom Binary **/
void print_binary(unsigned int n);
void custom_printf(const char *format, ...);
#endif
