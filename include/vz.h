#ifndef _VZ
#define _VZ

#include <sys/compiler.h>


// VZ Specific Library
// 01.2007 aralbrec


/*****************************************************

	Video Technology library for small C compiler

		Juergen Buchmueller

*****************************************************/

// first CALLER and FASTCALL linkage

extern void __LIB__ __FASTCALL__ vz_bgrd(int n) __SMALLCFASTCALL;
extern void __LIB__              vz_brick(void *addr, int byte) __SMALLCDECL;
extern void __LIB__              vz_char_draw(int x, int y, int c, int ch) __SMALLCDECL;
extern void __LIB__              vz_clrscr(void);
extern void __LIB__ __FASTCALL__ vz_color(int n) __SMALLCFASTCALL;
extern int  __LIB__              vz_getch(void);
extern void __LIB__              vz_gotoxy(int x, int y) __SMALLCDECL;
extern void __LIB__              vz_inch(void);
extern void __LIB__              vz_line(int x1, int y1, int x2, int y2, int c) __SMALLCDECL;
extern char __LIB__             *vz_midstr(char *str, int pos) __SMALLCDECL;
extern void __LIB__ __FASTCALL__ vz_mode(int n) __SMALLCFASTCALL;
extern void __LIB__              vz_plot(int x, int y, int c) __SMALLCDECL;
extern void __LIB__              vz_score(void *addr, int byte) __SMALLCDECL;
extern void __LIB__ __FASTCALL__ vz_setbase(void *start) __SMALLCFASTCALL;
extern void __LIB__              vz_shape(int x, int y, int w, int h, int c, char *data) __SMALLCDECL;
extern void __LIB__              vz_sound(int freq, int cycles) __SMALLCDECL;
extern void __LIB__              vz_soundcopy(char *dst, char *src, int size, int sound1, int sound2) __SMALLCDECL;

// CALLEE linkage for functions with at least two parameters

extern void __LIB__ __CALLEE__   vz_brick_callee(void *addr, int byte) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_gotoxy_callee(int x, int y) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_line_callee(int x1, int y1, int x2, int y2, int c) __SMALLCDECL __SMALLCCALLEE;
extern char __LIB__ __CALLEE__  *vz_midstr_callee(char *str, int pos) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_plot_callee(int x, int y, int c) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_score_callee(void *addr, int byte) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_sound_callee(int freq, int cycles) __SMALLCDECL __SMALLCCALLEE;
extern void __LIB__ __CALLEE__   vz_soundcopy_callee(char *dst, char *src, int size, int sound1, int sound2) __SMALLCDECL __SMALLCCALLEE;

// make the CALLEE linkage default, function pointers will use CALLER linkage

#define vz_brick(a,b)            vz_brick_callee(a,b)
#define vz_gotoxy(a,b)           vz_gotoxy_callee(a,b)
#define vz_line(a,b,c,d,e)       vz_line_callee(a,b,c,d,e)
#define vz_midstr(a,b)           vz_midstr_callee(a,b)
#define vz_plot(a,b,c)           vz_plot_callee(a,b,c)
#define vz_score(a,b)            vz_score_callee(a,b)
#define vz_sound(a,b)            vz_sound_callee(a,b)
#define vz_soundcopy(a,b,c,d,e)  vz_soundcopy_callee(a,b,c,d,e)

#endif
