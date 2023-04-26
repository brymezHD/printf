#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_chrg(va_list __attribute__((unused)), char *, unsigned int);
int print_chrl(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_intg(va_list arguments, char *buf, unsigned int ibuf);
int print_bny(va_list arguments, char *buf, unsigned int ibuf);
int print_unst(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_uphx(va_list arguments, char *buf, unsigned int ibuf);
int print_ustr(va_list arguments, char *buf, unsigned int ibuf);
int print_addrs(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int printlong(va_list arguments, char *buf, unsigned int ibuf);
int prinlunit(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int printldx(va_list arguments, char *buf, unsigned int ibuf);
int prinldxl(va_list arguments, char *buf, unsigned int ibuf);
int prinshint(va_list arguments, char *buf, unsigned int ibuf);
int prinshunt(va_list arguments, char *buf, unsigned int ibuf);
int prinshoct(va_list arguments, char *buf, unsigned int ibuf);
int prinshthx(va_list arguments, char *buf, unsigned int ibuf);
int prinshupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinzero(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*sel_print_func(const char *s, int index))(va_list, char *, unsigned int);
int rtn_print_func(const char *s, int index);
unsigned int cret_buf(char *buf, char c, unsigned int ibuf);
int print_buff(char *buf, unsigned int nbuf);
char *pnt_binary_array(char *binary, long int int_in, int isneg, int limit);
char *pnt_oct_array(char *bnr, char *oct);
char *pnt_long_oct_array(char *bnr, char *oct);
char *pnt_short_oct_array(char *bnr, char *oct);
char *pnt_hex_array(char *bnr, char *hex, int isupp, int limit);
