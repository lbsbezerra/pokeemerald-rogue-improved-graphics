	.include "MPlayDef.s"

	.equ	mus_pl_distortion_world_grp, voicegroup191
	.equ	mus_pl_distortion_world_pri, 0
	.equ	mus_pl_distortion_world_rev, reverb_set+0
	.equ	mus_pl_distortion_world_mvl, 105
	.equ	mus_pl_distortion_world_key, 0
	.equ	mus_pl_distortion_world_tbs, 1
	.equ	mus_pl_distortion_world_exg, 1
	.equ	mus_pl_distortion_world_cmp, 1

	.section .rodata
	.global	mus_pl_distortion_world
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_pl_distortion_world_1:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , (120*mus_pl_distortion_world_tbs+1)/2
	.byte		VOICE , 77
	.byte		BENDR , 12
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+8
	.byte		        c_v+8
	.byte		TIE   , Fs2 , v056
	.byte	W05
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        84*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte	W14
	.byte		BEND  , c_v-1
	.byte	W06
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W04
	.byte		        c_v-7
	.byte	W02
	.byte		        c_v-8
	.byte	W04
	.byte		        c_v-8
	.byte	W02
	.byte		        c_v-9
	.byte	W04
	.byte		        c_v-9
	.byte	W02
	.byte		        c_v-10
	.byte	W04
	.byte		        c_v-10
	.byte	W02
	.byte		        c_v-11
	.byte	W04
	.byte		        c_v-12
	.byte	W02
	.byte		        c_v-13
	.byte	W04
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v-15
	.byte	W04
@ 001   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W02
	.byte		BEND  , c_v-16
	.byte	W03
	.byte		PAN   , c_v-1
	.byte		        c_v-1
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W06
	.byte		        c_v-17
	.byte	W04
	.byte		        c_v-18
	.byte	W02
	.byte		        c_v-19
	.byte	W04
	.byte		        c_v-19
	.byte	W02
	.byte		        c_v-20
	.byte	W04
	.byte		        c_v-21
	.byte	W02
	.byte		        c_v-22
	.byte	W06
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-25
	.byte	W04
	.byte		PAN   , c_v-2
	.byte		        c_v-2
	.byte		BEND  , c_v-25
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		PAN   , c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		BEND  , c_v-27
	.byte	W02
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-28
	.byte	W05
	.byte		PAN   , c_v-4
	.byte		        c_v-4
	.byte	W01
	.byte		BEND  , c_v-29
	.byte	W02
	.byte		        c_v-29
	.byte	W04
	.byte		        c_v-31
	.byte	W02
	.byte		        c_v-32
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-33
	.byte	W04
	.byte		        c_v-34
	.byte	W02
	.byte		        c_v-36
	.byte	W03
	.byte		PAN   , c_v-6
	.byte		        c_v-6
	.byte	W01
	.byte		BEND  , c_v-36
	.byte	W02
	.byte		        c_v-37
	.byte	W04
@ 002   ----------------------------------------
	.byte		PAN   , c_v-7
	.byte		        c_v-7
	.byte		BEND  , c_v-38
	.byte	W02
	.byte		        c_v-40
	.byte	W04
	.byte		        c_v-41
	.byte	W02
	.byte		        c_v-43
	.byte	W04
	.byte		        c_v-44
	.byte	W02
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-50
	.byte	W04
	.byte		PAN   , c_v-11
	.byte		        c_v-11
	.byte		BEND  , c_v-52
	.byte	W02
	.byte		        c_v-53
	.byte	W04
	.byte		        c_v-55
	.byte	W02
	.byte		        c_v-57
	.byte	W04
	.byte		        c_v-58
	.byte	W02
	.byte		        c_v-59
	.byte	W04
	.byte		        c_v-61
	.byte	W02
	.byte		        c_v-63
	.byte	W04
	.byte		        c_v-64
	.byte	W12
	.byte		PAN   , c_v-12
	.byte		        c_v-12
	.byte	W06
	.byte		VOL   , 84*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        80*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        74*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 003   ----------------------------------------
	.byte		PAN   , c_v-13
	.byte		        c_v-13
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        44*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-17
	.byte		        c_v-17
	.byte		VOL   , 27*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-18
	.byte		        c_v-18
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-19
	.byte		        c_v-19
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-20
	.byte		        c_v-20
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-22
	.byte		        c_v-22
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-23
	.byte		        c_v-23
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-25
	.byte		        c_v-25
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-27
	.byte		        c_v-27
	.byte	W05
	.byte		        c_v-29
	.byte		        c_v-29
	.byte	W07
	.byte		        c_v-32
	.byte		        c_v-32
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 004   ----------------------------------------
	.byte	W24
	.byte		BEND  , c_v+0
	.byte	W66
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W06
@ 005   ----------------------------------------
	.byte		VOICE , 78
	.byte		PAN   , c_v+16
	.byte		N23   , Bn3 , v100
	.byte	W06
	.byte		PAN   , c_v+18
	.byte	W05
	.byte		        c_v+24
	.byte	W01
	.byte		VOL   , 7*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        13*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+30
	.byte	W07
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte		N23   , En4 
	.byte	W05
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        29*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		N23   
	.byte	W11
	.byte		PAN   , c_v+32
	.byte	W06
	.byte		        c_v+30
	.byte	W07
	.byte		N23   , Fs4 
	.byte	W24
@ 006   ----------------------------------------
	.byte		PAN   , c_v+27
	.byte		N23   
	.byte	W17
	.byte		PAN   , c_v+24
	.byte	W07
	.byte		        c_v+21
	.byte		TIE   , An4 
	.byte	W17
	.byte		PAN   , c_v+18
	.byte	W07
	.byte		        c_v+15
	.byte	W04
	.byte		        c_v+12
	.byte	W07
	.byte		        c_v+9
	.byte	W06
	.byte		        c_v+6
	.byte	W11
	.byte		        c_v+0
	.byte	W13
	.byte		        c_v-2
	.byte	W07
@ 007   ----------------------------------------
	.byte		        c_v-5
	.byte	W04
	.byte		        c_v-8
	.byte	W13
	.byte		        c_v-11
	.byte	W11
	.byte		        c_v-14
	.byte	W07
	.byte		        c_v-17
	.byte	W13
	.byte		        c_v-20
	.byte	W11
	.byte		        c_v-23
	.byte	W24
	.byte		        c_v-26
	.byte	W13
@ 008   ----------------------------------------
	.byte	W04
	.byte		        c_v-29
	.byte	W19
	.byte		EOT   
	.byte	W01
	.byte		TIE   , Bn4 
	.byte	W32
	.byte	W03
	.byte		PAN   , c_v-26
	.byte	W17
	.byte		        c_v-23
	.byte	W13
	.byte		        c_v-20
	.byte	W07
@ 009   ----------------------------------------
	.byte		        c_v-17
	.byte	W11
	.byte		        c_v-14
	.byte	W13
	.byte		        c_v-11
	.byte	W04
	.byte		        c_v-5
	.byte	W07
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v+6
	.byte	W11
	.byte		        c_v+12
	.byte	W07
	.byte		        c_v+15
	.byte	W13
	.byte		        c_v+18
	.byte	W11
	.byte		        c_v+21
	.byte	W06
	.byte		        c_v+24
	.byte	W07
@ 010   ----------------------------------------
	.byte		        c_v+27
	.byte	W04
	.byte		        c_v+30
	.byte	W13
	.byte		        c_v+32
	.byte	W42
	.byte		        c_v+30
	.byte	W06
	.byte		        c_v+27
	.byte	W18
	.byte		        c_v+24
	.byte	W06
	.byte		        c_v+21
	.byte	W06
	.byte		EOT   
	.byte	W01
@ 011   ----------------------------------------
	.byte		PAN   , c_v+18
	.byte		TIE   , Cs5 
	.byte	W04
	.byte		PAN   , c_v+9
	.byte	W13
	.byte		        c_v+3
	.byte	W11
	.byte		        c_v+0
	.byte	W07
	.byte		        c_v-5
	.byte	W13
	.byte		        c_v-8
	.byte	W11
	.byte		        c_v-11
	.byte	W13
	.byte		        c_v-14
	.byte	W24
@ 012   ----------------------------------------
	.byte	W17
	.byte		        c_v-17
	.byte	W18
	.byte		        c_v-20
	.byte	W17
	.byte		        c_v-17
	.byte	W24
	.byte		        c_v-23
	.byte	W20
@ 013   ----------------------------------------
	.byte	W04
	.byte		        c_v-20
	.byte	W13
	.byte		        c_v-11
	.byte	W11
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-5
	.byte	W06
	.byte		        c_v+0
	.byte	W18
	.byte		        c_v+9
	.byte	W06
	.byte		        c_v+12
	.byte	W07
	.byte		        c_v+15
	.byte	W11
	.byte		        c_v+18
	.byte	W06
	.byte		        c_v+21
	.byte	W07
@ 014   ----------------------------------------
	.byte	W04
	.byte		        c_v+24
	.byte	W13
	.byte		        c_v+27
	.byte	W30
	.byte	W01
	.byte		        c_v+30
	.byte	W48
@ 015   ----------------------------------------
	.byte		        c_v+27
	.byte	W04
	.byte		        c_v+24
	.byte	W07
	.byte		        c_v+21
	.byte	W06
	.byte		        c_v+18
	.byte	W01
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte	W10
	.byte		PAN   , c_v+15
	.byte	W01
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        19*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v+12
	.byte	W07
	.byte		        c_v+9
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		PAN   , c_v+6
	.byte	W01
	.byte		VOL   , 7*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		PAN   , c_v+3
	.byte	W01
	.byte		VOL   , 4*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		PAN   , c_v+0
	.byte	W13
	.byte		        c_v-5
	.byte	W07
@ 016   ----------------------------------------
	.byte		VOICE , 46
	.byte		PAN   , c_v-7
	.byte		VOL   , 76*mus_pl_distortion_world_mvl/mxv
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Cs3 , v100, gtp1
	.byte	W24
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W48
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W24
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N23   , Bn2 
	.byte	W24
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W36
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
mus_pl_distortion_world_1_B1:
@ 031   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-7
	.byte	W24
	.byte		N12   , Cs4 , v088
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		N12   
	.byte	W12
@ 032   ----------------------------------------
	.byte		TIE   , Cs4 
	.byte	W96
@ 033   ----------------------------------------
	.byte	W48
	.byte		EOT   
	.byte		N12   
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		        Cs4 
	.byte	W12
@ 034   ----------------------------------------
	.byte		N48   
	.byte	W48
	.byte		        En4 
	.byte	W48
@ 035   ----------------------------------------
	.byte		N11   , Gn4 , v100
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , An4 , v100, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte		N23   , Bn4 
	.byte	W24
	.byte		        Cn5 
	.byte	W24
	.byte		N44   , En5 , v100, gtp3
	.byte	W48
@ 037   ----------------------------------------
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Ds5 
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W08
	.byte		BEND  , c_v-2
	.byte	W06
	.byte		        c_v-3
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W06
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-9
	.byte	W06
	.byte		VOL   , 77*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-11
	.byte	W03
	.byte		VOL   , 72*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-13
	.byte	W04
	.byte		VOL   , 66*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-15
	.byte	W03
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W04
	.byte		VOL   , 56*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-18
	.byte	W03
	.byte		VOL   , 48*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-20
	.byte	W04
	.byte		VOL   , 46*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-22
	.byte	W03
	.byte		VOL   , 38*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-24
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		        c_v-28
	.byte	W01
@ 040   ----------------------------------------
	.byte		VOL   , 36*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-30
	.byte	W03
	.byte		VOL   , 32*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-32
	.byte	W02
	.byte		        c_v-32
	.byte	W03
	.byte		        c_v-34
	.byte	W01
	.byte		VOL   , 27*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-36
	.byte	W03
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-37
	.byte	W02
	.byte		        c_v-41
	.byte	W03
	.byte		        c_v-43
	.byte	W01
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-47
	.byte	W03
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-48
	.byte	W02
	.byte		        c_v-49
	.byte	W03
	.byte		        c_v-52
	.byte	W03
	.byte		        c_v-56
	.byte	W03
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-59
	.byte	W02
	.byte		        c_v-61
	.byte	W03
	.byte		        c_v-64
	.byte	W01
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		EOT   
	.byte	W24
@ 041   ----------------------------------------
	.byte		VOL   , 95*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte		BEND  , c_v+0
	.byte	W72
@ 042   ----------------------------------------
	.byte		VOICE , 9
	.byte		N11   , Fn2 , v080
	.byte	W12
	.byte		N80   , Fn3 , v100, gtp3
	.byte	W84
@ 043   ----------------------------------------
	.byte	W96
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W48
	.byte		N11   , Fn2 
	.byte	W12
	.byte		N80   , Fn3 , v100, gtp3
	.byte	W36
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte		VOICE , 14
	.byte		VOL   , 119*mus_pl_distortion_world_mvl/mxv
	.byte	W96
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+22
	.byte	W48
	.byte		N92   , En2 , v100, gtp3
	.byte	W48
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W96
@ 058   ----------------------------------------
	.byte		        En2 , v100, gtp3
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
mus_pl_distortion_world_1_060:
	.byte	W48
	.byte		N92   , En2 , v100, gtp3
	.byte	W48
	.byte	PEND
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte		        En2 , v100, gtp3
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_1_060
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , En2 , v100, gtp3
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_1_B1
mus_pl_distortion_world_1_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_pl_distortion_world_2:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 77
	.byte		BENDR , 12
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+8
	.byte		TIE   , Ds2 , v056
	.byte	W05
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        84*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte	W14
	.byte		BEND  , c_v-1
	.byte	W06
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W04
	.byte		        c_v-7
	.byte	W02
	.byte		        c_v-8
	.byte	W04
	.byte		        c_v-8
	.byte	W02
	.byte		        c_v-9
	.byte	W04
	.byte		        c_v-9
	.byte	W02
	.byte		        c_v-10
	.byte	W04
	.byte		        c_v-10
	.byte	W02
	.byte		        c_v-11
	.byte	W04
	.byte		        c_v-12
	.byte	W02
	.byte		        c_v-13
	.byte	W04
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v-15
	.byte	W04
@ 001   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte	W02
	.byte		BEND  , c_v-16
	.byte	W03
	.byte		PAN   , c_v-1
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W06
	.byte		        c_v-17
	.byte	W04
	.byte		        c_v-18
	.byte	W02
	.byte		        c_v-19
	.byte	W04
	.byte		        c_v-19
	.byte	W02
	.byte		        c_v-20
	.byte	W04
	.byte		        c_v-21
	.byte	W02
	.byte		        c_v-22
	.byte	W06
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-25
	.byte	W04
	.byte		PAN   , c_v-2
	.byte		BEND  , c_v-25
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		PAN   , c_v-3
	.byte	W01
	.byte		BEND  , c_v-27
	.byte	W02
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-28
	.byte	W05
	.byte		PAN   , c_v-4
	.byte	W01
	.byte		BEND  , c_v-29
	.byte	W02
	.byte		        c_v-29
	.byte	W04
	.byte		        c_v-31
	.byte	W02
	.byte		        c_v-32
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-33
	.byte	W04
	.byte		        c_v-34
	.byte	W02
	.byte		        c_v-36
	.byte	W03
	.byte		PAN   , c_v-6
	.byte	W01
	.byte		BEND  , c_v-36
	.byte	W02
	.byte		        c_v-37
	.byte	W04
@ 002   ----------------------------------------
	.byte		PAN   , c_v-7
	.byte		BEND  , c_v-38
	.byte	W02
	.byte		        c_v-40
	.byte	W04
	.byte		        c_v-41
	.byte	W02
	.byte		        c_v-43
	.byte	W04
	.byte		        c_v-44
	.byte	W02
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-50
	.byte	W04
	.byte		PAN   , c_v-11
	.byte		BEND  , c_v-52
	.byte	W02
	.byte		        c_v-53
	.byte	W04
	.byte		        c_v-55
	.byte	W02
	.byte		        c_v-57
	.byte	W04
	.byte		        c_v-58
	.byte	W02
	.byte		        c_v-59
	.byte	W04
	.byte		        c_v-61
	.byte	W02
	.byte		        c_v-63
	.byte	W04
	.byte		        c_v-64
	.byte	W12
	.byte		PAN   , c_v-12
	.byte	W06
	.byte		VOL   , 84*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        80*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        74*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 003   ----------------------------------------
	.byte		PAN   , c_v-13
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-16
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        44*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-17
	.byte		VOL   , 27*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-18
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-19
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-20
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-22
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-23
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-25
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-27
	.byte	W05
	.byte		        c_v-29
	.byte	W07
	.byte		        c_v-32
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 004   ----------------------------------------
	.byte	W24
	.byte		BEND  , c_v+0
	.byte	W48
	.byte		VOL   , 95*mus_pl_distortion_world_mvl/mxv
	.byte	W24
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
	.byte		VOICE , 46
	.byte		PAN   , c_v-7
	.byte		VOL   , 76*mus_pl_distortion_world_mvl/mxv
	.byte		N11   , Fs2 , v100
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Fs2 , v100, gtp1
	.byte	W24
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W48
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W24
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte		N11   , Cs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N23   , Fs2 
	.byte	W24
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W36
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
mus_pl_distortion_world_2_B1:
@ 031   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+4
	.byte	W24
	.byte		N12   , Fs3 , v088
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Gs3 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		N12   
	.byte	W12
@ 032   ----------------------------------------
	.byte		TIE   , Fs3 
	.byte	W96
@ 033   ----------------------------------------
	.byte	W48
	.byte		EOT   
	.byte		N12   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
@ 034   ----------------------------------------
	.byte		N48   
	.byte	W48
	.byte		N44   , Gn3 , v100, gtp3
	.byte	W48
@ 035   ----------------------------------------
	.byte		N11   , Cn4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , En4 , v100, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte		N23   , Fs4 
	.byte	W24
	.byte		        Gn4 
	.byte	W24
	.byte		N44   , An4 , v100, gtp3
	.byte	W48
@ 037   ----------------------------------------
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Bn4 
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W08
	.byte		BEND  , c_v-2
	.byte	W06
	.byte		        c_v-3
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W06
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-9
	.byte	W06
	.byte		VOL   , 77*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-11
	.byte	W03
	.byte		VOL   , 72*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-13
	.byte	W04
	.byte		VOL   , 66*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-15
	.byte	W03
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W04
	.byte		VOL   , 56*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-18
	.byte	W03
	.byte		VOL   , 48*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-20
	.byte	W04
	.byte		VOL   , 46*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-22
	.byte	W03
	.byte		VOL   , 38*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-24
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		        c_v-28
	.byte	W01
@ 040   ----------------------------------------
	.byte		VOL   , 36*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-30
	.byte	W03
	.byte		VOL   , 32*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-32
	.byte	W02
	.byte		        c_v-32
	.byte	W03
	.byte		        c_v-34
	.byte	W01
	.byte		VOL   , 27*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-36
	.byte	W03
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-37
	.byte	W02
	.byte		        c_v-41
	.byte	W03
	.byte		        c_v-43
	.byte	W01
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-47
	.byte	W03
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-48
	.byte	W02
	.byte		        c_v-49
	.byte	W03
	.byte		        c_v-52
	.byte	W03
	.byte		        c_v-56
	.byte	W03
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-59
	.byte	W02
	.byte		        c_v-61
	.byte	W03
	.byte		        c_v-64
	.byte	W01
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		EOT   
	.byte	W24
@ 041   ----------------------------------------
	.byte		VOL   , 95*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte		BEND  , c_v+0
	.byte	W24
	.byte		PAN   , c_v+37
	.byte	W48
@ 042   ----------------------------------------
	.byte		VOICE , 30
	.byte		VOL   , 10*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-45
	.byte		TIE   , Ds6 , v080
	.byte	W02
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-5
	.byte	W03
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+29
	.byte	W03
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+41
	.byte	W04
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+48
	.byte	W02
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+29
	.byte	W03
	.byte		        c_v+4
	.byte	W03
	.byte		        c_v-7
	.byte	W04
	.byte		        c_v-5
	.byte	W02
	.byte		        c_v+2
	.byte	W03
	.byte		        c_v+11
	.byte	W07
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-9
	.byte	W03
	.byte		        c_v-3
	.byte	W04
	.byte		        c_v+4
	.byte	W14
	.byte		        c_v+0
	.byte	W03
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-9
	.byte	W09
	.byte		        c_v-11
	.byte	W19
@ 043   ----------------------------------------
	.byte	W02
	.byte		        c_v-12
	.byte	W22
	.byte		        c_v-5
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-12
	.byte		        c_v+6
	.byte	W03
	.byte		        c_v-12
	.byte		        c_v+13
	.byte	W04
	.byte		        c_v+18
	.byte	W02
	.byte		        c_v+27
	.byte	W06
	.byte		        c_v+29
	.byte	W06
	.byte		        c_v+32
	.byte	W06
	.byte		        c_v+20
	.byte	W04
	.byte		        c_v+6
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-3
	.byte	W04
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v-5
	.byte	W03
	.byte		        c_v-24
	.byte	W03
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-30
	.byte	W05
	.byte		        c_v-28
	.byte	W03
	.byte		        c_v-24
	.byte	W04
@ 044   ----------------------------------------
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v+2
	.byte	W03
	.byte		        c_v+4
	.byte	W04
	.byte		        c_v+8
	.byte	W05
	.byte		        c_v+12
	.byte	W06
	.byte		        c_v+16
	.byte	W04
	.byte		        c_v+20
	.byte	W05
	.byte		        c_v+16
	.byte	W03
	.byte		        c_v+12
	.byte	W06
	.byte		        c_v+16
	.byte	W03
	.byte		        c_v+20
	.byte	W07
	.byte		        c_v+28
	.byte	W02
	.byte		        c_v+32
	.byte	W03
	.byte		        c_v+36
	.byte	W07
	.byte		        c_v+32
	.byte	W02
	.byte		        c_v+28
	.byte	W06
	.byte		        c_v+24
	.byte	W09
	.byte		        c_v+20
	.byte	W09
	.byte		        c_v+28
	.byte	W03
	.byte		        c_v+36
	.byte	W03
	.byte		        c_v+44
	.byte	W04
@ 045   ----------------------------------------
	.byte		        c_v+22
	.byte	W02
	.byte		        c_v+60
	.byte	W03
	.byte		        c_v+63
	.byte	W03
	.byte		        c_v-11
	.byte	W09
	.byte		        c_v-9
	.byte	W03
	.byte		        c_v-7
	.byte	W04
	.byte		        c_v-5
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v+6
	.byte	W03
	.byte		        c_v+13
	.byte	W04
	.byte		        c_v+18
	.byte	W02
	.byte		        c_v+27
	.byte	W06
	.byte		        c_v+29
	.byte	W06
	.byte		        c_v+32
	.byte	W06
	.byte		        c_v+20
	.byte	W04
	.byte		        c_v+6
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-3
	.byte	W04
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v-5
	.byte	W03
	.byte		        c_v-24
	.byte	W03
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-30
	.byte	W05
	.byte		        c_v-28
	.byte	W03
	.byte		        c_v-24
	.byte	W04
@ 046   ----------------------------------------
	.byte		        c_v+39
	.byte	W02
	.byte		        c_v-12
	.byte		        c_v+2
	.byte	W03
	.byte		        c_v+4
	.byte	W01
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        22*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v+8
	.byte	W06
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        13*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-12
	.byte	W07
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        9*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        6*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		EOT   
	.byte		VOL   , 4*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W48
	.byte	W01
@ 047   ----------------------------------------
	.byte		BEND  , c_v+0
	.byte	W96
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W48
	.byte		VOICE , 46
	.byte	W48
@ 055   ----------------------------------------
	.byte		PAN   , c_v+8
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Cs3 , v100, gtp1
	.byte	W18
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W06
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W42
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W06
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W18
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N23   , Bn2 
	.byte	W24
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W30
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte		VOICE , 14
	.byte		PAN   , c_v+22
	.byte		VOL   , 91*mus_pl_distortion_world_mvl/mxv
	.byte	W48
	.byte		N92   , Bn1 , v100, gtp3
	.byte	W48
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Bn1 , v100, gtp3
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_2_B1
mus_pl_distortion_world_2_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_pl_distortion_world_3:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 77
	.byte		BENDR , 12
	.byte		LFOS  , 31
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+8
	.byte		TIE   , An1 , v056
	.byte	W05
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        84*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte	W14
	.byte		BEND  , c_v-1
	.byte	W06
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W04
	.byte		        c_v-7
	.byte	W02
	.byte		        c_v-8
	.byte	W04
	.byte		        c_v-8
	.byte	W02
	.byte		        c_v-9
	.byte	W04
	.byte		        c_v-9
	.byte	W02
	.byte		        c_v-10
	.byte	W04
	.byte		        c_v-10
	.byte	W02
	.byte		        c_v-11
	.byte	W04
	.byte		        c_v-12
	.byte	W02
	.byte		        c_v-13
	.byte	W04
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v-15
	.byte	W04
@ 001   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte	W02
	.byte		BEND  , c_v-16
	.byte	W03
	.byte		PAN   , c_v-1
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W06
	.byte		        c_v-17
	.byte	W04
	.byte		        c_v-18
	.byte	W02
	.byte		        c_v-19
	.byte	W04
	.byte		        c_v-19
	.byte	W02
	.byte		        c_v-20
	.byte	W04
	.byte		        c_v-21
	.byte	W02
	.byte		        c_v-22
	.byte	W06
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-25
	.byte	W04
	.byte		PAN   , c_v-2
	.byte		BEND  , c_v-25
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		PAN   , c_v-3
	.byte	W01
	.byte		BEND  , c_v-27
	.byte	W02
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-28
	.byte	W05
	.byte		PAN   , c_v-4
	.byte	W01
	.byte		BEND  , c_v-29
	.byte	W02
	.byte		        c_v-29
	.byte	W04
	.byte		        c_v-31
	.byte	W02
	.byte		        c_v-32
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-33
	.byte	W04
	.byte		        c_v-34
	.byte	W02
	.byte		        c_v-36
	.byte	W03
	.byte		PAN   , c_v-6
	.byte	W01
	.byte		BEND  , c_v-36
	.byte	W02
	.byte		        c_v-37
	.byte	W04
@ 002   ----------------------------------------
	.byte		PAN   , c_v-7
	.byte		BEND  , c_v-38
	.byte	W02
	.byte		        c_v-40
	.byte	W04
	.byte		        c_v-41
	.byte	W02
	.byte		        c_v-43
	.byte	W04
	.byte		        c_v-44
	.byte	W02
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-50
	.byte	W04
	.byte		PAN   , c_v-11
	.byte		BEND  , c_v-52
	.byte	W02
	.byte		        c_v-53
	.byte	W04
	.byte		        c_v-55
	.byte	W02
	.byte		        c_v-57
	.byte	W04
	.byte		        c_v-58
	.byte	W02
	.byte		        c_v-59
	.byte	W04
	.byte		        c_v-61
	.byte	W02
	.byte		        c_v-63
	.byte	W04
	.byte		        c_v-64
	.byte	W12
	.byte		PAN   , c_v-12
	.byte	W06
	.byte		VOL   , 84*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        80*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        74*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 003   ----------------------------------------
	.byte		PAN   , c_v-13
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-16
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        44*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-17
	.byte		VOL   , 27*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-18
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-19
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-20
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-22
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-23
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		PAN   , c_v-25
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		PAN   , c_v-27
	.byte	W05
	.byte		        c_v-29
	.byte	W07
	.byte		        c_v-32
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 004   ----------------------------------------
	.byte	W24
	.byte		BEND  , c_v+0
	.byte	W72
@ 005   ----------------------------------------
	.byte		VOICE , 41
	.byte		PAN   , c_v-24
	.byte		MOD   , 2
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		N23   , Bn0 , v127
	.byte	W05
	.byte		PAN   , c_v-16
	.byte	W01
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        29*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-12
	.byte	W05
	.byte		VOL   , 37*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v-7
	.byte	W06
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte		N23   , En1 
	.byte	W05
	.byte		VOL   , 52*mus_pl_distortion_world_mvl/mxv
	.byte	W19
	.byte		N23   
	.byte	W24
	.byte		        Fs1 
	.byte	W24
@ 006   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		TIE   , En2 
	.byte	W72
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W23
	.byte		EOT   
	.byte	W01
	.byte		TIE   , Bn2 
	.byte	W72
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 011   ----------------------------------------
	.byte		TIE   , Fs2 
	.byte	W96
@ 012   ----------------------------------------
	.byte	W60
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W01
@ 013   ----------------------------------------
	.byte	W12
	.byte		        25*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        21*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        17*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        13*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        7*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte	W01
@ 014   ----------------------------------------
	.byte	W12
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W32
	.byte	W03
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte		EOT   
	.byte	W24
	.byte	W01
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte		VOICE , 46
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W06
	.byte		N11   , Cs3 , v100
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Cs3 , v100, gtp1
	.byte	W18
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W06
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W42
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W06
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W18
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N23   , Bn2 
	.byte	W24
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W30
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
mus_pl_distortion_world_3_B1:
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
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte		VOICE , 77
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte		TIE   , As0 , v100
	.byte	W02
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v+6
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        25*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		PAN   , c_v+9
	.byte		VOL   , 29*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		        45*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W17
	.byte		        c_v+15
	.byte	W36
	.byte		        c_v+12
	.byte	W19
@ 042   ----------------------------------------
	.byte		        c_v+9
	.byte	W12
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v-3
	.byte	W07
	.byte		        c_v-6
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-12
	.byte	W12
	.byte		        c_v-14
	.byte	W19
	.byte		        c_v-16
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 043   ----------------------------------------
	.byte		TIE   , An0 
	.byte	W05
	.byte		PAN   , c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-6
	.byte	W12
	.byte		        c_v-3
	.byte	W05
	.byte		        c_v+0
	.byte	W12
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+9
	.byte	W12
@ 044   ----------------------------------------
	.byte	W05
	.byte		        c_v+12
	.byte	W12
	.byte		        c_v+15
	.byte	W24
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W23
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+3
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 045   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		TIE   , Gs0 
	.byte	W05
	.byte		PAN   , c_v-3
	.byte	W19
	.byte		        c_v-8
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-14
	.byte	W07
	.byte		        c_v-16
	.byte	W24
	.byte		        c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W12
@ 046   ----------------------------------------
	.byte	W17
	.byte		        c_v-11
	.byte	W07
	.byte		        c_v-9
	.byte	W05
	.byte		        c_v-6
	.byte	W07
	.byte		        c_v-3
	.byte	W12
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+12
	.byte	W05
	.byte		        c_v+15
	.byte	W18
	.byte		EOT   
	.byte	W01
@ 047   ----------------------------------------
	.byte		VOICE , 75
	.byte		PAN   , c_v-16
	.byte		TIE   , As0 
	.byte	W96
@ 048   ----------------------------------------
mus_pl_distortion_world_3_048:
	.byte	W60
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        61*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        64*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte	PEND
	.byte		EOT   , As0 
	.byte	W01
@ 049   ----------------------------------------
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Bn0 , v100
	.byte	W96
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_3_048
	.byte		EOT   , Bn0 
	.byte	W01
@ 051   ----------------------------------------
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Cs1 , v100
	.byte	W42
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W23
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        50*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 052   ----------------------------------------
	.byte	W04
	.byte		        43*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        39*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-3
	.byte	W06
	.byte		VOL   , 33*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		BEND  , c_v-9
	.byte	W07
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-12
	.byte	W06
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-15
	.byte	W04
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-18
	.byte	W07
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-22
	.byte	W06
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-28
	.byte	W04
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        12*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-31
	.byte	W13
@ 053   ----------------------------------------
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-35
	.byte	W04
	.byte		VOL   , 7*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W07
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-44
	.byte	W07
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-48
	.byte	W04
	.byte		        c_v-53
	.byte	W07
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-60
	.byte	W11
	.byte		        c_v-63
	.byte	W42
	.byte	W01
	.byte		EOT   
	.byte	W01
@ 054   ----------------------------------------
	.byte	W48
	.byte		VOICE , 46
	.byte	W48
@ 055   ----------------------------------------
	.byte		PAN   , c_v+16
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W06
	.byte		N11   , Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Fs2 , v100, gtp1
	.byte	W18
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W06
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W42
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W06
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W18
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W06
	.byte		N11   , Cs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N23   , Fs2 
	.byte	W24
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W30
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_3_B1
mus_pl_distortion_world_3_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_pl_distortion_world_4:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 14
	.byte		BENDR , 12
	.byte		PAN   , c_v+22
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , En2 , v100, gtp3
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
mus_pl_distortion_world_4_006:
	.byte	W48
	.byte		N92   , En2 , v100, gtp3
	.byte	W48
	.byte	PEND
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte		        En2 , v100, gtp3
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte		N92   , En2 , v100, gtp3
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte		N92   , En2 , v100, gtp3
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte		N92   , En2 , v100, gtp3
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , En2 , v127, gtp3
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
mus_pl_distortion_world_4_B1:
@ 031   ----------------------------------------
	.byte		VOICE , 14
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+22
	.byte	W48
	.byte		N92   , En2 , v100, gtp3
	.byte	W48
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_006
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte		VOICE , 77
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte		TIE   , Fn1 , v100
	.byte	W02
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v+6
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        25*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		PAN   , c_v+9
	.byte		VOL   , 29*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		        45*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W17
	.byte		        c_v+15
	.byte	W36
	.byte		        c_v+12
	.byte	W19
@ 042   ----------------------------------------
	.byte		        c_v+9
	.byte	W12
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v-3
	.byte	W07
	.byte		        c_v-6
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-12
	.byte	W12
	.byte		        c_v-14
	.byte	W19
	.byte		        c_v-16
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 043   ----------------------------------------
	.byte		TIE   , En1 
	.byte	W05
	.byte		PAN   , c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-6
	.byte	W12
	.byte		        c_v-3
	.byte	W05
	.byte		        c_v+0
	.byte	W12
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+9
	.byte	W12
@ 044   ----------------------------------------
	.byte	W05
	.byte		        c_v+12
	.byte	W12
	.byte		        c_v+15
	.byte	W24
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W23
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+3
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 045   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		TIE   , Ds1 
	.byte	W05
	.byte		PAN   , c_v-3
	.byte	W19
	.byte		        c_v-8
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-14
	.byte	W07
	.byte		        c_v-16
	.byte	W24
	.byte		        c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W12
@ 046   ----------------------------------------
	.byte	W17
	.byte		        c_v-11
	.byte	W07
	.byte		        c_v-9
	.byte	W05
	.byte		        c_v-6
	.byte	W07
	.byte		        c_v-3
	.byte	W12
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+12
	.byte	W05
	.byte		        c_v+15
	.byte	W18
	.byte		EOT   
	.byte	W01
@ 047   ----------------------------------------
	.byte		VOICE , 75
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Fn1 
	.byte	W96
@ 048   ----------------------------------------
mus_pl_distortion_world_4_048:
	.byte	W60
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        61*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        64*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte	PEND
	.byte		EOT   , Fn1 
	.byte	W01
@ 049   ----------------------------------------
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Fs1 , v100
	.byte	W96
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_4_048
	.byte		EOT   , Fs1 
	.byte	W01
@ 051   ----------------------------------------
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Gs1 , v100
	.byte	W42
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W23
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        50*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 052   ----------------------------------------
	.byte	W04
	.byte		        43*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        39*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-3
	.byte	W06
	.byte		VOL   , 33*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		BEND  , c_v-9
	.byte	W07
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-12
	.byte	W06
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-15
	.byte	W04
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-18
	.byte	W07
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-22
	.byte	W06
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-28
	.byte	W04
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        12*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-31
	.byte	W13
@ 053   ----------------------------------------
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-35
	.byte	W04
	.byte		VOL   , 7*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W07
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-44
	.byte	W07
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-48
	.byte	W04
	.byte		        c_v-53
	.byte	W07
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-60
	.byte	W11
	.byte		        c_v-63
	.byte	W42
	.byte	W01
	.byte		EOT   
	.byte	W01
@ 054   ----------------------------------------
	.byte	W42
	.byte		VOICE , 46
	.byte	W54
@ 055   ----------------------------------------
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-16
	.byte		BEND  , c_v+0
	.byte		N11   , Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Cs3 , v100, gtp1
	.byte	W24
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W48
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W24
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		N23   , Bn2 
	.byte	W24
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W36
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_4_B1
mus_pl_distortion_world_4_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_pl_distortion_world_5:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 77
	.byte		BENDR , 12
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+6
	.byte		        c_v+22
	.byte		        c_v+8
	.byte		        c_v+8
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Fs6 , v044
	.byte	W05
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        84*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        91*mus_pl_distortion_world_mvl/mxv
	.byte	W14
	.byte		BEND  , c_v-1
	.byte	W06
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W04
	.byte		        c_v-7
	.byte	W02
	.byte		        c_v-8
	.byte	W04
	.byte		        c_v-8
	.byte	W02
	.byte		        c_v-9
	.byte	W04
	.byte		        c_v-9
	.byte	W02
	.byte		        c_v-10
	.byte	W04
	.byte		        c_v-10
	.byte	W02
	.byte		        c_v-11
	.byte	W04
	.byte		        c_v-12
	.byte	W02
	.byte		        c_v-13
	.byte	W04
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v-15
	.byte	W04
@ 001   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W02
	.byte		BEND  , c_v-16
	.byte	W03
	.byte		PAN   , c_v-1
	.byte		        c_v-1
	.byte	W03
	.byte		BEND  , c_v-16
	.byte	W06
	.byte		        c_v-17
	.byte	W04
	.byte		        c_v-18
	.byte	W02
	.byte		        c_v-19
	.byte	W04
	.byte		        c_v-19
	.byte	W02
	.byte		        c_v-20
	.byte	W04
	.byte		        c_v-21
	.byte	W02
	.byte		        c_v-22
	.byte	W06
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-25
	.byte	W04
	.byte		PAN   , c_v-2
	.byte		        c_v-2
	.byte		BEND  , c_v-25
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		PAN   , c_v-3
	.byte		        c_v-3
	.byte	W01
	.byte		BEND  , c_v-27
	.byte	W02
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-28
	.byte	W05
	.byte		PAN   , c_v-4
	.byte		        c_v-4
	.byte	W01
	.byte		BEND  , c_v-29
	.byte	W02
	.byte		        c_v-29
	.byte	W04
	.byte		        c_v-31
	.byte	W02
	.byte		        c_v-32
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-33
	.byte	W04
	.byte		        c_v-34
	.byte	W02
	.byte		        c_v-36
	.byte	W03
	.byte		PAN   , c_v-6
	.byte		        c_v-6
	.byte	W01
	.byte		BEND  , c_v-36
	.byte	W02
	.byte		        c_v-37
	.byte	W04
@ 002   ----------------------------------------
	.byte		PAN   , c_v-7
	.byte		        c_v-7
	.byte		BEND  , c_v-38
	.byte	W02
	.byte		        c_v-40
	.byte	W04
	.byte		        c_v-41
	.byte	W02
	.byte		        c_v-43
	.byte	W04
	.byte		        c_v-44
	.byte	W02
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-50
	.byte	W04
	.byte		PAN   , c_v-11
	.byte		        c_v-11
	.byte		BEND  , c_v-52
	.byte	W02
	.byte		        c_v-53
	.byte	W04
	.byte		        c_v-55
	.byte	W02
	.byte		        c_v-57
	.byte	W04
	.byte		        c_v-58
	.byte	W02
	.byte		        c_v-59
	.byte	W04
	.byte		        c_v-61
	.byte	W02
	.byte		        c_v-63
	.byte	W04
	.byte		        c_v-64
	.byte	W12
	.byte		PAN   , c_v-12
	.byte		        c_v-12
	.byte	W06
	.byte		VOL   , 84*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        80*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        74*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 003   ----------------------------------------
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-13
	.byte		        c_v-13
	.byte	W05
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-16
	.byte		        c_v-16
	.byte	W07
	.byte		VOL   , 44*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        27*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-17
	.byte		        c_v-17
	.byte	W05
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-18
	.byte		        c_v-18
	.byte	W07
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-19
	.byte		        c_v-19
	.byte	W05
	.byte		VOL   , 9*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-20
	.byte		        c_v-20
	.byte	W07
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-22
	.byte		        c_v-22
	.byte	W05
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-23
	.byte		        c_v-23
	.byte	W07
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-25
	.byte		        c_v-25
	.byte	W07
	.byte		        c_v-27
	.byte		        c_v-27
	.byte	W05
	.byte		        c_v-29
	.byte		        c_v-29
	.byte	W07
	.byte		        c_v-32
	.byte		        c_v-32
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 004   ----------------------------------------
	.byte	W24
	.byte		VOL   , 91*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W72
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
	.byte		VOICE , 46
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+18
	.byte	W06
	.byte		N11   , Fs2 , v100
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Fs2 , v100, gtp1
	.byte	W18
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W06
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W42
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W06
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W18
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W06
	.byte		N11   , Cs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N23   , Fs2 
	.byte	W24
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W30
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte		VOICE , 14
	.byte		PAN   , c_v+22
	.byte		VOL   , 91*mus_pl_distortion_world_mvl/mxv
	.byte	W48
	.byte		N92   , Bn1 , v100, gtp3
	.byte	W48
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Bn1 , v127, gtp3
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
mus_pl_distortion_world_5_B1:
@ 031   ----------------------------------------
	.byte		VOICE , 14
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+22
	.byte	W48
	.byte		N92   , Bn1 , v100, gtp3
	.byte	W48
@ 032   ----------------------------------------
mus_pl_distortion_world_5_032:
	.byte	W48
	.byte		N92   , Bn1 , v100, gtp3
	.byte	W48
	.byte	PEND
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_032
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte		VOICE , 77
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte		TIE   , Ds1 , v100
	.byte	W02
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v+6
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        25*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		PAN   , c_v+9
	.byte		VOL   , 29*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		        45*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W17
	.byte		        c_v+15
	.byte	W36
	.byte		        c_v+12
	.byte	W19
@ 042   ----------------------------------------
	.byte		        c_v+9
	.byte	W12
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v-3
	.byte	W07
	.byte		        c_v-6
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-12
	.byte	W12
	.byte		        c_v-14
	.byte	W19
	.byte		        c_v-16
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 043   ----------------------------------------
	.byte		TIE   , Dn1 
	.byte	W05
	.byte		PAN   , c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-6
	.byte	W12
	.byte		        c_v-3
	.byte	W05
	.byte		        c_v+0
	.byte	W12
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+9
	.byte	W12
@ 044   ----------------------------------------
	.byte	W05
	.byte		        c_v+12
	.byte	W12
	.byte		        c_v+15
	.byte	W24
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W23
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+6
	.byte	W12
	.byte		        c_v+3
	.byte	W11
	.byte		EOT   
	.byte	W01
@ 045   ----------------------------------------
	.byte		PAN   , c_v+0
	.byte		TIE   , Cs1 
	.byte	W05
	.byte		PAN   , c_v-3
	.byte	W19
	.byte		        c_v-8
	.byte	W05
	.byte		        c_v-9
	.byte	W07
	.byte		        c_v-11
	.byte	W05
	.byte		        c_v-14
	.byte	W07
	.byte		        c_v-16
	.byte	W24
	.byte		        c_v-14
	.byte	W12
	.byte		        c_v-12
	.byte	W12
@ 046   ----------------------------------------
	.byte	W17
	.byte		        c_v-11
	.byte	W07
	.byte		        c_v-9
	.byte	W05
	.byte		        c_v-6
	.byte	W07
	.byte		        c_v-3
	.byte	W12
	.byte		        c_v+0
	.byte	W05
	.byte		        c_v+3
	.byte	W07
	.byte		        c_v+6
	.byte	W05
	.byte		        c_v+9
	.byte	W07
	.byte		        c_v+12
	.byte	W05
	.byte		        c_v+15
	.byte	W18
	.byte		EOT   
	.byte	W01
@ 047   ----------------------------------------
	.byte		VOICE , 75
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Ds1 
	.byte	W96
@ 048   ----------------------------------------
mus_pl_distortion_world_5_048:
	.byte	W60
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        61*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        64*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        70*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte	PEND
	.byte		EOT   , Ds1 
	.byte	W01
@ 049   ----------------------------------------
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , En1 , v100
	.byte	W96
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_5_048
	.byte		EOT   , En1 
	.byte	W01
@ 051   ----------------------------------------
	.byte		PAN   , c_v-16
	.byte		VOL   , 58*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Fs1 , v100
	.byte	W42
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte	W23
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        53*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        50*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        49*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 052   ----------------------------------------
	.byte	W04
	.byte		        43*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        39*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-3
	.byte	W06
	.byte		VOL   , 33*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		BEND  , c_v-9
	.byte	W07
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-12
	.byte	W06
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-15
	.byte	W04
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-18
	.byte	W07
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-22
	.byte	W06
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		BEND  , c_v-28
	.byte	W04
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        12*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-31
	.byte	W13
@ 053   ----------------------------------------
	.byte		VOL   , 8*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-35
	.byte	W04
	.byte		VOL   , 7*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W07
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-44
	.byte	W07
	.byte		VOL   , 3*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-48
	.byte	W04
	.byte		        c_v-53
	.byte	W07
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-60
	.byte	W11
	.byte		        c_v-63
	.byte	W42
	.byte	W01
	.byte		EOT   
	.byte	W01
@ 054   ----------------------------------------
	.byte	W48
	.byte		VOICE , 46
	.byte	W48
@ 055   ----------------------------------------
	.byte		VOL   , 80*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-16
	.byte		BEND  , c_v+0
	.byte		N11   , Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N64   , Fs2 , v100, gtp1
	.byte	W24
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W48
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W24
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte		N11   , Cs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N23   , Fs2 
	.byte	W24
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W36
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_5_B1
mus_pl_distortion_world_5_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

mus_pl_distortion_world_6:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		BENDR , 12
	.byte		LFOS  , 31
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+0
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
	.byte		VOICE , 41
	.byte		PAN   , c_v-24
	.byte		MOD   , 2
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		N23   , En0 , v127
	.byte	W05
	.byte		PAN   , c_v-16
	.byte	W01
	.byte		VOL   , 18*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        29*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-12
	.byte	W05
	.byte		VOL   , 37*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v-7
	.byte	W06
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte		N23   , An0 
	.byte	W05
	.byte		VOL   , 52*mus_pl_distortion_world_mvl/mxv
	.byte	W19
	.byte		N23   
	.byte	W24
	.byte		        Bn0 
	.byte	W24
@ 006   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		TIE   , An1 
	.byte	W72
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W23
	.byte		EOT   
	.byte	W01
	.byte		TIE   , En2 
	.byte	W72
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 011   ----------------------------------------
	.byte		TIE   , Cs2 
	.byte	W96
@ 012   ----------------------------------------
	.byte	W60
	.byte		VOL   , 49*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W01
@ 013   ----------------------------------------
	.byte	W12
	.byte		        25*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        21*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        17*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        13*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W17
	.byte		        7*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte	W01
@ 014   ----------------------------------------
	.byte	W12
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W32
	.byte	W03
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte		EOT   
	.byte	W24
	.byte	W01
@ 015   ----------------------------------------
	.byte	W48
	.byte		MOD   , 0
	.byte	W48
@ 016   ----------------------------------------
	.byte		VOICE , 78
	.byte		PAN   , c_v+8
	.byte		VOL   , 16*mus_pl_distortion_world_mvl/mxv
	.byte		N11   , Cs4 , v100
	.byte	W12
	.byte		PAN   , c_v+12
	.byte		N11   
	.byte	W11
	.byte		PAN   , c_v+18
	.byte	W01
	.byte		N11   , Ds4 
	.byte	W12
	.byte		PAN   , c_v+21
	.byte		N11   
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		PAN   , c_v+24
	.byte		N11   
	.byte	W12
	.byte		N92   , Cs4 , v100, gtp3
	.byte	W12
	.byte		PAN   , c_v+21
	.byte	W11
	.byte		        c_v+18
	.byte	W01
@ 017   ----------------------------------------
	.byte	W12
	.byte		        c_v+12
	.byte	W11
	.byte		        c_v+6
	.byte	W13
	.byte		        c_v-5
	.byte	W11
	.byte		        c_v-8
	.byte	W36
	.byte	W01
	.byte		        c_v-10
	.byte	W12
@ 018   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Ds4 
	.byte	W11
	.byte		PAN   , c_v-8
	.byte	W01
	.byte		N11   , Fs4 
	.byte	W12
	.byte		PAN   , c_v-5
	.byte		N11   , Cs4 
	.byte	W11
	.byte		PAN   , c_v+3
	.byte	W01
	.byte		TIE   
	.byte	W12
	.byte		PAN   , c_v+6
	.byte	W11
	.byte		        c_v+12
	.byte	W13
	.byte		        c_v+21
	.byte	W11
	.byte		        c_v+27
	.byte	W01
@ 019   ----------------------------------------
	.byte	W12
	.byte		        c_v+32
	.byte	W11
	.byte		        c_v+35
	.byte	W36
	.byte	W01
	.byte		        c_v+32
	.byte	W11
	.byte		EOT   
	.byte	W13
	.byte		PAN   , c_v+27
	.byte	W11
	.byte		        c_v+24
	.byte	W01
@ 020   ----------------------------------------
	.byte		N11   , Ds4 
	.byte	W12
	.byte		PAN   , c_v+21
	.byte		N11   
	.byte	W11
	.byte		PAN   , c_v+12
	.byte	W01
	.byte		N11   , Cs4 
	.byte	W12
	.byte		PAN   , c_v+9
	.byte		N11   
	.byte	W11
	.byte		PAN   , c_v+6
	.byte	W01
	.byte		N11   , Fs4 
	.byte	W12
	.byte		PAN   , c_v+0
	.byte		N11   
	.byte	W11
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		N92   , Bn3 , v100, gtp3
	.byte	W12
	.byte		PAN   , c_v-8
	.byte	W12
@ 021   ----------------------------------------
	.byte	W23
	.byte		        c_v-5
	.byte	W13
	.byte		        c_v+0
	.byte	W11
	.byte		        c_v+3
	.byte	W13
	.byte		        c_v+6
	.byte	W11
	.byte		        c_v+12
	.byte	W13
	.byte		        c_v+15
	.byte	W11
	.byte		        c_v+24
	.byte	W01
@ 022   ----------------------------------------
	.byte		N11   , Fs3 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		PAN   , c_v+27
	.byte		N23   , Bn3 
	.byte	W11
	.byte		PAN   , c_v+24
	.byte	W13
	.byte		        c_v+18
	.byte		N80   , Bn3 , v100, gtp3
	.byte	W11
	.byte		PAN   , c_v+12
	.byte	W13
	.byte		        c_v-2
	.byte	W11
	.byte		        c_v-8
	.byte	W01
@ 023   ----------------------------------------
	.byte	W12
	.byte		        c_v-10
	.byte	W11
	.byte		        c_v-8
	.byte	W13
	.byte		        c_v-5
	.byte	W11
	.byte		        c_v+0
	.byte	W13
	.byte		        c_v+3
	.byte	W11
	.byte		        c_v+15
	.byte	W13
	.byte		        c_v+32
	.byte	W11
	.byte		        c_v+38
	.byte	W01
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
mus_pl_distortion_world_6_B1:
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		VOICE , 60
	.byte		PAN   , c_v+15
	.byte		VOL   , 114*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Bn1 , v116, gtp3
	.byte	W48
	.byte		N23   , Cs2 
	.byte	W24
	.byte		        Bn1 
	.byte	W24
@ 033   ----------------------------------------
	.byte		N92   , Dn2 , v116, gtp3
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Bn1 , v116, gtp3
	.byte	W96
@ 035   ----------------------------------------
	.byte		N44   , Cn2 , v116, gtp3
	.byte	W48
	.byte		        Dn2 , v116, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte		        Cn2 , v116, gtp3
	.byte	W48
	.byte		        An1 , v116, gtp3
	.byte	W48
@ 037   ----------------------------------------
	.byte		VOICE , 60
	.byte		TIE   , Bn1 
	.byte	W40
	.byte	W01
	.byte		BEND  , c_v-1
	.byte	W09
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-3
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W06
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-9
	.byte	W08
	.byte		        c_v-11
	.byte	W04
@ 038   ----------------------------------------
	.byte	W02
	.byte		        c_v-13
	.byte	W06
	.byte		        c_v-15
	.byte	W06
	.byte		        c_v-16
	.byte	W06
	.byte		        c_v-18
	.byte	W06
	.byte		        c_v-20
	.byte	W06
	.byte		        c_v-22
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		        c_v-28
	.byte	W03
	.byte		        c_v-30
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-32
	.byte	W03
	.byte		        c_v-34
	.byte	W03
	.byte		        c_v-36
	.byte	W04
	.byte		        c_v-37
	.byte	W02
	.byte		        c_v-41
	.byte	W03
	.byte		        c_v-43
	.byte	W03
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-49
	.byte	W03
	.byte		        c_v-52
	.byte	W03
	.byte		        c_v-56
	.byte	W04
	.byte		        c_v-59
	.byte	W02
	.byte		        c_v-61
	.byte	W03
	.byte		        c_v-64
	.byte	W01
	.byte		VOL   , 109*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W04
@ 039   ----------------------------------------
	.byte		        87*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        76*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        65*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        49*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        38*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        11*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		EOT   
	.byte	W13
	.byte		VOICE , 46
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+9
	.byte		BEND  , c_v+0
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W48
@ 040   ----------------------------------------
	.byte		N92   , Bn3 , v100, gtp3
	.byte	W96
@ 041   ----------------------------------------
	.byte		N44   , Cn3 , v100, gtp3
	.byte	W48
	.byte		N92   , Cn4 , v100, gtp3
	.byte	W48
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte	W48
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W48
@ 044   ----------------------------------------
	.byte		N92   , Bn3 , v100, gtp3
	.byte	W96
@ 045   ----------------------------------------
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W48
	.byte		N92   , Cs4 , v100, gtp3
	.byte	W48
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte		VOICE , 60
	.byte		VOL   , 74*mus_pl_distortion_world_mvl/mxv
	.byte	W48
	.byte		N44   , Fn3 , v100, gtp3
	.byte	W48
@ 048   ----------------------------------------
	.byte		        As3 , v100, gtp3
	.byte	W48
	.byte		        Fn4 , v100, gtp3
	.byte	W48
@ 049   ----------------------------------------
	.byte		TIE   , Fs4 
	.byte	W96
@ 050   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		EOT   
	.byte	W01
	.byte		N44   , Fs4 , v100, gtp3
	.byte	W48
@ 051   ----------------------------------------
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Gs4 
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W12
	.byte		VOL   , 64*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        61*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        59*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        56*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        54*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        50*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        44*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        37*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 054   ----------------------------------------
	.byte		        27*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        24*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        22*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        19*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        17*mus_pl_distortion_world_mvl/mxv
	.byte	W72
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 057   ----------------------------------------
	.byte		TIE   , Bn4 
	.byte	W96
@ 058   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 059   ----------------------------------------
	.byte		TIE   , Fs4 
	.byte	W96
@ 060   ----------------------------------------
	.byte	W48
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W44
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 061   ----------------------------------------
	.byte		TIE   , Bn4 
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        16*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        9*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        6*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W19
@ 065   ----------------------------------------
	.byte	W23
	.byte		EOT   
	.byte	W72
	.byte	W01
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_6_B1
mus_pl_distortion_world_6_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

mus_pl_distortion_world_7:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		BENDR , 12
	.byte		VOL   , 36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-10
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		VOL   , 55*mus_pl_distortion_world_mvl/mxv
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
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
mus_pl_distortion_world_7_B1:
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		VOICE , 60
	.byte		PAN   , c_v+15
	.byte		VOL   , 114*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Fs1 , v116, gtp3
	.byte	W48
	.byte		N23   , Gs1 
	.byte	W24
	.byte		        Fs1 
	.byte	W24
@ 033   ----------------------------------------
	.byte		N92   , An1 , v116, gtp3
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Fs1 , v116, gtp3
	.byte	W96
@ 035   ----------------------------------------
	.byte		N44   , Gn1 , v116, gtp3
	.byte	W48
	.byte		        An1 , v116, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte		        Gn1 , v116, gtp3
	.byte	W48
	.byte		        En1 , v116, gtp3
	.byte	W48
@ 037   ----------------------------------------
	.byte		VOICE , 60
	.byte		TIE   , Fs1 
	.byte	W40
	.byte	W01
	.byte		BEND  , c_v-1
	.byte	W09
	.byte		        c_v-2
	.byte	W06
	.byte		        c_v-3
	.byte	W06
	.byte		        c_v-4
	.byte	W06
	.byte		        c_v-6
	.byte	W06
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-8
	.byte	W07
	.byte		        c_v-9
	.byte	W08
	.byte		        c_v-11
	.byte	W04
@ 038   ----------------------------------------
	.byte	W02
	.byte		        c_v-13
	.byte	W06
	.byte		        c_v-15
	.byte	W06
	.byte		        c_v-16
	.byte	W06
	.byte		        c_v-18
	.byte	W06
	.byte		        c_v-20
	.byte	W06
	.byte		        c_v-22
	.byte	W04
	.byte		        c_v-24
	.byte	W02
	.byte		        c_v-26
	.byte	W03
	.byte		        c_v-28
	.byte	W03
	.byte		        c_v-30
	.byte	W04
	.byte		        c_v-32
	.byte	W02
	.byte		        c_v-32
	.byte	W03
	.byte		        c_v-34
	.byte	W03
	.byte		        c_v-36
	.byte	W04
	.byte		        c_v-37
	.byte	W02
	.byte		        c_v-41
	.byte	W03
	.byte		        c_v-43
	.byte	W03
	.byte		        c_v-47
	.byte	W04
	.byte		        c_v-48
	.byte	W02
	.byte		        c_v-49
	.byte	W03
	.byte		        c_v-52
	.byte	W03
	.byte		        c_v-56
	.byte	W04
	.byte		        c_v-59
	.byte	W02
	.byte		        c_v-61
	.byte	W03
	.byte		        c_v-64
	.byte	W01
	.byte		VOL   , 109*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        92*mus_pl_distortion_world_mvl/mxv
	.byte	W04
@ 039   ----------------------------------------
	.byte		        87*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        76*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        65*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        49*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        38*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        11*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		EOT   
	.byte	W13
	.byte		VOICE , 46
	.byte		VOL   , 116*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+9
	.byte		BEND  , c_v+0
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W48
@ 040   ----------------------------------------
	.byte		N92   , Fs3 , v100, gtp3
	.byte	W96
@ 041   ----------------------------------------
	.byte		N44   , Gn2 , v100, gtp3
	.byte	W48
	.byte		N92   , Gn3 , v100, gtp3
	.byte	W48
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte	W48
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W48
@ 044   ----------------------------------------
	.byte		N92   , Fs3 , v100, gtp3
	.byte	W96
@ 045   ----------------------------------------
	.byte		N44   , Gs2 , v100, gtp3
	.byte	W48
	.byte		N92   , Gs3 , v100, gtp3
	.byte	W48
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte		VOICE , 60
	.byte		VOL   , 74*mus_pl_distortion_world_mvl/mxv
	.byte	W48
	.byte		N44   , As2 , v100, gtp3
	.byte	W48
@ 048   ----------------------------------------
	.byte		        Fn3 , v100, gtp3
	.byte	W48
	.byte		        As3 , v100, gtp3
	.byte	W48
@ 049   ----------------------------------------
	.byte		TIE   , Bn3 
	.byte	W96
@ 050   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		EOT   
	.byte	W01
	.byte		N44   , Bn3 , v100, gtp3
	.byte	W48
@ 051   ----------------------------------------
	.byte		VOL   , 69*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Cs4 
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W12
	.byte		VOL   , 64*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        61*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        59*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        56*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        54*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        50*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        44*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        37*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W07
@ 054   ----------------------------------------
	.byte		        27*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        24*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        22*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        19*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        17*mus_pl_distortion_world_mvl/mxv
	.byte	W72
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 057   ----------------------------------------
	.byte		TIE   , Ds4 
	.byte	W96
@ 058   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 059   ----------------------------------------
	.byte		TIE   , Bn3 
	.byte	W96
@ 060   ----------------------------------------
	.byte	W48
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W44
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 061   ----------------------------------------
	.byte		TIE   , Ds4 
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W18
	.byte		        16*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		        9*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        6*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W19
@ 065   ----------------------------------------
	.byte	W23
	.byte		EOT   
	.byte	W72
	.byte	W01
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_7_B1
mus_pl_distortion_world_7_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

mus_pl_distortion_world_8:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 45
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
	.byte	W92
	.byte	W01
	.byte		BEND  , c_v-62
	.byte	W03
@ 001   ----------------------------------------
	.byte		VOL   , 29*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-61
	.byte		TIE   , Bn4 , v080
	.byte	W02
	.byte		BEND  , c_v-60
	.byte	W03
	.byte		VOL   , 44*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-59
	.byte	W03
	.byte		        c_v-58
	.byte	W04
	.byte		VOL   , 52*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v-56
	.byte	W03
	.byte		        c_v-55
	.byte	W03
	.byte		        c_v-53
	.byte	W04
	.byte		        c_v-52
	.byte	W02
	.byte		        c_v-51
	.byte	W03
	.byte		        c_v-50
	.byte	W03
	.byte		        c_v-46
	.byte	W06
	.byte		        c_v-45
	.byte	W03
	.byte		        c_v-44
	.byte	W01
	.byte		PAN   , c_v-18
	.byte	W02
	.byte		BEND  , c_v-42
	.byte	W04
	.byte		PAN   , c_v-16
	.byte		BEND  , c_v-41
	.byte	W02
	.byte		        c_v-40
	.byte	W03
	.byte		        c_v-39
	.byte	W03
	.byte		        c_v-37
	.byte	W04
	.byte		        c_v-35
	.byte	W02
	.byte		        c_v-34
	.byte	W03
	.byte		PAN   , c_v-13
	.byte		BEND  , c_v-30
	.byte	W03
	.byte		        c_v-29
	.byte	W04
	.byte		PAN   , c_v-12
	.byte	W02
	.byte		BEND  , c_v-27
	.byte	W03
	.byte		        c_v-26
	.byte	W03
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-23
	.byte	W02
	.byte		        c_v-21
	.byte	W03
	.byte		PAN   , c_v-11
	.byte		BEND  , c_v-19
	.byte	W07
@ 002   ----------------------------------------
	.byte		        c_v-16
	.byte	W02
	.byte		        c_v-15
	.byte	W03
	.byte		PAN   , c_v-8
	.byte	W03
	.byte		BEND  , c_v-13
	.byte	W04
	.byte		PAN   , c_v-7
	.byte		BEND  , c_v-12
	.byte	W02
	.byte		        c_v-11
	.byte	W03
	.byte		PAN   , c_v-4
	.byte		BEND  , c_v-10
	.byte	W03
	.byte		        c_v-8
	.byte	W04
	.byte		PAN   , c_v-2
	.byte		BEND  , c_v-5
	.byte	W02
	.byte		        c_v+0
	.byte	W03
	.byte		PAN   , c_v+0
	.byte	W07
	.byte		BEND  , c_v+3
	.byte	W05
	.byte		        c_v+5
	.byte	W03
	.byte		        c_v+6
	.byte	W04
	.byte		PAN   , c_v+3
	.byte		BEND  , c_v+8
	.byte	W02
	.byte		        c_v+10
	.byte	W03
	.byte		        c_v+12
	.byte	W03
	.byte		        c_v+14
	.byte	W04
	.byte		        c_v+16
	.byte	W02
	.byte		        c_v+18
	.byte	W03
	.byte		PAN   , c_v+5
	.byte		BEND  , c_v+19
	.byte	W03
	.byte		        c_v+21
	.byte	W04
	.byte		        c_v+22
	.byte	W02
	.byte		        c_v+24
	.byte	W03
	.byte		PAN   , c_v+8
	.byte		BEND  , c_v+26
	.byte	W03
	.byte		        c_v+29
	.byte	W04
	.byte		PAN   , c_v+9
	.byte		BEND  , c_v+32
	.byte	W05
	.byte		PAN   , c_v+12
	.byte		BEND  , c_v+33
	.byte	W03
	.byte		        c_v+36
	.byte	W04
@ 003   ----------------------------------------
	.byte		PAN   , c_v+13
	.byte		BEND  , c_v+37
	.byte	W02
	.byte		        c_v+39
	.byte	W03
	.byte		PAN   , c_v+16
	.byte		BEND  , c_v+42
	.byte	W03
	.byte		        c_v+44
	.byte	W06
	.byte		        c_v+46
	.byte	W03
	.byte		PAN   , c_v+20
	.byte		BEND  , c_v+49
	.byte	W03
	.byte		        c_v+52
	.byte	W04
	.byte		        c_v+56
	.byte	W05
	.byte		PAN   , c_v+21
	.byte		BEND  , c_v+58
	.byte	W03
	.byte		        c_v+60
	.byte	W04
	.byte		PAN   , c_v+25
	.byte		BEND  , c_v+62
	.byte	W02
	.byte		        c_v+63
	.byte	W03
	.byte		PAN   , c_v+29
	.byte	W07
	.byte		        c_v+30
	.byte	W05
	.byte		        c_v+32
	.byte	W12
	.byte		        c_v+36
	.byte	W07
	.byte		        c_v+37
	.byte	W24
@ 004   ----------------------------------------
	.byte	W42
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte	W23
	.byte		        29*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        24*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        19*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        11*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		EOT   
	.byte	W01
@ 005   ----------------------------------------
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        1*mus_pl_distortion_world_mvl/mxv
	.byte	W90
	.byte	W01
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
	.byte	W42
	.byte		VOICE , 30
	.byte	W03
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        10*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-45
	.byte		TIE   , Ds6 , v056
	.byte	W02
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-5
	.byte	W03
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+29
	.byte	W03
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+41
	.byte	W04
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+48
	.byte	W02
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+29
	.byte	W03
	.byte		        c_v+4
	.byte	W03
	.byte		        c_v-7
	.byte	W04
	.byte		        c_v-5
	.byte	W02
	.byte		        c_v+2
	.byte	W03
	.byte		        c_v+11
	.byte	W07
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-9
	.byte	W03
	.byte		        c_v-3
	.byte	W04
@ 020   ----------------------------------------
	.byte		        c_v+4
	.byte	W14
	.byte		        c_v+0
	.byte	W03
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-9
	.byte	W09
	.byte		        c_v-11
	.byte	W09
	.byte		        c_v-13
	.byte	W18
	.byte		        c_v-11
	.byte	W09
	.byte		        c_v-9
	.byte	W03
	.byte		        c_v-7
	.byte	W04
	.byte		        c_v-5
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v+6
	.byte	W03
	.byte		        c_v+13
	.byte	W04
	.byte		        c_v+18
	.byte	W02
	.byte		        c_v+27
	.byte	W06
	.byte		        c_v+29
	.byte	W04
@ 021   ----------------------------------------
	.byte	W02
	.byte		        c_v+32
	.byte	W06
	.byte		        c_v+20
	.byte	W04
	.byte		        c_v+6
	.byte	W02
	.byte		        c_v-3
	.byte	W03
	.byte		        c_v-7
	.byte	W03
	.byte		        c_v-3
	.byte	W04
	.byte		        c_v+2
	.byte	W02
	.byte		        c_v-5
	.byte	W03
	.byte		        c_v-24
	.byte	W03
	.byte		        c_v-28
	.byte	W04
	.byte		        c_v-30
	.byte	W05
	.byte		        c_v-28
	.byte	W03
	.byte		        c_v-24
	.byte	W04
	.byte		        c_v-13
	.byte	W02
	.byte		        c_v+2
	.byte	W03
	.byte		        c_v+4
	.byte	W04
	.byte		        c_v+8
	.byte	W05
	.byte		        c_v+12
	.byte	W06
	.byte		        c_v+16
	.byte	W04
	.byte		        c_v+20
	.byte	W05
	.byte		        c_v+16
	.byte	W03
	.byte		        c_v+12
	.byte	W06
	.byte		        c_v+16
	.byte	W03
	.byte		        c_v+20
	.byte	W07
@ 022   ----------------------------------------
	.byte		        c_v+28
	.byte	W02
	.byte		        c_v+32
	.byte	W03
	.byte		        c_v+36
	.byte	W07
	.byte		        c_v+32
	.byte	W02
	.byte		        c_v+28
	.byte	W06
	.byte		        c_v+24
	.byte	W09
	.byte		        c_v+20
	.byte	W01
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        22*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		BEND  , c_v+28
	.byte	W01
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        13*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+36
	.byte	W03
	.byte		        c_v+44
	.byte	W04
	.byte		        c_v+52
	.byte	W02
	.byte		        c_v+60
	.byte	W01
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        9*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+63
	.byte	W03
	.byte		VOL   , 6*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		        4*mus_pl_distortion_world_mvl/mxv
	.byte	W04
	.byte		        2*mus_pl_distortion_world_mvl/mxv
	.byte	W02
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		EOT   
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte	W01
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
mus_pl_distortion_world_8_B1:
@ 031   ----------------------------------------
	.byte		VOICE , 14
	.byte		VOL   , 61*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+25
	.byte		BEND  , c_v+0
	.byte	W40
	.byte		N01   , Gs7 , v060
	.byte	W02
	.byte		        An7 
	.byte	W02
	.byte		        As7 
	.byte	W02
	.byte		        Bn7 
	.byte	W02
	.byte		N07   , Cn8 , v100
	.byte	W48
@ 032   ----------------------------------------
mus_pl_distortion_world_8_032:
	.byte	W40
	.byte		N01   , Gs7 , v060
	.byte	W02
	.byte		        An7 
	.byte	W02
	.byte		        As7 
	.byte	W02
	.byte		        Bn7 
	.byte	W02
	.byte		N07   , Cn8 , v100
	.byte	W48
	.byte	PEND
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_8_032
@ 039   ----------------------------------------
	.byte		VOICE , 78
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+7
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        28*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		PAN   , c_v+7
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Bn2 , v124, gtp3
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+30
	.byte	W13
@ 040   ----------------------------------------
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Bn3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+28
	.byte	W11
	.byte		VOL   , 36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W13
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+5
	.byte	W13
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-2
	.byte	W11
	.byte		VOL   , 10*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-6
	.byte	W13
@ 041   ----------------------------------------
	.byte		        c_v-10
	.byte		VOL   , 14*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Cn3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-17
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
	.byte		        c_v-10
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Cn4 
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W01
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+5
	.byte	W11
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W13
@ 042   ----------------------------------------
	.byte		VOL   , 30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W13
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W11
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W13
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W11
	.byte		VOL   , 5*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
@ 043   ----------------------------------------
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-17
	.byte	W11
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-19
	.byte	W12
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		PAN   , c_v-14
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		PAN   , c_v-8
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Bn2 , v100, gtp3
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W13
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W13
@ 044   ----------------------------------------
	.byte		        c_v+14
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Bn3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 30*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W13
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W13
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W11
	.byte		VOL   , 10*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-12
	.byte	W13
@ 045   ----------------------------------------
	.byte		        c_v-17
	.byte		VOL   , 14*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Cs3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-19
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W13
	.byte		        c_v-2
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Cs4 
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+7
	.byte	W01
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte	W13
@ 046   ----------------------------------------
	.byte		        30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W13
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-2
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-6
	.byte	W11
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W13
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W13
@ 047   ----------------------------------------
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+10
	.byte	W11
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W12
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W48
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W96
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_8_B1
mus_pl_distortion_world_8_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 9 (Midi-Chn.9) ****************@

mus_pl_distortion_world_9:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
	.byte	W96
@ 001   ----------------------------------------
	.byte		        127*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , BnM1, v127
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
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte	W24
	.byte		        127*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        125*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        103*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        84*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        74*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        58*mus_pl_distortion_world_mvl/mxv
	.byte	W07
	.byte		        41*mus_pl_distortion_world_mvl/mxv
	.byte	W03
	.byte		BEND  , c_v-6
	.byte	W02
	.byte		VOL   , 24*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-12
	.byte	W03
	.byte		        c_v-15
	.byte	W04
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-21
	.byte	W02
	.byte		        c_v-35
	.byte	W03
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-50
	.byte	W03
	.byte		        c_v-53
	.byte	W04
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-62
	.byte	W06
	.byte		        c_v-63
	.byte	W06
@ 026   ----------------------------------------
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		EOT   
	.byte	W19
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W72
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
mus_pl_distortion_world_9_B1:
@ 031   ----------------------------------------
	.byte		BEND  , c_v+0
	.byte		N68   , BnM1, v100, gtp3
	.byte	W72
	.byte		N23   , Fs0 
	.byte	W24
@ 032   ----------------------------------------
mus_pl_distortion_world_9_032:
	.byte		N68   , BnM1, v100, gtp3
	.byte	W72
	.byte		N23   , Fs0 
	.byte	W24
	.byte	PEND
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_032
@ 039   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , BnM1, v100, gtp3
	.byte	W48
	.byte		VOL   , 120*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-6
	.byte	W05
	.byte		        c_v-10
	.byte	W07
	.byte		VOL   , 101*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-12
	.byte	W05
	.byte		VOL   , 97*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-15
	.byte	W07
	.byte		VOL   , 77*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-22
	.byte	W05
	.byte		VOL   , 59*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-29
	.byte	W07
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W05
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-40
	.byte	W07
@ 040   ----------------------------------------
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-46
	.byte	W05
	.byte		VOL   , 5*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-55
	.byte	W07
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v-63
	.byte	W05
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W30
	.byte	W01
	.byte		        127*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W48
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte	W96
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W96
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , AsM1, v127
	.byte	W96
@ 048   ----------------------------------------
mus_pl_distortion_world_9_048:
	.byte		VOL   , 120*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		BEND  , c_v-6
	.byte	W05
	.byte		        c_v-10
	.byte	W01
	.byte		VOL   , 101*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        97*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-12
	.byte	W05
	.byte		        c_v-15
	.byte	W01
	.byte		VOL   , 77*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        59*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-22
	.byte	W05
	.byte		        c_v-29
	.byte	W01
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        28*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-38
	.byte	W05
	.byte	PEND
	.byte		EOT   , AsM1
	.byte		BEND  , c_v-40
	.byte	W01
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-46
	.byte	W05
	.byte		        c_v-55
	.byte	W01
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-63
	.byte	W30
@ 049   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		TIE   , BnM1, v127
	.byte	W96
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_pl_distortion_world_9_048
	.byte		EOT   , BnM1
	.byte		BEND  , c_v-40
	.byte	W01
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-46
	.byte	W05
	.byte		        c_v-55
	.byte	W01
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-63
	.byte	W30
@ 051   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		TIE   , Cs0 , v127
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte		VOL   , 120*mus_pl_distortion_world_mvl/mxv
	.byte	W06
	.byte		BEND  , c_v-6
	.byte	W05
	.byte		        c_v-10
	.byte	W01
	.byte		VOL   , 101*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        97*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-12
	.byte	W05
	.byte		        c_v-15
	.byte	W01
	.byte		VOL   , 77*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        59*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-22
	.byte	W05
	.byte		        c_v-29
	.byte	W01
	.byte		VOL   , 41*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        28*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-38
	.byte	W05
	.byte		        c_v-40
	.byte	W01
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-46
	.byte	W05
	.byte		        c_v-55
	.byte	W01
	.byte		VOL   , 1*mus_pl_distortion_world_mvl/mxv
	.byte	W05
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v-63
	.byte	W17
	.byte		EOT   
	.byte	W13
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte		VOL   , 127*mus_pl_distortion_world_mvl/mxv
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W96
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_9_B1
mus_pl_distortion_world_9_B2:
@ 070   ----------------------------------------
	.byte	FINE

@**************** Track 10 (Midi-Chn.11) ****************@

mus_pl_distortion_world_10:
	.byte	KEYSH , mus_pl_distortion_world_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 78
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_pl_distortion_world_mvl/mxv
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
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
mus_pl_distortion_world_10_B1:
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
	.byte	W96
@ 039   ----------------------------------------
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+7
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        28*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        31*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		PAN   , c_v+7
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Fs2 , v124, gtp3
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+30
	.byte	W13
@ 040   ----------------------------------------
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Fs3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+28
	.byte	W11
	.byte		VOL   , 36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W13
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+5
	.byte	W13
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-2
	.byte	W11
	.byte		VOL   , 10*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-6
	.byte	W13
@ 041   ----------------------------------------
	.byte		        c_v-10
	.byte		VOL   , 14*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Gn2 , v100, gtp3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-17
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
	.byte		        c_v-10
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Gn3 
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W01
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+5
	.byte	W11
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W13
@ 042   ----------------------------------------
	.byte		VOL   , 30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+21
	.byte	W13
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W11
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W13
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W11
	.byte		VOL   , 5*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W13
@ 043   ----------------------------------------
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-17
	.byte	W11
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-19
	.byte	W12
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		PAN   , c_v-14
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		PAN   , c_v-8
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		        34*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Fs2 , v100, gtp3
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W13
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+12
	.byte	W13
@ 044   ----------------------------------------
	.byte		        c_v+14
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		N92   , Fs3 , v100, gtp3
	.byte	W11
	.byte		VOL   , 23*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+19
	.byte	W13
	.byte		VOL   , 30*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W13
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W13
	.byte		VOL   , 11*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W11
	.byte		VOL   , 10*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-12
	.byte	W13
@ 045   ----------------------------------------
	.byte		        c_v-17
	.byte		VOL   , 14*mus_pl_distortion_world_mvl/mxv
	.byte		N44   , Gs2 , v100, gtp3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-19
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-14
	.byte	W11
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W13
	.byte		        c_v-2
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		TIE   , Gs3 
	.byte	W11
	.byte		VOL   , 22*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+7
	.byte	W01
	.byte		VOL   , 31*mus_pl_distortion_world_mvl/mxv
	.byte	W12
	.byte		        36*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W11
	.byte		VOL   , 34*mus_pl_distortion_world_mvl/mxv
	.byte	W13
@ 046   ----------------------------------------
	.byte		        30*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+16
	.byte	W11
	.byte		VOL   , 19*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W13
	.byte		VOL   , 17*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+3
	.byte	W11
	.byte		VOL   , 20*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-2
	.byte	W13
	.byte		VOL   , 25*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-6
	.byte	W11
	.byte		VOL   , 28*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-8
	.byte	W13
	.byte		VOL   , 13*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        5*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v-4
	.byte	W13
@ 047   ----------------------------------------
	.byte		VOL   , 2*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+10
	.byte	W11
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte		PAN   , c_v+14
	.byte	W12
	.byte		EOT   
	.byte	W01
	.byte		VOL   , 0*mus_pl_distortion_world_mvl/mxv
	.byte	W11
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W13
	.byte		        0*mus_pl_distortion_world_mvl/mxv
	.byte	W48
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W96
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W96
@ 063   ----------------------------------------
	.byte	W96
@ 064   ----------------------------------------
	.byte	W96
@ 065   ----------------------------------------
	.byte	W96
@ 066   ----------------------------------------
	.byte	W96
@ 067   ----------------------------------------
	.byte	W96
@ 068   ----------------------------------------
	.byte	W96
@ 069   ----------------------------------------
	.byte	W96
	.byte	GOTO
	 .word	mus_pl_distortion_world_10_B1
mus_pl_distortion_world_10_B2:
@ 070   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

mus_pl_distortion_world:
	.byte	10	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_pl_distortion_world_pri	@ Priority
	.byte	mus_pl_distortion_world_rev	@ Reverb.

	.word	mus_pl_distortion_world_grp

	.word	mus_pl_distortion_world_1
	.word	mus_pl_distortion_world_2
	.word	mus_pl_distortion_world_3
	.word	mus_pl_distortion_world_4
	.word	mus_pl_distortion_world_5
	.word	mus_pl_distortion_world_6
	.word	mus_pl_distortion_world_7
	.word	mus_pl_distortion_world_8
	.word	mus_pl_distortion_world_9
	.word	mus_pl_distortion_world_10

	.end
