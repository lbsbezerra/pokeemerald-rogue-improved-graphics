	.include "MPlayDef.s"

	.equ	mus_debug_test_grp, voicegroup191
	.equ	mus_debug_test_pri, 0
	.equ	mus_debug_test_rev, reverb_set+0
	.equ	mus_debug_test_mvl, 105
	.equ	mus_debug_test_key, 0
	.equ	mus_debug_test_tbs, 1
	.equ	mus_debug_test_exg, 1
	.equ	mus_debug_test_cmp, 1

	.section .rodata
	.global	mus_debug_test
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_debug_test_1:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte		N12   , Gs0 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        Gn0 
	.byte	W12
@ 001   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte		N12   , As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        Gs0 
	.byte	W12
@ 002   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte		N12   , Cs2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Cs1 
	.byte	W12
@ 003   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N24   , Cs1 
	.byte	W24
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        Cs1 
	.byte	W12
@ 004   ----------------------------------------
mus_debug_test_1_004:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
mus_debug_test_1_005:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_004
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_005
@ 008   ----------------------------------------
mus_debug_test_1_008:
	.byte		N12   , As1 , v100
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte	PEND
@ 009   ----------------------------------------
mus_debug_test_1_009:
	.byte		N12   , As1 , v100
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_008
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_009
@ 012   ----------------------------------------
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 013   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
@ 014   ----------------------------------------
mus_debug_test_1_014:
	.byte		N12   , As0 , v100
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte	PEND
@ 015   ----------------------------------------
	.byte		        As0 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
@ 016   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 017   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_014
@ 019   ----------------------------------------
	.byte		N12   , As0 , v100
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        As1 
	.byte	W12
@ 020   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N12   , Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 021   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        Ds1 
	.byte	W12
	.byte		        En1 
	.byte	W12
@ 022   ----------------------------------------
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        As1 
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
@ 023   ----------------------------------------
	.byte		        As0 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        Ds1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 024   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N12   , An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 025   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        Cs1 
	.byte	W12
	.byte		        Gs0 
	.byte	W12
	.byte		        Bn0 
	.byte	W12
@ 026   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 027   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
@ 028   ----------------------------------------
mus_debug_test_1_028:
	.byte		N12   , As0 , v100
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte	PEND
@ 029   ----------------------------------------
	.byte		        As0 
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 030   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		N06   , An1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , An0 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		N06   , Cs1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , An1 
	.byte	W12
	.byte		        En1 
	.byte	W12
@ 031   ----------------------------------------
	.byte		        An0 
	.byte	W12
	.byte		N06   , Cs1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , En1 
	.byte	W12
	.byte		N06   , Dn1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , Cs1 
	.byte	W12
	.byte		        Bn0 
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		        En0 
	.byte	W12
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_1_028
@ 033   ----------------------------------------
	.byte		N12   , As0 , v100
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		N06   , As1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , As0 
	.byte	W12
	.byte		        Bn0 
	.byte	W12
@ 034   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N06   , Cn2 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , Gn1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		N06   , Cn2 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , En2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 035   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N06   , Cn2 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , Gn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Bn0 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
@ 036   ----------------------------------------
	.byte		        En2 
	.byte	W12
	.byte		N06   , Cn2 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , Bn1 
	.byte	W12
	.byte		N06   , Gn1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , En1 
	.byte	W12
	.byte		        Ds1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
@ 037   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N11   , Cn2 
	.byte	W12
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_debug_test_2:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        As1 
	.byte	W24
	.byte		        Fs1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
@ 001   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        As1 
	.byte	W24
	.byte		        Fs1 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
@ 002   ----------------------------------------
	.byte		        Cn1 
	.byte	W12
	.byte		N12   
	.byte		N12   , En1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		N12   
	.byte		N12   , Fs1 
	.byte	W12
	.byte		        En1 
	.byte		N12   , Fs1 
	.byte	W12
	.byte		N12   
	.byte	W12
@ 003   ----------------------------------------
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , En1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Ds1 
	.byte		N12   , En1 
	.byte	W12
	.byte		N12   
	.byte		N12   , Fs1 
	.byte	W12
	.byte		        Ds1 
	.byte		N12   , En1 
	.byte		N12   , Fs1 
	.byte	W12
	.byte		N12   
	.byte	W12
@ 004   ----------------------------------------
	.byte		        Cn1 
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
@ 005   ----------------------------------------
mus_debug_test_2_005:
	.byte		N12   , Cn1 , v100
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte		N12   , Ds2 
	.byte	W24
	.byte	PEND
@ 006   ----------------------------------------
mus_debug_test_2_006:
	.byte		N12   , Cn1 , v100
	.byte		N12   , Ds2 
	.byte	W24
	.byte		        Cn1 
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte	PEND
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_005
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_006
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_006
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_005
@ 012   ----------------------------------------
mus_debug_test_2_012:
	.byte		N12   , Cn1 , v100
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 013   ----------------------------------------
mus_debug_test_2_013:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 015   ----------------------------------------
mus_debug_test_2_015:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , Bn1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , Bn1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte		N12   , Bn1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 019   ----------------------------------------
mus_debug_test_2_019:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , Bn1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , Bn1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds1 
	.byte		N12   , Bn1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , Bn1 
	.byte	W12
	.byte	PEND
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_013
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_015
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_013
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_012
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_019
@ 028   ----------------------------------------
mus_debug_test_2_028:
	.byte		N12   , Cn1 , v100
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 029   ----------------------------------------
mus_debug_test_2_029:
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 030   ----------------------------------------
mus_debug_test_2_030:
	.byte		N12   , Cn1 , v100
	.byte		N12   , An1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 031   ----------------------------------------
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
@ 032   ----------------------------------------
	.byte		        Cn1 
	.byte		N12   , As1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_029
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_030
@ 035   ----------------------------------------
	.byte		N12   , Cn1 , v100
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , As1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , An1 
	.byte		N12   , As1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		        Fs1 
	.byte		N12   , As1 
	.byte	W12
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_2_028
@ 037   ----------------------------------------
	.byte		N12   , Cn1 , v100
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Cn1 
	.byte		N12   , Ds2 
	.byte	W12
	.byte		N11   , Fs1 
	.byte	W12
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_debug_test_3:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		N12   , Cn2 , v100
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		        Cn2 
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		        Cn2 
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		N24   , Cs2 
	.byte		N24   , Gs2 
	.byte		N24   , Cs3 
	.byte	W24
	.byte		N12   , Ds2 
	.byte		N12   , As2 
	.byte		N12   , Ds3 
	.byte	W12
	.byte		N24   , Cs2 
	.byte		N24   , Gs2 
	.byte		N24   , Cs3 
	.byte	W24
@ 001   ----------------------------------------
mus_debug_test_3_001:
	.byte		N12   , Cn2 , v100
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		        Cn2 
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		        Cn2 
	.byte		N12   , Gn2 
	.byte		N12   , Cn3 
	.byte	W12
	.byte		N24   , Cs2 
	.byte		N24   , Gs2 
	.byte		N24   , Cs3 
	.byte	W24
	.byte		N12   , Ds2 
	.byte		N12   , As2 
	.byte		N12   , Ds3 
	.byte	W12
	.byte		N24   , Cs2 
	.byte		N24   , Gs2 
	.byte		N24   , Cs3 
	.byte	W24
	.byte	PEND
@ 002   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_3_001
@ 003   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_3_001
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_debug_test_4:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
mus_debug_test_4_002:
	.byte		N12   , Cn3 , v100
	.byte		N12   , Gn3 
	.byte		N12   , Cn4 
	.byte	W12
	.byte		        Cn3 
	.byte		N12   , Gn3 
	.byte		N12   , Cn4 
	.byte	W12
	.byte		        Cn3 
	.byte		N12   , Gn3 
	.byte		N12   , Cn4 
	.byte	W12
	.byte		N24   , Cs3 
	.byte		N24   , Gs3 
	.byte		N24   , Cs4 
	.byte	W24
	.byte		N12   , Ds3 
	.byte		N12   , As3 
	.byte		N12   , Ds4 
	.byte	W12
	.byte		N24   , Cs3 
	.byte		N24   , Gs3 
	.byte		N24   , Cs4 
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_4_002
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_debug_test_5:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 112*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 112*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte		N96   , Gn4 , v100
	.byte	W96
@ 004   ----------------------------------------
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		N36   , Cn3 
	.byte		N36   , Gn3 
	.byte		N36   , Cn4 
	.byte	W36
	.byte		        Gn3 
	.byte		N36   , Cn4 
	.byte		N36   , Gn4 
	.byte	W36
	.byte		N24   , Cn4 
	.byte		N24   , Gn4 
	.byte		N24   , Cn5 
	.byte	W24
@ 005   ----------------------------------------
	.byte		N12   , As3 
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , En4 
	.byte		N12   , An4 
	.byte	W36
	.byte		        Gn3 
	.byte		N12   , Dn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W36
@ 006   ----------------------------------------
	.byte		N06   , Gn3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Gs3 
	.byte		N06   , Cs4 
	.byte		N06   , Fn4 
	.byte	W06
	.byte		        Gn3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Fn3 
	.byte		N06   , As3 
	.byte		N06   , Dn4 
	.byte	W06
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		TIE   , Gn3 
	.byte		TIE   , Cn4 
	.byte		TIE   , En4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
@ 007   ----------------------------------------
mus_debug_test_5_007:
	.byte		VOL   , 104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
	.byte		EOT   , Gn3 
	.byte		        Cn4 
	.byte		        En4 
@ 008   ----------------------------------------
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		N36   , As2 , v100
	.byte		N36   , Fn3 
	.byte		N36   , As3 
	.byte	W36
	.byte		        Fn3 
	.byte		N36   , As3 
	.byte		N36   , Fn4 
	.byte	W36
	.byte		N24   , As3 
	.byte		N24   , Fn4 
	.byte		N24   , As4 
	.byte	W24
@ 009   ----------------------------------------
	.byte		N12   , Gs3 
	.byte		N12   , Ds4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Dn4 
	.byte		N12   , Gn4 
	.byte	W36
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        Ds3 
	.byte		N12   , As3 
	.byte		N12   , Ds4 
	.byte	W36
@ 010   ----------------------------------------
	.byte		N06   , Fn3 
	.byte		N06   , As3 
	.byte		N06   , Dn4 
	.byte	W06
	.byte		        Fs3 
	.byte		N06   , Bn3 
	.byte		N06   , Ds4 
	.byte	W06
	.byte		        Fn3 
	.byte		N06   , As3 
	.byte		N06   , Dn4 
	.byte	W06
	.byte		        Ds3 
	.byte		N06   , Gs3 
	.byte		N06   , Cn4 
	.byte	W06
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		TIE   , Fn3 
	.byte		TIE   , As3 
	.byte		TIE   , Dn4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_007
	.byte		EOT   , Fn3 
	.byte		        As3 
	.byte		        Dn4 
@ 012   ----------------------------------------
mus_debug_test_5_012:
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N36   , Gn3 , v100
	.byte		N36   , Cn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N36   , En3 
	.byte		N36   , Gn3 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   
	.byte		N12   , Cn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , An3 
	.byte		N12   , Dn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 013   ----------------------------------------
mus_debug_test_5_013:
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N24   , Cn4 , v100
	.byte		N24   , En4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , Dn4 
	.byte		N12   , Fn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , Cn4 
	.byte		N12   , En4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N24   , Gn3 
	.byte		N24   , Dn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , Cn4 
	.byte		N12   , En4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , An3 
	.byte		N12   , Dn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 014   ----------------------------------------
mus_debug_test_5_014:
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N36   , Fn3 , v100
	.byte		N36   , As3 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N36   , Cn3 
	.byte		N36   , Fn3 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   
	.byte		N12   , As3 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		N12   , Gn3 
	.byte		N12   , Cn4 
	.byte	W01
	.byte		VOL   , 115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 015   ----------------------------------------
mus_debug_test_5_015:
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N24   , As3 , v100
	.byte		N24   , Dn4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N12   , Bn3 
	.byte		N12   , Ds4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N12   , As3 
	.byte		N12   , Dn4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N24   , Fn3 
	.byte		N24   , As3 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N24   
	.byte		N24   , Dn4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 016   ----------------------------------------
mus_debug_test_5_016:
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N36   , An3 , v100
	.byte		N36   , Cs4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N36   , En3 
	.byte		N36   , An3 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		N24   
	.byte		N24   , Cs4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 017   ----------------------------------------
mus_debug_test_5_017:
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		TIE   , Cs4 , v100
	.byte		TIE   , En4 
	.byte	W01
	.byte		VOL   , 114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        114*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte		        113*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte		        112*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        111*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        111*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        110*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        109*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte		        108*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte		        107*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        106*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        106*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        105*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        104*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte		        103*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte		        102*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 018   ----------------------------------------
mus_debug_test_5_018:
	.byte		VOL   , 101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        101*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        101*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        100*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        99*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte		        98*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte		        97*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        96*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        96*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        95*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        94*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte		        93*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte		        92*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        91*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        91*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        89*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte		        88*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
@ 019   ----------------------------------------
mus_debug_test_5_019:
	.byte		VOL   , 87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte		        87*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        86*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        86*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        85*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        84*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte		        83*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte		        82*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        81*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        81*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        80*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        79*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte		        78*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte		        77*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        76*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        76*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        75*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte	W01
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        74*mus_debug_test_mvl/mxv
	.byte		        90*mus_debug_test_mvl/mxv
	.byte	W01
	.byte	PEND
	.byte		EOT   , Cs4 
	.byte		        En4 
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_012
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_013
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_014
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_015
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_016
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_017
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_018
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_5_019
	.byte		EOT   , Cs4 
	.byte		        En4 
@ 028   ----------------------------------------
	.byte		N12   , As3 , v100
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		N48   , Cn4 
	.byte		N48   , Gn4 
	.byte		N48   , Cn5 
	.byte	W48
	.byte		N12   , As3 
	.byte		N12   , Dn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Cs4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Cn4 
	.byte		N12   , Gn4 
	.byte	W12
@ 029   ----------------------------------------
	.byte		        As3 
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Cn4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Dn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        As3 
	.byte		N12   , Cn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Dn4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Cn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Dn4 
	.byte		N12   , Fn4 
	.byte	W12
@ 030   ----------------------------------------
	.byte		N06   , En3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Fn3 
	.byte		N06   , Cs4 
	.byte		N06   , Fn4 
	.byte	W06
	.byte		        En3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Dn3 
	.byte		N06   , As3 
	.byte		N06   , Dn4 
	.byte	W06
	.byte		N72   , En3 
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte	W72
@ 031   ----------------------------------------
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Cs4 
	.byte		N06   , Fn4 
	.byte		N06   , Cs5 
	.byte	W06
	.byte		        Cn4 
	.byte		N06   , En4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        As3 
	.byte		N06   , Dn4 
	.byte		N06   , As4 
	.byte	W06
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte	W72
@ 032   ----------------------------------------
	.byte		N12   , Gs3 
	.byte		N12   , Ds4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		N48   , As3 
	.byte		N48   , Fn4 
	.byte		N48   , As4 
	.byte	W48
	.byte		N12   , Gs3 
	.byte		N12   , Cn4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Bn3 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , As3 
	.byte		N12   , Fn4 
	.byte	W12
@ 033   ----------------------------------------
	.byte		        Gs3 
	.byte		N12   , Ds4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , As3 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        Ds3 
	.byte		N12   , As3 
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte		N12   , As4 
	.byte		N12   , Dn5 
	.byte	W12
	.byte		        Cn4 
	.byte		N12   , Gn4 
	.byte		N12   , Cn5 
	.byte	W12
	.byte		        As3 
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        Dn4 
	.byte		N12   , As4 
	.byte		N12   , Dn5 
	.byte	W12
@ 034   ----------------------------------------
	.byte		N06   , Cn4 
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Dn4 
	.byte		N06   , As4 
	.byte		N06   , Dn5 
	.byte	W06
	.byte		        Cn4 
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Bn3 
	.byte		N06   , Fn4 
	.byte		N06   , Bn4 
	.byte	W06
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte	W72
@ 035   ----------------------------------------
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte		N06   , Gn5 
	.byte	W06
	.byte		        As4 
	.byte		N06   , Dn5 
	.byte		N06   , An5 
	.byte	W06
	.byte		        Gn4 
	.byte		N06   , Cn5 
	.byte		N06   , Gn5 
	.byte	W06
	.byte		        Fn4 
	.byte		N06   , Bn4 
	.byte		N06   , Fs5 
	.byte	W06
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte		N72   , Gn5 
	.byte	W72
@ 036   ----------------------------------------
	.byte		TIE   , Cn5 
	.byte	W24
	.byte		        Gn4 
	.byte	W24
	.byte		        En4 
	.byte	W24
	.byte		        Cn4 
	.byte	W24
@ 037   ----------------------------------------
	.byte	W96
	.byte		EOT   
	.byte		EOT   , En4 
	.byte		        Gn4 
	.byte		        Cn5 
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*mus_debug_test_mvl/mxv
	.byte		        115*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 90*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_debug_test_6:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte		N06   , En3 , v100
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        En3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		N72   , En3 
	.byte	W72
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte		N06   , Dn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Dn3 
	.byte	W06
	.byte		        Cn3 
	.byte	W06
	.byte		N72   , Dn3 
	.byte	W72
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
mus_debug_test_6_018:
	.byte		N36   , An3 , v100, gtp1
	.byte	W36
	.byte		        En3 , v100, gtp1
	.byte	W36
	.byte	W01
	.byte		N24   , An3 
	.byte	W23
	.byte	PEND
@ 019   ----------------------------------------
	.byte		N96   , Cs4 
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_debug_test_6_018
@ 027   ----------------------------------------
	.byte		N96   , Cs4 , v100
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@**************** Track 7 (Midi-Chn.8) ****************@

mus_debug_test_7:
	.byte	KEYSH , mus_debug_test_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte		N12   , As3 , v100
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		N48   , Cn4 
	.byte		N48   , Gn4 
	.byte		N48   , Cn5 
	.byte	W48
	.byte		N12   , As3 
	.byte		N12   , Dn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Cs4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Cn4 
	.byte		N12   , Gn4 
	.byte	W12
@ 029   ----------------------------------------
	.byte		        As3 
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Cn4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Dn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        As3 
	.byte		N12   , Cn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Dn4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Cn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Dn4 
	.byte		N12   , Fn4 
	.byte	W12
@ 030   ----------------------------------------
	.byte		N06   , En3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Fn3 
	.byte		N06   , Cs4 
	.byte		N06   , Fn4 
	.byte	W06
	.byte		        En3 
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte	W06
	.byte		        Dn3 
	.byte		N06   , As3 
	.byte		N06   , Dn4 
	.byte	W06
	.byte		N72   , En3 
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte	W72
@ 031   ----------------------------------------
	.byte		N06   , Cn4 
	.byte		N06   , En4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Cs4 
	.byte		N06   , Fn4 
	.byte		N06   , Cs5 
	.byte	W06
	.byte		        Cn4 
	.byte		N06   , En4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        As3 
	.byte		N06   , Dn4 
	.byte		N06   , As4 
	.byte	W06
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte	W72
@ 032   ----------------------------------------
	.byte		N12   , Gs3 
	.byte		N12   , Ds4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		N48   , As3 
	.byte		N48   , Fn4 
	.byte		N48   , As4 
	.byte	W48
	.byte		N12   , Gs3 
	.byte		N12   , Cn4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , Bn3 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , As3 
	.byte		N12   , Fn4 
	.byte	W12
@ 033   ----------------------------------------
	.byte		        Gs3 
	.byte		N12   , Ds4 
	.byte		N12   , Gs4 
	.byte	W12
	.byte		        Gn3 
	.byte		N12   , As3 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Fn3 
	.byte		N12   , Cn4 
	.byte		N12   , Fn4 
	.byte	W12
	.byte		        Ds3 
	.byte		N12   , As3 
	.byte		N12   , Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte		N12   , As4 
	.byte		N12   , Dn5 
	.byte	W12
	.byte		        Cn4 
	.byte		N12   , Gn4 
	.byte		N12   , Cn5 
	.byte	W12
	.byte		        As3 
	.byte		N12   , Fn4 
	.byte		N12   , As4 
	.byte	W12
	.byte		        Dn4 
	.byte		N12   , As4 
	.byte		N12   , Dn5 
	.byte	W12
@ 034   ----------------------------------------
	.byte		N06   , Cn4 
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Dn4 
	.byte		N06   , As4 
	.byte		N06   , Dn5 
	.byte	W06
	.byte		        Cn4 
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte	W06
	.byte		        Bn3 
	.byte		N06   , Fn4 
	.byte		N06   , Bn4 
	.byte	W06
	.byte		N72   , Cn4 
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte	W72
@ 035   ----------------------------------------
	.byte		N06   , Gn4 
	.byte		N06   , Cn5 
	.byte		N06   , Gn5 
	.byte	W06
	.byte		        As4 
	.byte		N06   , Dn5 
	.byte		N06   , An5 
	.byte	W06
	.byte		        Gn4 
	.byte		N06   , Cn5 
	.byte		N06   , Gn5 
	.byte	W06
	.byte		        Fn4 
	.byte		N06   , Bn4 
	.byte		N06   , Fs5 
	.byte	W06
	.byte		N72   , En4 
	.byte		N72   , Cn5 
	.byte		N72   , Gn5 
	.byte	W72
@ 036   ----------------------------------------
	.byte		TIE   , Cn5 
	.byte	W24
	.byte		        Gn4 
	.byte	W24
	.byte		        En4 
	.byte	W24
	.byte		        Cn4 
	.byte	W24
@ 037   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte		EOT   , En4 
	.byte		        Gn4 
	.byte		        Cn5 
	.byte	W01
@ 038   ----------------------------------------
	.byte		VOICE , 0
	.byte		        0
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_debug_test_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		        c_v+0
	.byte	FINE

@******************************************************@
	.align	2

mus_debug_test:
	.byte	7	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_debug_test_pri	@ Priority
	.byte	mus_debug_test_rev	@ Reverb.

	.word	mus_debug_test_grp

	.word	mus_debug_test_1
	.word	mus_debug_test_2
	.word	mus_debug_test_3
	.word	mus_debug_test_4
	.word	mus_debug_test_5
	.word	mus_debug_test_6
	.word	mus_debug_test_7

	.end
