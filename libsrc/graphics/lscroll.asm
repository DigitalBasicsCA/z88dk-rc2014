;
;       Z88 Graphics Functions - Small C+ stubs
;
;       Written around the Interlogic Standard Library
;
;       Stubs Written by D Morris - 30/9/98
;
;
;	$Id: lscroll.asm,v 1.6 2016/04/13 21:09:09 dom Exp $
;


;Usage: lscroll(struct *pixels)


        SECTION code_clib
                PUBLIC    lscroll

                EXTERN     scroll_left



.lscroll
		push	ix
		ld	ix,2
		add	ix,sp
		ld	a,(ix+2)
		ld	c,(ix+4)
		ld	b,(ix+6)
		ld	l,(ix+8)
		ld	h,(ix+10)
		pop	ix
                jp      scroll_left

