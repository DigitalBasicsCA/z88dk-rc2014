;
;       MicroBEE pseudo graphics routines
;
;       cls ()  -- clear screen
;
;       Stefano Bodrato - 2016
;
;
;       $Id: clg.asm,v 1.2 2016/11/09 11:35:58 stefano Exp $
;

			SECTION code_clib
			PUBLIC  clg
			EXTERN  cleargraphics
			

	
;.vdutab		; 64*16
;	defb	107,64,81,55,18,9,16,17,$48,$0F,$2F,$0F,0,0,0,0  
	
;.vdutab		; 40x24
;	defb	$35,40,$2D,$24,$1b,$05,$19,$1a,$48,$0a,$2a,$0a,$20,0,0,0

;.vdutab		; 80x24
;	defb	$6b,80,$58,$37,$1b,$05,$18,$1a,$48,$0a,$2a,$0a,$20,0,0,0

;.vdutab		; 80x24 / 80x25 - Peter Broughton
;	defb	$6b,$50,$5b,$37,$1b,$05,$19,$1a,$48,$0a,$2a,$0a,$20,0,0,0
;	defb	$6b,$50,$59,$37,$1b,$05,$19,$1b,$48,$0a,$2a,$0a,$20,0,0,0


.clg
;
;	LD	HL,vdutab
;	LD  C,0
;	LD	B,16
;.vdloop
;	LD	A,C
;	OUT	($0C),A
;	LD	A,(HL)
;	OUT	($0D),A
;	INC	HL
;	INC C
;	DJNZ	vdloop


	
	jp cleargraphics
