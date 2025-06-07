	.include "MPlayDef.s"

	.equ	mus_dp_floaroma_day_grp, voicegroup191
	.equ	mus_dp_floaroma_day_pri, 0
	.equ	mus_dp_floaroma_day_rev, reverb_set+0
	.equ	mus_dp_floaroma_day_mvl, 110
	.equ	mus_dp_floaroma_day_key, 0
	.equ	mus_dp_floaroma_day_tbs, 1
	.equ	mus_dp_floaroma_day_exg, 1
	.equ	mus_dp_floaroma_day_cmp, 1

	.section .rodata
	.global	mus_dp_floaroma_day
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_dp_floaroma_day_1:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
@ 001   ----------------------------------------
	.byte	TEMPO , (50*mus_dp_floaroma_day_tbs+1)/2
	.byte		VOICE , 71
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		VOL   , 68*mus_dp_floaroma_day_mvl/mxv
	.byte	W72
mus_dp_floaroma_day_1_B1:
@ 002   ----------------------------------------
	.byte		VOICE , 71
	.byte		N23   , Fn4 , v100
	.byte	W24
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
@ 003   ----------------------------------------
	.byte		        Cn4 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N32   , As4 , v100, gtp3
	.byte	W12
	.byte		VOL   , 53*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        45*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        41*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        29*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        22*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        19*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
@ 004   ----------------------------------------
	.byte		        63*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   
	.byte	W24
	.byte		N11   , An4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
@ 005   ----------------------------------------
	.byte		        Cs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		N32   , As4 , v100, gtp3
	.byte	W21
	.byte		VOL   , 54*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        49*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        44*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        36*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
@ 006   ----------------------------------------
	.byte		        69*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   , Gs4 
	.byte	W12
	.byte		VOL   , 59*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        53*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        48*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        44*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        73*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W12
	.byte		N23   , Gn4 
	.byte	W12
	.byte		VOL   , 59*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        53*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        48*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        44*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        73*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W12
@ 007   ----------------------------------------
	.byte		N23   , Fs4 
	.byte	W12
	.byte		VOL   , 59*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        53*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        48*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        44*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        73*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W12
	.byte		N23   , Cs4 
	.byte	W12
	.byte		VOL   , 59*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        52*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        41*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        73*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Ds4 
	.byte	W12
@ 008   ----------------------------------------
	.byte		VOL   , 73*mus_dp_floaroma_day_mvl/mxv
	.byte		TIE   , Fn4 
	.byte	W15
	.byte		VOL   , 63*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        58*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        52*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        47*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        39*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        35*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        25*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        24*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        27*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        34*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        36*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        41*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        47*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        54*mus_dp_floaroma_day_mvl/mxv
	.byte	W07
@ 009   ----------------------------------------
	.byte	W12
	.byte		        52*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        48*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        44*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        41*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        36*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        32*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W06
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 68*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   , Cn5 
	.byte	W24
	.byte		N11   , Cs5 
	.byte	W12
@ 010   ----------------------------------------
	.byte		        As4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
@ 011   ----------------------------------------
	.byte		N44   , Cs4 , v100, gtp3
	.byte	W48
	.byte		VOICE , 48
	.byte		N11   , Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 012   ----------------------------------------
mus_dp_floaroma_day_1_012:
	.byte		N11   , Fs4 , v100
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N23   , As3 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W12
	.byte	PEND
@ 013   ----------------------------------------
	.byte		N23   , As3 
	.byte	W24
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N23   , Bn4 
	.byte	W24
	.byte		N11   , As4 
	.byte	W12
@ 014   ----------------------------------------
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
@ 015   ----------------------------------------
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		N23   , Ds5 
	.byte	W24
	.byte		N11   , Cs5 
	.byte	W12
@ 016   ----------------------------------------
	.byte		        As4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
@ 017   ----------------------------------------
	.byte		N32   , Cs4 , v100, gtp3
	.byte	W36
	.byte		        Gs4 , v100, gtp3
	.byte	W36
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_dp_floaroma_day_1_012
@ 019   ----------------------------------------
	.byte		TIE   , Cs4 , v100
	.byte	W72
@ 020   ----------------------------------------
	.byte	W36
	.byte		VOICE , 71
	.byte	W05
	.byte		EOT   
	.byte	W19
	.byte		N11   , Gs3 
	.byte	W12
	.byte	GOTO
	 .word	mus_dp_floaroma_day_1_B1
mus_dp_floaroma_day_1_B2:
@ 021   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_dp_floaroma_day_2:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 71
	.byte		BENDR , 12
	.byte		VOL   , 43*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+5
	.byte		BEND  , c_v+1
	.byte	W72
mus_dp_floaroma_day_2_B1:
@ 001   ----------------------------------------
	.byte	W02
	.byte		VOICE , 71
	.byte		N23   , Fn4 , v100
	.byte	W24
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W10
@ 002   ----------------------------------------
	.byte	W02
	.byte		        Cn4 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		N32   , As4 , v100, gtp3
	.byte	W17
	.byte		VOL   , 41*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        29*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        22*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        19*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
@ 003   ----------------------------------------
	.byte	W02
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   
	.byte	W24
	.byte		N11   , An4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W10
@ 004   ----------------------------------------
	.byte	W02
	.byte		        Cs4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		N32   , As4 , v100, gtp3
	.byte	W28
	.byte	W01
	.byte		VOL   , 36*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
@ 005   ----------------------------------------
	.byte	W02
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   , Gs4 
	.byte	W12
	.byte		VOL   , 36*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        23*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W12
	.byte		N23   , Gn4 
	.byte	W12
	.byte		VOL   , 36*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        23*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W10
@ 006   ----------------------------------------
	.byte	W02
	.byte		VOL   , 43*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   , Fs4 
	.byte	W12
	.byte		VOL   , 36*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        23*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Cs5 
	.byte	W12
	.byte		N23   , Cs4 
	.byte	W12
	.byte		VOL   , 36*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        23*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Ds4 
	.byte	W10
@ 007   ----------------------------------------
	.byte	W02
	.byte		VOL   , 43*mus_dp_floaroma_day_mvl/mxv
	.byte		TIE   , Fn4 
	.byte	W28
	.byte	W01
	.byte		VOL   , 35*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        25*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        24*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        27*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        28*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W03
	.byte		        34*mus_dp_floaroma_day_mvl/mxv
	.byte	W15
	.byte		        43*mus_dp_floaroma_day_mvl/mxv
	.byte	W02
@ 008   ----------------------------------------
	.byte	W18
	.byte		        34*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        22*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        14*mus_dp_floaroma_day_mvl/mxv
	.byte	W04
	.byte		        20*mus_dp_floaroma_day_mvl/mxv
	.byte	W01
	.byte		        31*mus_dp_floaroma_day_mvl/mxv
	.byte	W06
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 43*mus_dp_floaroma_day_mvl/mxv
	.byte		N23   , Cn5 
	.byte	W24
	.byte		N11   , Cs5 
	.byte	W10
@ 009   ----------------------------------------
	.byte	W02
	.byte		        As4 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W10
@ 010   ----------------------------------------
	.byte	W02
	.byte		N44   , Cs4 , v100, gtp3
	.byte	W48
	.byte		VOICE , 48
	.byte		N11   , Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W10
@ 011   ----------------------------------------
mus_dp_floaroma_day_2_011:
	.byte	W02
	.byte		N11   , Fs4 , v100
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N23   , As3 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W10
	.byte	PEND
@ 012   ----------------------------------------
	.byte	W02
	.byte		N23   , As3 
	.byte	W24
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N23   , Bn4 
	.byte	W24
	.byte		N11   , As4 
	.byte	W10
@ 013   ----------------------------------------
	.byte	W02
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W10
@ 014   ----------------------------------------
	.byte	W02
	.byte		        Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		N23   , Ds5 
	.byte	W24
	.byte		N11   , Cs5 
	.byte	W10
@ 015   ----------------------------------------
	.byte	W02
	.byte		        As4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W10
@ 016   ----------------------------------------
	.byte	W02
	.byte		N32   , Cs4 , v100, gtp3
	.byte	W36
	.byte		        Gs4 , v100, gtp3
	.byte	W32
	.byte	W02
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_dp_floaroma_day_2_011
@ 018   ----------------------------------------
	.byte	W02
	.byte		TIE   , Cs4 , v100
	.byte	W68
	.byte	W02
@ 019   ----------------------------------------
	.byte	W36
	.byte	W02
	.byte		VOICE , 71
	.byte	W05
	.byte		EOT   
	.byte	W19
	.byte		N09   , Gs3 
	.byte	W10
	.byte	GOTO
	 .word	mus_dp_floaroma_day_2_B1
mus_dp_floaroma_day_2_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_dp_floaroma_day_3:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		PAN   , c_v-16
	.byte		VOL   , 82*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v-16
	.byte	W14
	.byte		N32   , Fn3 , v100, gtp1
	.byte	W36
	.byte		N21   , Cs3 
	.byte	W22
mus_dp_floaroma_day_3_B1:
@ 001   ----------------------------------------
	.byte	W14
	.byte		N11   , Fn3 , v100
	.byte	W12
	.byte		N22   , Cs3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N17   , Gs2 
	.byte	W10
@ 002   ----------------------------------------
	.byte	W14
	.byte		N10   , Fs3 
	.byte	W12
	.byte		N22   , Ds3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N19   , Gs2 
	.byte	W10
@ 003   ----------------------------------------
	.byte	W14
	.byte		N10   , Gs3 
	.byte	W12
	.byte		N22   , Fs3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N21   , Cn3 
	.byte	W10
@ 004   ----------------------------------------
	.byte	W14
	.byte		N10   , Fn3 
	.byte	W12
	.byte		N21   , Cs3 
	.byte	W24
	.byte		N10   , Fn3 
	.byte	W12
	.byte		N22   , As2 
	.byte	W10
@ 005   ----------------------------------------
	.byte	W14
	.byte		N11   , Cs4 
	.byte	W12
	.byte		N22   , Gs3 
	.byte	W24
	.byte		N11   , Cs4 
	.byte	W12
	.byte		N20   , Gn3 
	.byte	W10
@ 006   ----------------------------------------
	.byte	W14
	.byte		N11   , As3 
	.byte	W12
	.byte		N22   , Fs3 
	.byte	W24
	.byte		N11   , An3 
	.byte	W12
	.byte		N16   , Fs3 
	.byte	W10
@ 007   ----------------------------------------
	.byte	W14
	.byte		N11   , Cs3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		N10   , Cs4 
	.byte	W11
	.byte		N17   , Fn4 
	.byte	W11
@ 008   ----------------------------------------
	.byte	W14
	.byte		N11   , As2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		N16   , As3 
	.byte	W10
@ 009   ----------------------------------------
	.byte	W14
	.byte		N11   , As2 
	.byte	W12
	.byte		N19   , Cs3 
	.byte	W24
	.byte		N10   , Gs2 
	.byte	W12
	.byte		N15   , Cn3 
	.byte	W10
@ 010   ----------------------------------------
	.byte	W14
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N20   , Fn3 
	.byte	W44
	.byte	W02
@ 011   ----------------------------------------
	.byte		N11   , Ds2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
@ 012   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
@ 013   ----------------------------------------
	.byte		        Ds2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 014   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 015   ----------------------------------------
	.byte		        Ds2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
@ 016   ----------------------------------------
	.byte		        Cs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        As1 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
@ 017   ----------------------------------------
	.byte		        Ds2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
@ 018   ----------------------------------------
	.byte		        Cs3 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
@ 019   ----------------------------------------
	.byte		        Gs2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Ds1 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte	GOTO
	 .word	mus_dp_floaroma_day_3_B1
mus_dp_floaroma_day_3_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_dp_floaroma_day_4:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte		VOL   , 97*mus_dp_floaroma_day_mvl/mxv
	.byte	W15
	.byte		N32   , Gs3 , v100
	.byte	W36
	.byte		N20   , Fn3 
	.byte	W21
mus_dp_floaroma_day_4_B1:
@ 001   ----------------------------------------
	.byte	W15
	.byte		N11   , Gs3 , v100
	.byte	W12
	.byte		N22   , Fn3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N17   , Cs3 
	.byte	W09
@ 002   ----------------------------------------
	.byte	W15
	.byte		N10   , Gs3 
	.byte	W12
	.byte		N22   , Fs3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N19   , Cn3 
	.byte	W09
@ 003   ----------------------------------------
	.byte	W15
	.byte		N10   , Cn4 
	.byte	W12
	.byte		N22   , Gs3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N21   , Ds3 
	.byte	W09
@ 004   ----------------------------------------
	.byte	W15
	.byte		N10   , Gs3 
	.byte	W12
	.byte		N21   , Fn3 
	.byte	W24
	.byte		N10   , As3 
	.byte	W12
	.byte		N22   , Cs3 
	.byte	W09
@ 005   ----------------------------------------
	.byte	W15
	.byte		N11   , Fn4 
	.byte	W12
	.byte		N22   , Cs4 
	.byte	W24
	.byte		N11   , En4 
	.byte	W12
	.byte		N20   , As3 
	.byte	W09
@ 006   ----------------------------------------
	.byte	W15
	.byte		N11   , Cs4 
	.byte	W12
	.byte		N22   , As3 
	.byte	W24
	.byte		N11   , Cs4 
	.byte	W12
	.byte		N16   , An3 
	.byte	W09
@ 007   ----------------------------------------
	.byte	W15
	.byte		N11   , Fn3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		N10   , Fn4 
	.byte	W11
	.byte		N17   , Gs4 
	.byte	W10
@ 008   ----------------------------------------
	.byte	W15
	.byte		N11   , Cs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		N16   , Cs4 
	.byte	W09
@ 009   ----------------------------------------
	.byte	W15
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N19   , Ds3 
	.byte	W24
	.byte		N10   , Cn3 
	.byte	W12
	.byte		N15   , Ds3 
	.byte	W09
@ 010   ----------------------------------------
	.byte	W15
	.byte		N11   , Fn3 
	.byte	W12
	.byte		N20   , Gs3 
	.byte	W44
	.byte	W01
@ 011   ----------------------------------------
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N05   , As2 
	.byte	W12
	.byte		N11   , Cn3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N05   , Fs2 
	.byte	W06
@ 012   ----------------------------------------
	.byte	W06
	.byte		N11   , Gs2 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		N05   , Cn3 
	.byte	W12
	.byte		N11   , Dn3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N05   , Dn2 
	.byte	W06
@ 013   ----------------------------------------
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N05   , Fs2 
	.byte	W06
@ 014   ----------------------------------------
	.byte	W06
	.byte		N11   , Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N05   , Ds3 
	.byte	W12
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N05   , As3 
	.byte	W06
@ 015   ----------------------------------------
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W24
	.byte		        Cn3 
	.byte	W12
	.byte		        Fs3 
	.byte	W18
@ 016   ----------------------------------------
	.byte	W06
	.byte		        Gs2 
	.byte	W12
	.byte		        Fn3 
	.byte	W24
	.byte		        Fn2 
	.byte	W12
	.byte		        Dn3 
	.byte	W18
@ 017   ----------------------------------------
	.byte	W06
	.byte		        Fs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N05   
	.byte	W12
	.byte		N11   , Ds2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N05   , Ds3 
	.byte	W06
@ 018   ----------------------------------------
	.byte	W06
	.byte		N11   , An2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		N05   , Cs1 
	.byte	W06
@ 019   ----------------------------------------
	.byte	W06
	.byte		N11   , Ds2 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
	.byte		        Cs1 
	.byte	W12
	.byte		        Ds2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N05   , Gs2 
	.byte	W06
	.byte	GOTO
	 .word	mus_dp_floaroma_day_4_B1
mus_dp_floaroma_day_4_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_dp_floaroma_day_5:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 32
	.byte		VOL   , 127*mus_dp_floaroma_day_mvl/mxv
	.byte		        127*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N32   , Cs1 , v100, gtp3
	.byte	W36
	.byte		        Cs1 , v100, gtp3
	.byte	W36
mus_dp_floaroma_day_5_B1:
@ 001   ----------------------------------------
	.byte		VOICE , 32
	.byte		VOL   , 125*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N32   , Cs1 , v100, gtp3
	.byte	W36
	.byte		        Cs1 , v100, gtp3
	.byte	W36
@ 002   ----------------------------------------
	.byte		        Gs1 , v100, gtp3
	.byte	W36
	.byte		        Gs1 , v100, gtp3
	.byte	W36
@ 003   ----------------------------------------
	.byte		        Gs1 , v100, gtp3
	.byte	W36
	.byte		        Cn2 , v100, gtp3
	.byte	W36
@ 004   ----------------------------------------
	.byte		        Cs2 , v100, gtp3
	.byte	W36
	.byte		        Cs1 , v100, gtp3
	.byte	W36
@ 005   ----------------------------------------
	.byte		        Fn1 , v100, gtp3
	.byte	W36
	.byte		        En1 , v100, gtp3
	.byte	W36
@ 006   ----------------------------------------
	.byte		        Ds1 , v100, gtp3
	.byte	W36
	.byte		        Fs1 , v100, gtp3
	.byte	W36
@ 007   ----------------------------------------
	.byte		N68   , Gs1 , v100, gtp3
	.byte	W72
@ 008   ----------------------------------------
	.byte		        Gn1 , v100, gtp3
	.byte	W72
@ 009   ----------------------------------------
	.byte		N32   , Ds1 , v100, gtp3
	.byte	W36
	.byte		        Gs1 , v100, gtp3
	.byte	W36
@ 010   ----------------------------------------
	.byte		        Cs1 , v100, gtp3
	.byte	W36
	.byte		N11   , Gs1 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
@ 011   ----------------------------------------
	.byte		VOICE , 5
	.byte		PAN   , c_v-55
	.byte		VOL   , 64*mus_dp_floaroma_day_mvl/mxv
	.byte		N11   , Ds3 , v056
	.byte	W12
	.byte		N03   , Ds5 
	.byte	W04
	.byte		        Fn5 
	.byte	W04
	.byte		        Fs5 
	.byte	W04
	.byte		N11   , Gs5 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N03   , Fs4 
	.byte	W04
	.byte		        Gs4 
	.byte	W04
	.byte		        As4 
	.byte	W04
	.byte		N11   , Cn5 
	.byte	W12
@ 012   ----------------------------------------
	.byte		        Cn3 
	.byte	W12
	.byte		N03   , Cn5 
	.byte	W04
	.byte		        Cs5 
	.byte	W04
	.byte		        Ds5 
	.byte	W04
	.byte		N11   , Fn5 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		N03   , Fn5 
	.byte	W04
	.byte		        Fs5 
	.byte	W04
	.byte		        Gs5 
	.byte	W04
	.byte		N11   , As5 
	.byte	W12
@ 013   ----------------------------------------
	.byte		        As3 
	.byte	W12
	.byte		N03   , As4 
	.byte	W04
	.byte		        Cn5 
	.byte	W04
	.byte		        Cs5 
	.byte	W04
	.byte		N11   , Ds5 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N03   , Ds5 
	.byte	W04
	.byte		        Fn5 
	.byte	W04
	.byte		        Fs5 
	.byte	W04
	.byte		N05   , Gs5 
	.byte	W06
	.byte		        Fs5 
	.byte	W06
@ 014   ----------------------------------------
	.byte		        Fn5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Gs4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		N03   , As5 
	.byte	W04
	.byte		        Fn5 
	.byte	W04
	.byte		        Cs5 
	.byte	W04
	.byte		        As4 
	.byte	W04
	.byte		        Fn4 
	.byte	W04
	.byte		        Cs4 
	.byte	W04
	.byte		        As3 
	.byte	W04
	.byte		        Fn3 
	.byte	W04
	.byte		        Cs3 
	.byte	W04
@ 015   ----------------------------------------
	.byte		N05   , Ds3 
	.byte	W06
	.byte		        Fs3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        As2 
	.byte	W06
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N05   , Cn3 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Cn3 
	.byte	W06
	.byte		        Gs2 
	.byte	W06
	.byte		N11   , Cn3 
	.byte	W12
@ 016   ----------------------------------------
	.byte		N05   , Cs3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		N03   , Fn4 
	.byte	W04
	.byte		        Gs4 
	.byte	W04
	.byte		        Cs5 
	.byte	W04
	.byte		N05   , Dn3 
	.byte	W06
	.byte		        Fn3 
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        As3 
	.byte	W06
	.byte		N03   , Dn4 
	.byte	W04
	.byte		        Fn4 
	.byte	W04
	.byte		        As4 
	.byte	W04
@ 017   ----------------------------------------
	.byte		N05   , Ds5 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Fs4 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Gs4 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Gs4 
	.byte	W06
	.byte		        Fs4 
	.byte	W06
@ 018   ----------------------------------------
	.byte		N32   , An4 , v056, gtp3
	.byte	W36
	.byte		        An4 , v056, gtp3
	.byte	W36
@ 019   ----------------------------------------
	.byte		        Gs4 , v056, gtp3
	.byte	W72
	.byte	GOTO
	 .word	mus_dp_floaroma_day_5_B1
mus_dp_floaroma_day_5_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_dp_floaroma_day_6:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte		VOL   , 97*mus_dp_floaroma_day_mvl/mxv
	.byte	W13
	.byte		N32   , Cs3 , v100, gtp2
	.byte	W36
	.byte		N22   , Gs2 
	.byte	W23
mus_dp_floaroma_day_6_B1:
@ 001   ----------------------------------------
	.byte	W13
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		N22   , Gs2 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N17   , Fn2 
	.byte	W11
@ 002   ----------------------------------------
	.byte	W13
	.byte		N10   , Ds3 
	.byte	W12
	.byte		N22   , Cn3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N19   , Fs2 
	.byte	W11
@ 003   ----------------------------------------
	.byte	W13
	.byte		N10   , Fs3 
	.byte	W12
	.byte		N22   , Ds3 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N21   , Gs2 
	.byte	W11
@ 004   ----------------------------------------
	.byte	W13
	.byte		N10   , Cs3 
	.byte	W12
	.byte		N21   , Gs2 
	.byte	W24
	.byte		N10   , Cs3 
	.byte	W12
	.byte		N22   , Gs2 
	.byte	W11
@ 005   ----------------------------------------
	.byte	W13
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N22   , Fn3 
	.byte	W24
	.byte		N11   , As3 
	.byte	W12
	.byte		N20   , En3 
	.byte	W11
@ 006   ----------------------------------------
	.byte	W13
	.byte		N11   , Fs3 
	.byte	W12
	.byte		N22   , Ds3 
	.byte	W24
	.byte		N11   , Fs3 
	.byte	W12
	.byte		N16   , Cs3 
	.byte	W11
@ 007   ----------------------------------------
	.byte	W13
	.byte		N11   , Gs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		N10   , Gs3 
	.byte	W11
	.byte		N17   , Cs4 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W13
	.byte		N10   , Gn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		N16   , Gn3 
	.byte	W11
@ 009   ----------------------------------------
	.byte	W13
	.byte		N10   , Fs2 
	.byte	W12
	.byte		N19   , As2 
	.byte	W24
	.byte		N10   , Fs2 
	.byte	W12
	.byte		N15   , Gs2 
	.byte	W11
@ 010   ----------------------------------------
	.byte	W13
	.byte		N11   
	.byte	W12
	.byte		N20   , Cs3 
	.byte	W44
	.byte	W03
@ 011   ----------------------------------------
	.byte	W72
@ 012   ----------------------------------------
	.byte	W72
@ 013   ----------------------------------------
	.byte	W72
@ 014   ----------------------------------------
	.byte	W72
@ 015   ----------------------------------------
	.byte	W72
@ 016   ----------------------------------------
	.byte	W72
@ 017   ----------------------------------------
	.byte	W72
@ 018   ----------------------------------------
	.byte	W72
@ 019   ----------------------------------------
	.byte	W72
	.byte	GOTO
	 .word	mus_dp_floaroma_day_6_B1
mus_dp_floaroma_day_6_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

mus_dp_floaroma_day_7:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		PAN   , c_v-16
	.byte		VOL   , 82*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v-16
	.byte	W72
mus_dp_floaroma_day_7_B1:
@ 001   ----------------------------------------
	.byte	W12
	.byte		N11   , Gs2 , v100
	.byte	W12
	.byte		N22   , Fn2 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N17   , Cs2 
	.byte	W12
@ 002   ----------------------------------------
	.byte	W12
	.byte		N10   , Cn3 
	.byte	W12
	.byte		N22   , Gs2 
	.byte	W24
	.byte		N10   
	.byte	W12
	.byte		N19   , Ds2 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N22   , Cn3 
	.byte	W24
	.byte		N11   
	.byte	W12
	.byte		N22   , Fs2 
	.byte	W12
@ 004   ----------------------------------------
	.byte	W12
	.byte		N11   , Gs2 
	.byte	W12
	.byte		N22   , Fn2 
	.byte	W24
	.byte		N10   , Gs2 
	.byte	W12
	.byte		N22   , Fn2 
	.byte	W12
@ 005   ----------------------------------------
	.byte	W12
	.byte		N11   , Fn3 
	.byte	W12
	.byte		N22   , Cs3 
	.byte	W24
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N20   , Cs3 
	.byte	W12
@ 006   ----------------------------------------
	.byte	W12
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N22   , Cs3 
	.byte	W24
	.byte		N11   
	.byte	W12
	.byte		N16   , An2 
	.byte	W12
@ 007   ----------------------------------------
	.byte	W12
	.byte		N11   , Fn2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N10   , Fn3 
	.byte	W11
	.byte		N17   , Gs3 
	.byte	W13
@ 008   ----------------------------------------
	.byte	W12
	.byte		N11   , En2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N16   , En3 
	.byte	W12
@ 009   ----------------------------------------
	.byte	W12
	.byte		N11   , Ds2 
	.byte	W12
	.byte		N19   , Fs2 
	.byte	W24
	.byte		N11   , Ds2 
	.byte	W12
	.byte		N15   , Fs2 
	.byte	W12
@ 010   ----------------------------------------
	.byte	W12
	.byte		N11   , Fn2 
	.byte	W12
	.byte		N20   , Gs2 
	.byte	W48
@ 011   ----------------------------------------
	.byte		VOL   , 56*mus_dp_floaroma_day_mvl/mxv
	.byte		N32   , Ds2 , v100, gtp3
	.byte	W36
	.byte		        Gs2 , v100, gtp3
	.byte	W36
@ 012   ----------------------------------------
mus_dp_floaroma_day_7_012:
	.byte		N32   , Fn2 , v100, gtp3
	.byte	W36
	.byte		        As2 , v100, gtp3
	.byte	W36
	.byte	PEND
@ 013   ----------------------------------------
mus_dp_floaroma_day_7_013:
	.byte		N32   , Ds2 , v100, gtp3
	.byte	W36
	.byte		        Gs2 , v100, gtp3
	.byte	W36
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_dp_floaroma_day_7_012
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_dp_floaroma_day_7_013
@ 016   ----------------------------------------
	.byte		N32   , Cs2 , v100, gtp3
	.byte	W36
	.byte		        As1 , v100, gtp3
	.byte	W36
@ 017   ----------------------------------------
	.byte		        Ds2 , v100, gtp3
	.byte	W36
	.byte		        Gs1 , v100, gtp3
	.byte	W36
@ 018   ----------------------------------------
	.byte		        Cs3 , v100, gtp3
	.byte	W36
	.byte		        An2 , v100, gtp3
	.byte	W36
@ 019   ----------------------------------------
	.byte		        Gs2 , v100, gtp3
	.byte	W36
	.byte		        Gs1 , v100, gtp3
	.byte	W36
	.byte	GOTO
	 .word	mus_dp_floaroma_day_7_B1
mus_dp_floaroma_day_7_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

mus_dp_floaroma_day_8:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		VOL   , 82*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte	W12
	.byte		N32   , Gs2 , v100, gtp3
	.byte	W36
	.byte		N23   , Fn2 
	.byte	W24
mus_dp_floaroma_day_8_B1:
@ 001   ----------------------------------------
	.byte		VOICE , 2
	.byte		VOL   , 48*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+40
	.byte		N01   , Gs4 , v100
	.byte	W01
	.byte		        As4 , v064
	.byte	W01
	.byte		        Gs4 
	.byte	W01
	.byte		        As4 
	.byte	W01
	.byte		        Gs4 
	.byte	W02
	.byte		        As4 
	.byte	W01
	.byte		        Gs4 
	.byte	W01
	.byte		        As4 
	.byte	W01
	.byte		N02   , Gs4 
	.byte	W03
	.byte		N11   , Fn5 , v100
	.byte	W12
	.byte		        Fn4 
	.byte	W12
	.byte		        Gs4 
	.byte	W12
	.byte		N01   , Cs5 
	.byte	W01
	.byte		        Ds5 , v064
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Ds5 
	.byte	W01
	.byte		        Cs5 
	.byte	W02
	.byte		        Ds5 
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Ds5 
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Ds5 
	.byte	W02
	.byte		        Cs5 
	.byte	W01
	.byte		        Ds5 
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Ds5 
	.byte	W01
	.byte		N07   , Cs5 
	.byte	W08
@ 002   ----------------------------------------
	.byte		N11   , Cn5 , v100
	.byte	W12
	.byte		N05   , Cs5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N01   , As5 
	.byte	W01
	.byte		        Cn6 , v064
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W02
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W02
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W02
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Cn6 
	.byte	W02
	.byte		N10   , As5 
	.byte	W12
@ 003   ----------------------------------------
	.byte		N11   , Cn6 , v100
	.byte	W12
	.byte		N02   
	.byte	W03
	.byte		        Cs6 
	.byte	W03
	.byte		        Cn6 
	.byte	W03
	.byte		        As5 
	.byte	W03
	.byte		N01   , An5 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        An5 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		N07   , An5 
	.byte	W08
	.byte		N11   , Gs5 
	.byte	W12
	.byte		N02   
	.byte	W03
	.byte		        As5 
	.byte	W03
	.byte		        Gs5 
	.byte	W03
	.byte		        Fs5 
	.byte	W03
	.byte		N01   , Cn5 , v076
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Cn5 
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		N07   , Cn5 
	.byte	W08
@ 004   ----------------------------------------
	.byte		N11   , Cs5 , v100
	.byte	W12
	.byte		N02   , Fs5 
	.byte	W03
	.byte		        Fn5 
	.byte	W03
	.byte		        En5 
	.byte	W03
	.byte		        Fn5 
	.byte	W03
	.byte		N01   , Cs6 , v076
	.byte	W01
	.byte		        Ds6 
	.byte	W01
	.byte		        Cs6 
	.byte	W01
	.byte		        Ds6 
	.byte	W01
	.byte		N07   , Cs6 
	.byte	W08
	.byte		N11   , As5 , v100
	.byte	W12
	.byte		N01   , Gs5 
	.byte	W01
	.byte		        As5 , v064
	.byte	W01
	.byte		        Gs5 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Gs5 
	.byte	W02
	.byte		        As5 
	.byte	W01
	.byte		        Gs5 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        Gs5 
	.byte	W01
	.byte		        As5 
	.byte	W02
	.byte		N08   , Gs5 
	.byte	W12
@ 005   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 90*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+24
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		VOICE , 2
	.byte		VOL   , 48*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+41
	.byte		N01   , Cs6 
	.byte	W01
	.byte		        Ds6 , v064
	.byte	W01
	.byte		        Cs6 
	.byte	W01
	.byte		        Ds6 
	.byte	W01
	.byte		N04   , Cs6 
	.byte	W08
	.byte		VOICE , 45
	.byte		VOL   , 90*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+25
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		VOICE , 2
	.byte		VOL   , 49*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+41
	.byte		N01   , Cs6 
	.byte	W01
	.byte		        Ds6 , v064
	.byte	W01
	.byte		        Cs6 
	.byte	W01
	.byte		        Ds6 
	.byte	W01
	.byte		N04   , Cs6 
	.byte	W08
@ 006   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 90*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+29
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		VOICE , 2
	.byte		VOL   , 54*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+41
	.byte		N01   , Cs6 
	.byte	W01
	.byte		        Ds6 , v064
	.byte	W01
	.byte		N04   , Cs6 
	.byte	W04
	.byte		VOICE , 48
	.byte	W06
	.byte		N23   , Fs3 , v100
	.byte	W24
	.byte		N11   , An3 
	.byte	W12
@ 007   ----------------------------------------
	.byte		        Gs3 
	.byte	W12
	.byte		N32   , Cs3 , v100, gtp3
	.byte	W36
	.byte		N11   , Gs3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
@ 008   ----------------------------------------
	.byte		        Gn3 
	.byte	W12
	.byte		N32   , Cs3 , v100, gtp3
	.byte	W36
	.byte		N11   , Gn3 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
@ 009   ----------------------------------------
	.byte		        Fs3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		N23   , Cs3 
	.byte	W24
	.byte		N11   , Cn3 
	.byte	W12
@ 010   ----------------------------------------
	.byte		N23   , Cs3 
	.byte	W24
	.byte		N11   , Fn2 
	.byte	W12
	.byte		N32   , Gs2 , v100, gtp3
	.byte	W36
@ 011   ----------------------------------------
	.byte		PAN   , c_v+21
	.byte		N32   , As2 , v100, gtp3
	.byte	W36
	.byte		N23   , Cn3 
	.byte	W24
	.byte		N11   , As2 
	.byte	W12
@ 012   ----------------------------------------
	.byte		N32   , Gs2 , v100, gtp3
	.byte	W36
	.byte		N23   , Dn3 
	.byte	W24
	.byte		N11   , Fn3 
	.byte	W12
@ 013   ----------------------------------------
	.byte		N32   , Ds3 , v100, gtp3
	.byte	W36
	.byte		N23   , Fs3 
	.byte	W24
	.byte		N11   , Gs3 
	.byte	W12
@ 014   ----------------------------------------
	.byte		N32   , Bn2 , v100, gtp3
	.byte	W36
	.byte		        Fn3 , v100, gtp3
	.byte	W36
@ 015   ----------------------------------------
	.byte		N11   , Ds4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
	.byte		        As3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
@ 016   ----------------------------------------
	.byte		        Fn3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
@ 017   ----------------------------------------
	.byte		        As3 
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N23   , Cs3 
	.byte	W24
	.byte		N11   , Ds3 
	.byte	W12
@ 018   ----------------------------------------
	.byte		N32   , Fs3 , v100, gtp3
	.byte	W36
	.byte		N23   , Cs3 
	.byte	W24
	.byte		N11   , Ds3 
	.byte	W12
@ 019   ----------------------------------------
	.byte		N32   , Fn3 , v100, gtp3
	.byte	W36
	.byte		VOICE , 2
	.byte		PAN   , c_v+48
	.byte		N05   , Gs2 
	.byte	W06
	.byte		        Ds3 
	.byte	W06
	.byte		        Fs3 
	.byte	W06
	.byte		        Gs3 
	.byte	W06
	.byte		        Ds4 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte	GOTO
	 .word	mus_dp_floaroma_day_8_B1
mus_dp_floaroma_day_8_B2:
@ 020   ----------------------------------------
	.byte	FINE

@**************** Track 9 (Midi-Chn.9) ****************@

mus_dp_floaroma_day_9:
	.byte	KEYSH , mus_dp_floaroma_day_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 82*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte	W72
mus_dp_floaroma_day_9_B1:
@ 001   ----------------------------------------
	.byte	W72
@ 002   ----------------------------------------
	.byte	W72
@ 003   ----------------------------------------
	.byte	W72
@ 004   ----------------------------------------
	.byte	W72
@ 005   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 90*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+24
	.byte	W06
	.byte		N11   , Gs3 , v100
	.byte	W12
	.byte		        Fn4 
	.byte	W06
	.byte		VOL   , 48*mus_dp_floaroma_day_mvl/mxv
	.byte	W12
	.byte		        90*mus_dp_floaroma_day_mvl/mxv
	.byte	W06
	.byte		N11   , Gn3 
	.byte	W12
	.byte		        Gn4 
	.byte	W06
	.byte		VOL   , 49*mus_dp_floaroma_day_mvl/mxv
	.byte	W12
@ 006   ----------------------------------------
	.byte		VOICE , 45
	.byte		VOL   , 90*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+29
	.byte	W06
	.byte		N11   , Fs3 
	.byte	W12
	.byte		N05   , Fs4 
	.byte	W06
	.byte		VOICE , 48
	.byte		VOL   , 54*mus_dp_floaroma_day_mvl/mxv
	.byte		PAN   , c_v+41
	.byte		N11   , As3 
	.byte	W48
@ 007   ----------------------------------------
	.byte	W72
@ 008   ----------------------------------------
	.byte	W72
@ 009   ----------------------------------------
	.byte	W72
@ 010   ----------------------------------------
	.byte	W72
@ 011   ----------------------------------------
	.byte	W72
@ 012   ----------------------------------------
	.byte	W72
@ 013   ----------------------------------------
	.byte	W72
@ 014   ----------------------------------------
	.byte	W72
@ 015   ----------------------------------------
	.byte	W72
@ 016   ----------------------------------------
	.byte	W72
@ 017   ----------------------------------------
	.byte	W72
@ 018   ----------------------------------------
	.byte	W72
@ 019   ----------------------------------------
	.byte	W72
	.byte	GOTO
	 .word	mus_dp_floaroma_day_9_B1
mus_dp_floaroma_day_9_B2:
@ 020   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

mus_dp_floaroma_day:
	.byte	9	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_dp_floaroma_day_pri	@ Priority
	.byte	mus_dp_floaroma_day_rev	@ Reverb.

	.word	mus_dp_floaroma_day_grp

	.word	mus_dp_floaroma_day_1
	.word	mus_dp_floaroma_day_2
	.word	mus_dp_floaroma_day_3
	.word	mus_dp_floaroma_day_4
	.word	mus_dp_floaroma_day_5
	.word	mus_dp_floaroma_day_6
	.word	mus_dp_floaroma_day_7
	.word	mus_dp_floaroma_day_8
	.word	mus_dp_floaroma_day_9

	.end
