	.include "MPlayDef.s"

	.equ	mus_move_deleted_slow_grp, voicegroup012
	.equ	mus_move_deleted_slow_pri, 5
	.equ	mus_move_deleted_slow_rev, 0
	.equ	mus_move_deleted_slow_mvl, 90
	.equ	mus_move_deleted_slow_key, 0
	.equ	mus_move_deleted_slow_tbs, 1
	.equ	mus_move_deleted_slow_exg, 1
	.equ	mus_move_deleted_slow_cmp, 1

	.section .rodata
	.global	mus_move_deleted_slow
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_move_deleted_slow_1:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , (150*mus_move_deleted_slow_tbs+1)/2
	.byte	W11
	.byte	TEMPO , (80*mus_move_deleted_slow_tbs+1)/2
	.byte	W01
@ 001   ----------------------------------------
	.byte		VOICE , 13
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte		N06   , En3 , v068
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
@ 002   ----------------------------------------
	.byte		N12   , Ds5 , v088
	.byte	W09
	.byte		        Cn5 
	.byte	W12
	.byte		        As4 
	.byte	W12
	.byte		        Gn4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N06   , En5 
	.byte	W12
	.byte		N12   
	.byte	W24
	.byte	W03
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_move_deleted_slow_2:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte	W12
@ 001   ----------------------------------------
	.byte		VOICE , 13
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte	W03
	.byte		N06   , Gs3 , v068
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Gs4 
	.byte	W06
	.byte		        Cs5 
	.byte	W03
@ 002   ----------------------------------------
	.byte	W03
	.byte		N12   , En5 , v088
	.byte	W09
	.byte		        Cs5 
	.byte	W12
	.byte		        Bn4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N06   , En5 
	.byte	W12
	.byte		N12   
	.byte	W24
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_move_deleted_slow_3:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte	W12
@ 001   ----------------------------------------
	.byte		BEND  , c_v+1
	.byte	W24
@ 002   ----------------------------------------
	.byte		VOICE , 13
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte		PAN   , c_v-48
	.byte	W12
	.byte		N12   , En5 , v012
	.byte	W09
	.byte		        Cs5 
	.byte	W12
	.byte		        Bn4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N06   , En5 
	.byte	W12
	.byte		N12   
	.byte	W15
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_move_deleted_slow_4:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte	W12
@ 001   ----------------------------------------
	.byte		BEND  , c_v-2
	.byte	W24
@ 002   ----------------------------------------
	.byte		VOICE , 13
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte		PAN   , c_v+48
	.byte	W24
	.byte		N12   , En5 , v012
	.byte	W09
	.byte		        Cs5 
	.byte	W12
	.byte		        Bn4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N06   , En5 
	.byte	W12
	.byte		N12   
	.byte	W03
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_move_deleted_slow_5:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte		XCMD  , xIECV , 8
	.byte		        xIECL , 8
	.byte	W12
@ 001   ----------------------------------------
	.byte		VOICE , 84
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte	W21
	.byte		N12   , En2 , v072
	.byte	W03
@ 002   ----------------------------------------
	.byte	W56
	.byte	W01
	.byte		        En3 
	.byte	W12
	.byte		        En4 
	.byte	W24
	.byte	W03
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_move_deleted_slow_6:
	.byte	KEYSH , mus_move_deleted_slow_key+0
@ 000   ----------------------------------------
	.byte		XCMD  , xIECV , 8
	.byte		        xIECL , 8
	.byte	W12
@ 001   ----------------------------------------
	.byte		VOICE , 85
	.byte		VOL   , 127*mus_move_deleted_slow_mvl/mxv
	.byte		BEND  , c_v+8
	.byte	W24
@ 002   ----------------------------------------
	.byte		N12   , En2 , v052
	.byte	W60
	.byte		        En3 
	.byte	W12
	.byte		        En4 
	.byte	W24
@ 003   ----------------------------------------
	.byte	W24
	.byte	FINE

@******************************************************@
	.align	2

mus_move_deleted_slow:
	.byte	6	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_move_deleted_slow_pri	@ Priority
	.byte	mus_move_deleted_slow_rev	@ Reverb.

	.word	mus_move_deleted_slow_grp

	.word	mus_move_deleted_slow_1
	.word	mus_move_deleted_slow_2
	.word	mus_move_deleted_slow_3
	.word	mus_move_deleted_slow_4
	.word	mus_move_deleted_slow_5
	.word	mus_move_deleted_slow_6

	.end
