/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/banner/ppc_elf_by_boomerang/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x100002E8 - 0x1000030F
 *	Argument size: 0
 *	Local size: 32
 *	Save regs size: 32
 */

_init()
{



    call_gmon_start();
    frame_dummy();
    return(__do_global_ctors_aux());
}

/* DEST BLOCK NOT FOUND: 10000330 -> 100122b8 */
/* DEST BLOCK NOT FOUND: 10000330 -> 100122b8 */
/*	Procedure: 0x10000310 - 0x10000333
 *	Argument size: -16
 *	Local size: 16
 *	Save regs size: 0
 */

_start()
{



    asm("rlwinm r1,r1,0,0,27");
    lr = 0;
    *r1 = 0;
    r8 = 268435456;
    asm("lwzu r13,0xa6c(r8)");
    goto __libc_start_main;
}

stack space not deallocated on return
/*	Procedure: 0x10000334 - 0x10000373
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

call_gmon_start(R3)
/* unknown */ void  R3;
{



    r3 = L10012244(R3);
    r0 = *(lr + 12);
    if(r0 != 0) {
        lr = r0;
        asm("bllr ");
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000374 - 0x100003EB
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_dtors_aux(R3)
/* unknown */ void  R3;
{



    r30 = 268500992;
    r0 = *completed.1;
    if(r0 == 0) {
        r31 = 268500992;
        r11 = *p.0;
        r9 = *r11;
        do {
            r0 = r11 + 4;
            lr = r9;
            *(r31 + 8432) = r0;
            asm("bllr ");
            r11 = *(r31 + 8432);
            r9 = *r11;
        } while(r9 != 0);
        *(r30 + 8912) = 1;
    }
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x100003EC - 0x10000407
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_dtors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000408 - 0x1000044B
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

frame_dummy()
{



    r3 = __JCR_LIST__;
    0 :: 0;
    if(*__JCR_LIST__ != 0) {
        == ? L1000043c : ;
        r3 = L10000000();
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x1000044C - 0x10000467
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call_frame_dummy()
{



    return(r3);
}

/*	Procedure: 0x10000468 - 0x100006E3
 *	Argument size: -144
 *	Local size: 144
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  V8;
	/* unknown */ void  Vc;
	/* unknown */ void  V10;
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;
	/* unknown */ void  V20;
	/* unknown */ void  V30;



    r3 = 12;
    asm("crxor cr1:eq,cr1:eq,cr1:eq");
    Vc = malloc();
    *(Vc + 4) = 0x10001df4;
    V8 = 2;
    for(Vc = Vc + 4; 1; Vc = Vc + 4) {
        r0 = V8 + -1;
        V8 = r0;
        if(V8 == 0) {
            break;
        }
        r3 = strlen( *Vc);
        V1c = r3;
        if(V1c > 10) {
            V1c = 10;
        }
        for(V10 = 0; V10 <= 6; V10 = V10 + 1) {
            for(V14 = 0; 1; V14 = V14 + 1) {
                r9 = V1c;
                if(V14 >= r9) {
                    break;
                }
                r9 = *Vc + V14;
                r0 = *r9;
                asm("rlwinm r9,r0,0,24,31");
                r0 = r9 + -32;
                V20 = r0;
                if(V20 < 0) {
                    V20 = 0;
                }
                for(V18 = 0; V18 <= 6; V18 = r9 + 1) {
                    r0 = V14;
                    asm("rlwinm r9,r0,3,0,28");
                    r10 = r9 + & V8 + V18 + 40;
                    r9 = 268500992;
                    r11 = glyphs;
                    r0 = V20;
                    r0 = r3 >> 3;
                    asm("addze r0,r0");
                    asm("mulli r9,r0,7");
                    r0 = r9 + V10;
                    asm("rlwinm r0,r0,2,0,29");
                    r11 = r0 + r11;
                    r9 = V20;
                    r0 = r3 >> 3;
                    asm("addze r0,r0");
                    asm("rlwinm r0,r0,3,0,28");
                    r0 = r9 - r0;
                    asm("mulli r9,r0,7");
                    *r10 = *(r9 + V18 + *r11);
                    r9 = V18;
                }
                r0 = V14;
                asm("rlwinm r9,r0,3,0,28");
                *(r9 + & V8 + 47) = 32;
            }
            r0 = V1c;
            asm("rlwinm r9,r0,3,0,28");
            for(V14 = r9 + -1; V14 >= 0; V14 = V14 + -1) {
                r0 = *( & V30 + V14);
                asm("rlwinm r0,r0,0,24,31");
                if(r0 != 32) {
                    break;
                }
                *( & V30 + V14) = 0;
            }
            r3 = puts( & V30);
        }
        puts(0x10001e00);
    }
    return(0);
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x100006E4 - 0x10000773
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_fini(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L100006f0();
    V18 = r30;
    r30 = lr;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    r0 = *(r30 + -32768) - *(r30 + -32764);
    0 :: ;
    r31 = (r2 >> 2) + -1;
    asm("bc ne,0x10000730");
    goto L10000750;
    r11 = *(r30 + -32764);
    asm("rlwinm r8,r31,2,0,29");
    r29 = r31;
    r31 = r31 + -1;
    lr = *(r8 + r11);
    asm("blctr ");
    0 :: ;
    asm("bc ne,0x1000072c");
L10000750:
    r29 = V14;
    r30 = V18;
    r31 = V1c;
    lr = A24;
    return(_fini());
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x10000774 - 0x100007FF
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_init(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V10;
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L10000780();
    V18 = r30;
    r30 = lr;
    V10 = r28;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    _init();
    r28 = *(r30 + -32756);
    r31 = 0;
    r3 = *(r30 + -32760) - r28;
    r0 = r2 >> 2;
    r0 :: ;
    asm("bc ge,0x100007e0");
    r29 = r0;
    asm("rlwinm r7,r31,2,0,29");
    r31 = r31 + 1;
    lr = *(r7 + r28);
    asm("blctr ");
    r29 :: ;
    asm("bc lt,0x100007c4");
    r28 = V10;
    r29 = V14;
    r30 = V18;
    lr = A24;
    r31 = V1c;
    return(r3);
}

/*	Procedure: 0x10000800 - 0x10000803
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_14()
{



    asm("stfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000804 - 0x10000807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_15()
{



    asm("stfd fr15,-0x88(r11)");
}

/*	Procedure: 0x10000808 - 0x1000080B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_16()
{



    asm("stfd fr16,-0x80(r11)");
}

/*	Procedure: 0x1000080C - 0x1000080F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_17()
{



    asm("stfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000810 - 0x10000813
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_18()
{



    asm("stfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000814 - 0x10000817
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_19()
{



    asm("stfd fr19,-0x68(r11)");
}

/*	Procedure: 0x10000818 - 0x1000081B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_20()
{



    asm("stfd fr20,-0x60(r11)");
}

/*	Procedure: 0x1000081C - 0x1000081F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_21()
{



    asm("stfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000820 - 0x10000823
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_22()
{



    asm("stfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000824 - 0x10000827
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_23()
{



    asm("stfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000828 - 0x1000082B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_24()
{



    asm("stfd fr24,-0x40(r11)");
}

/*	Procedure: 0x1000082C - 0x1000082F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_25()
{



    asm("stfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000830 - 0x10000833
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_26()
{



    asm("stfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000834 - 0x10000837
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_27()
{



    asm("stfd fr27,-0x28(r11)");
}

/*	Procedure: 0x10000838 - 0x1000083B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_28()
{



    asm("stfd fr28,-0x20(r11)");
}

/*	Procedure: 0x1000083C - 0x1000083F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_29()
{



    asm("stfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000840 - 0x10000843
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_30()
{



    asm("stfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000844 - 0x1000084B
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_31(R3)
/* unknown */ void  R3;
{



    asm("stfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x1000084C - 0x1000084F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_14()
{



    *(r11 + -72) = r14;
}

/*	Procedure: 0x10000850 - 0x10000853
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_15()
{



    *(r11 + -68) = r15;
}

/*	Procedure: 0x10000854 - 0x10000857
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_16()
{



    *(r11 + -64) = r16;
}

/*	Procedure: 0x10000858 - 0x1000085B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_17()
{



    *(r11 + -60) = r17;
}

/*	Procedure: 0x1000085C - 0x1000085F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_18()
{



    *(r11 + -56) = r18;
}

/*	Procedure: 0x10000860 - 0x10000863
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_19()
{



    *(r11 + -52) = r19;
}

/*	Procedure: 0x10000864 - 0x10000867
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_20()
{



    *(r11 + -48) = r20;
}

/*	Procedure: 0x10000868 - 0x1000086B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_21()
{



    *(r11 + -44) = r21;
}

/*	Procedure: 0x1000086C - 0x1000086F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_22()
{



    *(r11 + -40) = r22;
}

/*	Procedure: 0x10000870 - 0x10000873
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_23()
{



    *(r11 + -36) = r23;
}

/*	Procedure: 0x10000874 - 0x10000877
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_24()
{



    *(r11 + -32) = r24;
}

/*	Procedure: 0x10000878 - 0x1000087B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_25()
{



    *(r11 + -28) = r25;
}

/*	Procedure: 0x1000087C - 0x1000087F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_26()
{



    *(r11 + -24) = r26;
}

/*	Procedure: 0x10000880 - 0x10000883
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_27()
{



    *(r11 + -20) = r27;
}

/*	Procedure: 0x10000884 - 0x10000887
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_28()
{



    *(r11 + -16) = r28;
}

/*	Procedure: 0x10000888 - 0x1000088B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_29()
{



    *(r11 + -12) = r29;
}

/*	Procedure: 0x1000088C - 0x1000088F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_30()
{



    *(r11 + -8) = r30;
}

/*	Procedure: 0x10000890 - 0x10000897
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_31(R3)
/* unknown */ void  R3;
{



    *(r11 + -4) = r31;
    return(R3);
}

/*	Procedure: 0x10000898 - 0x1000089B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x1000089C - 0x1000089F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x100008A0 - 0x100008A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x100008A4 - 0x100008A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x100008A8 - 0x100008AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x100008AC - 0x100008AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x100008B0 - 0x100008B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x100008B4 - 0x100008B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x100008B8 - 0x100008BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x100008BC - 0x100008BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x100008C0 - 0x100008C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x100008C4 - 0x100008C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x100008C8 - 0x100008CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x100008CC - 0x100008CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x100008D0 - 0x100008D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x100008D4 - 0x100008D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x100008D8 - 0x100008DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x100008DC - 0x100008E3
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31(R3)
/* unknown */ void  R3;
{



    asm("lfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x100008E4 - 0x100008E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x100008E8 - 0x100008EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x100008EC - 0x100008EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x100008F0 - 0x100008F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x100008F4 - 0x100008F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x100008F8 - 0x100008FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x100008FC - 0x100008FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x10000900 - 0x10000903
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x10000904 - 0x10000907
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x10000908 - 0x1000090B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x1000090C - 0x1000090F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x10000910 - 0x10000913
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x10000914 - 0x10000917
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x10000918 - 0x1000091B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x1000091C - 0x1000091F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x10000920 - 0x10000923
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x10000924 - 0x10000927
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x10000928 - 0x1000092F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    return(R3);
}

/*	Procedure: 0x10000930 - 0x10000933
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14_x()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000934 - 0x10000937
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15_x()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x10000938 - 0x1000093B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16_x()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x1000093C - 0x1000093F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17_x()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000940 - 0x10000943
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18_x()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000944 - 0x10000947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19_x()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x10000948 - 0x1000094B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20_x()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x1000094C - 0x1000094F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21_x()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000950 - 0x10000953
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22_x()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000954 - 0x10000957
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23_x()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000958 - 0x1000095B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24_x()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x1000095C - 0x1000095F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25_x()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000960 - 0x10000963
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26_x()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000964 - 0x10000967
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27_x()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x10000968 - 0x1000096B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28_x()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x1000096C - 0x1000096F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29_x()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000970 - 0x10000973
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30_x()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000974 - 0x10000987
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31_x(R3)
/* unknown */ void  R3;
{



    r0 = *(r11 + 4);
    asm("lfd fr31,-8(r11)");
    lr = r0;
    r1 = r11;
    return(R3);
}

/*	Procedure: 0x10000988 - 0x1000098B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14_x()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x1000098C - 0x1000098F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15_x()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x10000990 - 0x10000993
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16_x()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x10000994 - 0x10000997
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17_x()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x10000998 - 0x1000099B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18_x()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x1000099C - 0x1000099F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19_x()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x100009A0 - 0x100009A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20_x()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x100009A4 - 0x100009A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21_x()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x100009A8 - 0x100009AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22_x()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x100009AC - 0x100009AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23_x()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x100009B0 - 0x100009B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24_x()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x100009B4 - 0x100009B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25_x()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x100009B8 - 0x100009BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26_x()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x100009BC - 0x100009BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27_x()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x100009C0 - 0x100009C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28_x()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x100009C4 - 0x100009C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29_x()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x100009C8 - 0x100009CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30_x()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x100009CC - 0x100009DF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31_x(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    lr = *(r11 + 4);
    r1 = r11;
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x100009E0 - 0x10000A2F
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_ctors_aux(R3)
/* unknown */ void  R3;
{



    r31 = __CTOR_END__ + -4;
    r0 = *(__CTOR_END__ + -4);
    do {
        lr = r0;
        asm("bllr ");
        asm("lwzu r0,-4(r31)");
    } while(r0 != -1);
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x10000A30 - 0x10000A4B
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_ctors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000A4C - 0x10000A6B
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

_fini(R3)
/* unknown */ void  R3;
{



    return(__do_global_dtors_aux());
}

/*	Procedure: 0x10012244 - 0x10012257
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L10012244()
{



    asm("bllr ");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
}

/*	Procedure: 0x100122A0 - 0x100122A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
{



    asm("?");
    asm("andis. r15,r3,0x6f200000");
}

/*	Procedure: 0x100122A8 - 0x100122AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

malloc()
{



    asm("?");
    asm("rldimi r0,r1,13,25");
}

/*	Procedure: 0x100122B0 - 0x100122B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strlen()
{



    r25 = r14 + 13151;
    asm("andi. r18,r3,0x6532");
}

/*	Procedure: 0x100122B8 - 0x100122CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_start_main()
{



    r1 = r16 + 13360;
    asm("addic. r1,r16,0x382d");
    asm("andi. r17,r17,0x2900");
    asm("?");
    r17 = 10311;
    asm("?");
}

/* address  size  */
/* 0x100002e8      40 */ /* unknown */ void 	_init;
/* 0x10000310      36 */ /* unknown */ void 	_start;
/* 0x10000334      64 */ /* unknown */ void 	call_gmon_start;
/* 0x10000374     120 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x100003ec      28 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x10000408      68 */ /* unknown */ void 	frame_dummy;
/* 0x1000044c      28 */ /* unknown */ void 	call_frame_dummy;
/* 0x10000468     636 */ /* unknown */ void 	main;
/* 0x100006e4     144 */ /* unknown */ void 	__libc_csu_fini;
/* 0x10000774     140 */ /* unknown */ void 	__libc_csu_init;
/* 0x10000800       4 */ /* unknown */ void 	_savefpr_14;
/* 0x10000804       4 */ /* unknown */ void 	_savefpr_15;
/* 0x10000808       4 */ /* unknown */ void 	_savefpr_16;
/* 0x1000080c       4 */ /* unknown */ void 	_savefpr_17;
/* 0x10000810       4 */ /* unknown */ void 	_savefpr_18;
/* 0x10000814       4 */ /* unknown */ void 	_savefpr_19;
/* 0x10000818       4 */ /* unknown */ void 	_savefpr_20;
/* 0x1000081c       4 */ /* unknown */ void 	_savefpr_21;
/* 0x10000820       4 */ /* unknown */ void 	_savefpr_22;
/* 0x10000824       4 */ /* unknown */ void 	_savefpr_23;
/* 0x10000828       4 */ /* unknown */ void 	_savefpr_24;
/* 0x1000082c       4 */ /* unknown */ void 	_savefpr_25;
/* 0x10000830       4 */ /* unknown */ void 	_savefpr_26;
/* 0x10000834       4 */ /* unknown */ void 	_savefpr_27;
/* 0x10000838       4 */ /* unknown */ void 	_savefpr_28;
/* 0x1000083c       4 */ /* unknown */ void 	_savefpr_29;
/* 0x10000840       4 */ /* unknown */ void 	_savefpr_30;
/* 0x10000844       8 */ /* unknown */ void 	_savefpr_31;
/* 0x1000084c       4 */ /* unknown */ void 	_savegpr_14;
/* 0x10000850       4 */ /* unknown */ void 	_savegpr_15;
/* 0x10000854       4 */ /* unknown */ void 	_savegpr_16;
/* 0x10000858       4 */ /* unknown */ void 	_savegpr_17;
/* 0x1000085c       4 */ /* unknown */ void 	_savegpr_18;
/* 0x10000860       4 */ /* unknown */ void 	_savegpr_19;
/* 0x10000864       4 */ /* unknown */ void 	_savegpr_20;
/* 0x10000868       4 */ /* unknown */ void 	_savegpr_21;
/* 0x1000086c       4 */ /* unknown */ void 	_savegpr_22;
/* 0x10000870       4 */ /* unknown */ void 	_savegpr_23;
/* 0x10000874       4 */ /* unknown */ void 	_savegpr_24;
/* 0x10000878       4 */ /* unknown */ void 	_savegpr_25;
/* 0x1000087c       4 */ /* unknown */ void 	_savegpr_26;
/* 0x10000880       4 */ /* unknown */ void 	_savegpr_27;
/* 0x10000884       4 */ /* unknown */ void 	_savegpr_28;
/* 0x10000888       4 */ /* unknown */ void 	_savegpr_29;
/* 0x1000088c       4 */ /* unknown */ void 	_savegpr_30;
/* 0x10000890       8 */ /* unknown */ void 	_savegpr_31;
/* 0x10000898       4 */ /* unknown */ void 	_restfpr_14;
/* 0x1000089c       4 */ /* unknown */ void 	_restfpr_15;
/* 0x100008a0       4 */ /* unknown */ void 	_restfpr_16;
/* 0x100008a4       4 */ /* unknown */ void 	_restfpr_17;
/* 0x100008a8       4 */ /* unknown */ void 	_restfpr_18;
/* 0x100008ac       4 */ /* unknown */ void 	_restfpr_19;
/* 0x100008b0       4 */ /* unknown */ void 	_restfpr_20;
/* 0x100008b4       4 */ /* unknown */ void 	_restfpr_21;
/* 0x100008b8       4 */ /* unknown */ void 	_restfpr_22;
/* 0x100008bc       4 */ /* unknown */ void 	_restfpr_23;
/* 0x100008c0       4 */ /* unknown */ void 	_restfpr_24;
/* 0x100008c4       4 */ /* unknown */ void 	_restfpr_25;
/* 0x100008c8       4 */ /* unknown */ void 	_restfpr_26;
/* 0x100008cc       4 */ /* unknown */ void 	_restfpr_27;
/* 0x100008d0       4 */ /* unknown */ void 	_restfpr_28;
/* 0x100008d4       4 */ /* unknown */ void 	_restfpr_29;
/* 0x100008d8       4 */ /* unknown */ void 	_restfpr_30;
/* 0x100008dc       8 */ /* unknown */ void 	_restfpr_31;
/* 0x100008e4       4 */ /* unknown */ void 	_restgpr_14;
/* 0x100008e8       4 */ /* unknown */ void 	_restgpr_15;
/* 0x100008ec       4 */ /* unknown */ void 	_restgpr_16;
/* 0x100008f0       4 */ /* unknown */ void 	_restgpr_17;
/* 0x100008f4       4 */ /* unknown */ void 	_restgpr_18;
/* 0x100008f8       4 */ /* unknown */ void 	_restgpr_19;
/* 0x100008fc       4 */ /* unknown */ void 	_restgpr_20;
/* 0x10000900       4 */ /* unknown */ void 	_restgpr_21;
/* 0x10000904       4 */ /* unknown */ void 	_restgpr_22;
/* 0x10000908       4 */ /* unknown */ void 	_restgpr_23;
/* 0x1000090c       4 */ /* unknown */ void 	_restgpr_24;
/* 0x10000910       4 */ /* unknown */ void 	_restgpr_25;
/* 0x10000914       4 */ /* unknown */ void 	_restgpr_26;
/* 0x10000918       4 */ /* unknown */ void 	_restgpr_27;
/* 0x1000091c       4 */ /* unknown */ void 	_restgpr_28;
/* 0x10000920       4 */ /* unknown */ void 	_restgpr_29;
/* 0x10000924       4 */ /* unknown */ void 	_restgpr_30;
/* 0x10000928       8 */ /* unknown */ void 	_restgpr_31;
/* 0x10000930       4 */ /* unknown */ void 	_restfpr_14_x;
/* 0x10000934       4 */ /* unknown */ void 	_restfpr_15_x;
/* 0x10000938       4 */ /* unknown */ void 	_restfpr_16_x;
/* 0x1000093c       4 */ /* unknown */ void 	_restfpr_17_x;
/* 0x10000940       4 */ /* unknown */ void 	_restfpr_18_x;
/* 0x10000944       4 */ /* unknown */ void 	_restfpr_19_x;
/* 0x10000948       4 */ /* unknown */ void 	_restfpr_20_x;
/* 0x1000094c       4 */ /* unknown */ void 	_restfpr_21_x;
/* 0x10000950       4 */ /* unknown */ void 	_restfpr_22_x;
/* 0x10000954       4 */ /* unknown */ void 	_restfpr_23_x;
/* 0x10000958       4 */ /* unknown */ void 	_restfpr_24_x;
/* 0x1000095c       4 */ /* unknown */ void 	_restfpr_25_x;
/* 0x10000960       4 */ /* unknown */ void 	_restfpr_26_x;
/* 0x10000964       4 */ /* unknown */ void 	_restfpr_27_x;
/* 0x10000968       4 */ /* unknown */ void 	_restfpr_28_x;
/* 0x1000096c       4 */ /* unknown */ void 	_restfpr_29_x;
/* 0x10000970       4 */ /* unknown */ void 	_restfpr_30_x;
/* 0x10000974      20 */ /* unknown */ void 	_restfpr_31_x;
/* 0x10000988       4 */ /* unknown */ void 	_restgpr_14_x;
/* 0x1000098c       4 */ /* unknown */ void 	_restgpr_15_x;
/* 0x10000990       4 */ /* unknown */ void 	_restgpr_16_x;
/* 0x10000994       4 */ /* unknown */ void 	_restgpr_17_x;
/* 0x10000998       4 */ /* unknown */ void 	_restgpr_18_x;
/* 0x1000099c       4 */ /* unknown */ void 	_restgpr_19_x;
/* 0x100009a0       4 */ /* unknown */ void 	_restgpr_20_x;
/* 0x100009a4       4 */ /* unknown */ void 	_restgpr_21_x;
/* 0x100009a8       4 */ /* unknown */ void 	_restgpr_22_x;
/* 0x100009ac       4 */ /* unknown */ void 	_restgpr_23_x;
/* 0x100009b0       4 */ /* unknown */ void 	_restgpr_24_x;
/* 0x100009b4       4 */ /* unknown */ void 	_restgpr_25_x;
/* 0x100009b8       4 */ /* unknown */ void 	_restgpr_26_x;
/* 0x100009bc       4 */ /* unknown */ void 	_restgpr_27_x;
/* 0x100009c0       4 */ /* unknown */ void 	_restgpr_28_x;
/* 0x100009c4       4 */ /* unknown */ void 	_restgpr_29_x;
/* 0x100009c8       4 */ /* unknown */ void 	_restgpr_30_x;
/* 0x100009cc      20 */ /* unknown */ void 	_restgpr_31_x;
/* 0x100009e0      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x10000a30      28 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x10000a4c       0 */ /* unknown */ void 	_fini;
/* 0x10000a7c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x10001e04       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x10009e04       0 */ /* unknown */ void 	_SDA2_BASE_;
/* 0x10012000       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x10012004       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x10012008       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x1001200c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x10012010       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x10012010       0 */ /* unknown */ void 	__JCR_END__;
/* 0x10012024       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x100120ec       0 */ /* unknown */ void 	__dso_handle;
/* 0x100120ec       0 */ /* unknown */ void 	data_start;
/* 0x100120ec       0 */ /* unknown */ void 	__data_start;
/* 0x100120f0       0 */ /* unknown */ void 	p.0;
/* 0x100120f4     336 */ /* unknown */ void 	glyphs;
/* 0x10012248       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x100122a0       8 */ /* unknown */ void 	puts;
/* 0x100122a8       8 */ /* unknown */ void 	malloc;
/* 0x100122b0       8 */ /* unknown */ void 	strlen;
/* 0x100122b8       1 */ /* unknown */ void 	__libc_start_main;
/* 0x100122d0       1 */ /* unknown */ void 	completed.1;
/* 0x1001a258       0 */ /* unknown */ void 	_SDA_BASE_;
#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: -flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
