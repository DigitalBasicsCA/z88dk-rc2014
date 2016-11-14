;
;       Philips P2000 Graphics Functions
;
;       cls ()  -- clear screen
;
;       Stefano Bodrato - Apr 2014
;
;
;       $Id: clsgraph.asm,v 1.3 2016/06/23 19:53:27 dom Exp $
;


        SECTION code_clib
        PUBLIC    cleargraphics
	EXTERN	base_graphics

.cleargraphics
;	ld		a,12
;	call  $60C0     ; cls
	
	ld    hl,(base_graphics)
	ld    c,23
gfxset:
	ld    (hl),23	; Set graph mode modifier at the beginning of the text rows
	inc   hl
	ld    b,79
gfxrow:
	ld    (hl),32
	inc   hl
	djnz  gfxrow
	dec   c
	jr    nz,gfxset
	
	ret

