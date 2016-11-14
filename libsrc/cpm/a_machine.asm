;
;       Small C+ Runtime Library
;
;       CP/M functions
;
;       CPM Plus "userf" custom Amstrad calls, for Amstrad CPC & PCW and ZX Spectrum +3
;
;
;       $Id: a_machine.asm,v 1.2 2016/11/03 09:25:27 stefano Exp $
;

	SECTION code_clib

	PUBLIC	a_machine
	
	EXTERN	subuserf
	INCLUDE	"amstrad_userf.def"

a_machine:
	call subuserf
	defw CD_VERSION
	ld l,a
	ld h,0
	ret

