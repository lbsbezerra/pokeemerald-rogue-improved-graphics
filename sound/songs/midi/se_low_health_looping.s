	.include "MPlayDef.s"

	.equ	se_low_health_looping_grp, voicegroup127
	.equ	se_low_health_looping_pri, 3
	.equ	se_low_health_looping_rev, 0
	.equ	se_low_health_looping_mvl, 100
	.equ	se_low_health_looping_key, 0
	.equ	se_low_health_looping_tbs, 1
	.equ	se_low_health_looping_exg, 1
	.equ	se_low_health_looping_cmp, 1

	.section .rodata
	.global	se_low_health_looping
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

se_low_health_looping_1:
	.byte	KEYSH , se_low_health_looping_key+0
se_low_health_looping_1_B1:
@ 000   ----------------------------------------
	.byte	TEMPO , (150*se_low_health_looping_tbs+1)/2
	.byte		VOICE , 15
	.byte		XCMD  , xIECV , 10
	.byte		        xIECL , 8
	.byte		VOL   , 127*se_low_health_looping_mvl/mxv
	.byte		BEND  , c_v+17
	.byte		N12   , Dn4 , v080
	.byte	W12
@ 001   ----------------------------------------
	.byte		BEND  , c_v+31
	.byte		N12   , An3 
	.byte	W12
@ 002   ----------------------------------------
	.byte	W12
	.byte	GOTO
	 .word	se_low_health_looping_1_B1
se_low_health_looping_1_B2:
@ 003   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

se_low_health_looping:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_low_health_looping_pri	@ Priority
	.byte	se_low_health_looping_rev	@ Reverb.

	.word	se_low_health_looping_grp

	.word	se_low_health_looping_1

	.end
