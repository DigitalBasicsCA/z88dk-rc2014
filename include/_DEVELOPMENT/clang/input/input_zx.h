
// automatically generated by m4 from headers in proto subdir


#ifndef _INPUT_ZX_H
#define _INPUT_ZX_H

#include <stdint.h>

///////////
// keyboard
///////////

extern int in_inkey(void);


extern int in_key_pressed(uint16_t scancode);


extern uint16_t in_key_scancode(int c);



extern uint16_t in_pause(uint16_t dur_ms);


extern int in_test_key(void);


extern void in_wait_key(void);


extern void in_wait_nokey(void);



////////////
// joysticks
////////////

extern uint16_t in_stick_keyboard(udk_t *u);



extern uint16_t in_stick_cursor(void);


extern uint16_t in_stick_fuller(void);


extern uint16_t in_stick_kempston(void);


extern uint16_t in_stick_sinclair1(void);


extern uint16_t in_stick_sinclair2(void);



////////
// mouse
////////

extern void in_mouse_amx_init(uint16_t x_vector,uint16_t y_vector);


extern void in_mouse_amx_reset(void);


extern void in_mouse_amx_setpos(uint16_t x,uint16_t y);


extern void in_mouse_amx(uint8_t *buttons,uint16_t *x,uint16_t *y);


extern uint16_t in_mouse_amx_wheel(void);


extern int16_t in_mouse_amx_wheel_delta(void);



extern void in_mouse_kempston_init(void);


extern void in_mouse_kempston_reset(void);


extern void in_mouse_kempston_setpos(uint16_t x,uint16_t y);


extern void in_mouse_kempston(uint8_t *buttons,uint16_t *x,uint16_t *y);


extern uint16_t in_mouse_kempston_wheel(void);


extern int16_t in_mouse_kempston_wheel_delta(void);



#endif
