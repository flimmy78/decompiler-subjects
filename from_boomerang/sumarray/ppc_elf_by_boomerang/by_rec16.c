/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/sumarray/ppc_elf_by_boomerang/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x10000298 - 0x100002BF
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

/* DEST BLOCK NOT FOUND: 100002e0 -> 100109dc */
/* DEST BLOCK NOT FOUND: 100002e0 -> 100109dc */
/*	Procedure: 0x100002C0 - 0x100002E3
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
    asm("lwzu r13,0x840(r8)");
    goto __libc_start_main;
}

stack space not deallocated on return
/*	Procedure: 0x100002E4 - 0x10000323
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

call_gmon_start(R3)
/* unknown */ void  R3;
{



    r3 = L10010980(R3);
    r0 = *(lr + 12);
    if(r0 != 0) {
        lr = r0;
        asm("bllr ");
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000324 - 0x1000039B
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
            *(r31 + 2388) = r0;
            asm("bllr ");
            r11 = *(r31 + 2388);
            r9 = *r11;
        } while(r9 != 0);
        *(r30 + 2548) = 1;
    }
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x1000039C - 0x100003B7
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_dtors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x100003B8 - 0x100003FB
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

frame_dummy()
{



    r3 = __JCR_LIST__;
    0 :: 0;
    if(*__JCR_LIST__ != 0) {
        == ? L100003ec : ;
        r3 = L10000000();
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x100003FC - 0x10000417
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call_frame_dummy()
{



    return(r3);
}

/*	Procedure: 0x10000418 - 0x100004B7
 *	Argument size: -32
 *	Local size: 32
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  V8;
	/* unknown */ void  Vc;



    V8 = 0;
    for(Vc = 0; Vc <= 9; Vc = Vc + 1) {
        r9 = a;
        r0 = Vc;
        asm("rlwinm r0,r0,2,0,29");
        V8 = V8 + *(r0 + r9);
    }
    r3 = 0x10000854;
    r4 = V8;
    asm("crxor cr1:eq,cr1:eq,cr1:eq");
    printf();
    return(0);
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x100004B8 - 0x10000547
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
    L100004c4();
    V18 = r30;
    r30 = lr;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    r0 = *(r30 + -32768) - *(r30 + -32764);
    0 :: ;
    r31 = (r2 >> 2) + -1;
    asm("bc ne,0x10000504");
    goto L10000524;
    r11 = *(r30 + -32764);
    asm("rlwinm r8,r31,2,0,29");
    r29 = r31;
    r31 = r31 + -1;
    lr = *(r8 + r11);
    asm("blctr ");
    0 :: ;
    asm("bc ne,0x10000500");
L10000524:
    r29 = V14;
    r30 = V18;
    r31 = V1c;
    lr = A24;
    return(_fini());
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x10000548 - 0x100005D3
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
    L10000554();
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
    asm("bc ge,0x100005b4");
    r29 = r0;
    asm("rlwinm r7,r31,2,0,29");
    r31 = r31 + 1;
    lr = *(r7 + r28);
    asm("blctr ");
    r29 :: ;
    asm("bc lt,0x10000598");
    r28 = V10;
    r29 = V14;
    r30 = V18;
    lr = A24;
    r31 = V1c;
    return(r3);
}

/*	Procedure: 0x100005D4 - 0x100005D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_14()
{



    asm("stfd fr14,-0x90(r11)");
}

/*	Procedure: 0x100005D8 - 0x100005DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_15()
{



    asm("stfd fr15,-0x88(r11)");
}

/*	Procedure: 0x100005DC - 0x100005DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_16()
{



    asm("stfd fr16,-0x80(r11)");
}

/*	Procedure: 0x100005E0 - 0x100005E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_17()
{



    asm("stfd fr17,-0x78(r11)");
}

/*	Procedure: 0x100005E4 - 0x100005E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_18()
{



    asm("stfd fr18,-0x70(r11)");
}

/*	Procedure: 0x100005E8 - 0x100005EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_19()
{



    asm("stfd fr19,-0x68(r11)");
}

/*	Procedure: 0x100005EC - 0x100005EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_20()
{



    asm("stfd fr20,-0x60(r11)");
}

/*	Procedure: 0x100005F0 - 0x100005F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_21()
{



    asm("stfd fr21,-0x58(r11)");
}

/*	Procedure: 0x100005F4 - 0x100005F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_22()
{



    asm("stfd fr22,-0x50(r11)");
}

/*	Procedure: 0x100005F8 - 0x100005FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_23()
{



    asm("stfd fr23,-0x48(r11)");
}

/*	Procedure: 0x100005FC - 0x100005FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_24()
{



    asm("stfd fr24,-0x40(r11)");
}

/*	Procedure: 0x10000600 - 0x10000603
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_25()
{



    asm("stfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000604 - 0x10000607
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_26()
{



    asm("stfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000608 - 0x1000060B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_27()
{



    asm("stfd fr27,-0x28(r11)");
}

/*	Procedure: 0x1000060C - 0x1000060F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_28()
{



    asm("stfd fr28,-0x20(r11)");
}

/*	Procedure: 0x10000610 - 0x10000613
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_29()
{



    asm("stfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000614 - 0x10000617
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_30()
{



    asm("stfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000618 - 0x1000061F
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

/*	Procedure: 0x10000620 - 0x10000623
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_14()
{



    *(r11 + -72) = r14;
}

/*	Procedure: 0x10000624 - 0x10000627
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_15()
{



    *(r11 + -68) = r15;
}

/*	Procedure: 0x10000628 - 0x1000062B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_16()
{



    *(r11 + -64) = r16;
}

/*	Procedure: 0x1000062C - 0x1000062F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_17()
{



    *(r11 + -60) = r17;
}

/*	Procedure: 0x10000630 - 0x10000633
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_18()
{



    *(r11 + -56) = r18;
}

/*	Procedure: 0x10000634 - 0x10000637
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_19()
{



    *(r11 + -52) = r19;
}

/*	Procedure: 0x10000638 - 0x1000063B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_20()
{



    *(r11 + -48) = r20;
}

/*	Procedure: 0x1000063C - 0x1000063F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_21()
{



    *(r11 + -44) = r21;
}

/*	Procedure: 0x10000640 - 0x10000643
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_22()
{



    *(r11 + -40) = r22;
}

/*	Procedure: 0x10000644 - 0x10000647
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_23()
{



    *(r11 + -36) = r23;
}

/*	Procedure: 0x10000648 - 0x1000064B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_24()
{



    *(r11 + -32) = r24;
}

/*	Procedure: 0x1000064C - 0x1000064F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_25()
{



    *(r11 + -28) = r25;
}

/*	Procedure: 0x10000650 - 0x10000653
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_26()
{



    *(r11 + -24) = r26;
}

/*	Procedure: 0x10000654 - 0x10000657
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_27()
{



    *(r11 + -20) = r27;
}

/*	Procedure: 0x10000658 - 0x1000065B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_28()
{



    *(r11 + -16) = r28;
}

/*	Procedure: 0x1000065C - 0x1000065F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_29()
{



    *(r11 + -12) = r29;
}

/*	Procedure: 0x10000660 - 0x10000663
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_30()
{



    *(r11 + -8) = r30;
}

/*	Procedure: 0x10000664 - 0x1000066B
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

/*	Procedure: 0x1000066C - 0x1000066F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000670 - 0x10000673
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x10000674 - 0x10000677
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x10000678 - 0x1000067B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x1000067C - 0x1000067F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000680 - 0x10000683
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x10000684 - 0x10000687
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x10000688 - 0x1000068B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x1000068C - 0x1000068F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000690 - 0x10000693
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000694 - 0x10000697
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x10000698 - 0x1000069B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x1000069C - 0x1000069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x100006A0 - 0x100006A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x100006A4 - 0x100006A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x100006A8 - 0x100006AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x100006AC - 0x100006AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x100006B0 - 0x100006B7
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

/*	Procedure: 0x100006B8 - 0x100006BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x100006BC - 0x100006BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x100006C0 - 0x100006C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x100006C4 - 0x100006C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x100006C8 - 0x100006CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x100006CC - 0x100006CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x100006D0 - 0x100006D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x100006D4 - 0x100006D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x100006D8 - 0x100006DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x100006DC - 0x100006DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x100006E0 - 0x100006E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x100006E4 - 0x100006E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x100006E8 - 0x100006EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x100006EC - 0x100006EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x100006F0 - 0x100006F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x100006F4 - 0x100006F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x100006F8 - 0x100006FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x100006FC - 0x10000703
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

/*	Procedure: 0x10000704 - 0x10000707
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14_x()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000708 - 0x1000070B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15_x()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x1000070C - 0x1000070F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16_x()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x10000710 - 0x10000713
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17_x()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000714 - 0x10000717
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18_x()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000718 - 0x1000071B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19_x()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x1000071C - 0x1000071F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20_x()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x10000720 - 0x10000723
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21_x()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000724 - 0x10000727
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22_x()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000728 - 0x1000072B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23_x()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x1000072C - 0x1000072F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24_x()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x10000730 - 0x10000733
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25_x()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000734 - 0x10000737
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26_x()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000738 - 0x1000073B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27_x()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x1000073C - 0x1000073F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28_x()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x10000740 - 0x10000743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29_x()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000744 - 0x10000747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30_x()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000748 - 0x1000075B
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

/*	Procedure: 0x1000075C - 0x1000075F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14_x()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x10000760 - 0x10000763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15_x()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x10000764 - 0x10000767
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16_x()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x10000768 - 0x1000076B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17_x()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x1000076C - 0x1000076F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18_x()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x10000770 - 0x10000773
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19_x()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x10000774 - 0x10000777
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20_x()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x10000778 - 0x1000077B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21_x()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x1000077C - 0x1000077F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22_x()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x10000780 - 0x10000783
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23_x()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x10000784 - 0x10000787
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24_x()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x10000788 - 0x1000078B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25_x()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x1000078C - 0x1000078F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26_x()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x10000790 - 0x10000793
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27_x()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x10000794 - 0x10000797
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28_x()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x10000798 - 0x1000079B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29_x()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x1000079C - 0x1000079F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30_x()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x100007A0 - 0x100007B3
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
/*	Procedure: 0x100007B4 - 0x10000803
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
/*	Procedure: 0x10000804 - 0x1000081F
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_ctors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000820 - 0x1000083F
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

_fini(R3)
/* unknown */ void  R3;
{



    return(__do_global_dtors_aux());
}

/*	Procedure: 0x10010980 - 0x10010993
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L10010980()
{



    asm("bllr ");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
}

/*	Procedure: 0x100109DC - 0x100109E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_start_main()
{



    asm("?");
    asm("andis. r15,r3,0x6f200000");
}

/*	Procedure: 0x100109E4 - 0x100109F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    asm("?");
    asm("rldimi r0,r1,13,25");
    r25 = r14 + 13151;
    asm("andi. r18,r3,0x6532");
}

/* address  size  */
/* 0x10000298      40 */ /* unknown */ void 	_init;
/* 0x100002c0      36 */ /* unknown */ void 	_start;
/* 0x100002e4      64 */ /* unknown */ void 	call_gmon_start;
/* 0x10000324     120 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x1000039c      28 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x100003b8      68 */ /* unknown */ void 	frame_dummy;
/* 0x100003fc      28 */ /* unknown */ void 	call_frame_dummy;
/* 0x10000418     160 */ /* unknown */ void 	main;
/* 0x100004b8     144 */ /* unknown */ void 	__libc_csu_fini;
/* 0x10000548     140 */ /* unknown */ void 	__libc_csu_init;
/* 0x100005d4       4 */ /* unknown */ void 	_savefpr_14;
/* 0x100005d8       4 */ /* unknown */ void 	_savefpr_15;
/* 0x100005dc       4 */ /* unknown */ void 	_savefpr_16;
/* 0x100005e0       4 */ /* unknown */ void 	_savefpr_17;
/* 0x100005e4       4 */ /* unknown */ void 	_savefpr_18;
/* 0x100005e8       4 */ /* unknown */ void 	_savefpr_19;
/* 0x100005ec       4 */ /* unknown */ void 	_savefpr_20;
/* 0x100005f0       4 */ /* unknown */ void 	_savefpr_21;
/* 0x100005f4       4 */ /* unknown */ void 	_savefpr_22;
/* 0x100005f8       4 */ /* unknown */ void 	_savefpr_23;
/* 0x100005fc       4 */ /* unknown */ void 	_savefpr_24;
/* 0x10000600       4 */ /* unknown */ void 	_savefpr_25;
/* 0x10000604       4 */ /* unknown */ void 	_savefpr_26;
/* 0x10000608       4 */ /* unknown */ void 	_savefpr_27;
/* 0x1000060c       4 */ /* unknown */ void 	_savefpr_28;
/* 0x10000610       4 */ /* unknown */ void 	_savefpr_29;
/* 0x10000614       4 */ /* unknown */ void 	_savefpr_30;
/* 0x10000618       8 */ /* unknown */ void 	_savefpr_31;
/* 0x10000620       4 */ /* unknown */ void 	_savegpr_14;
/* 0x10000624       4 */ /* unknown */ void 	_savegpr_15;
/* 0x10000628       4 */ /* unknown */ void 	_savegpr_16;
/* 0x1000062c       4 */ /* unknown */ void 	_savegpr_17;
/* 0x10000630       4 */ /* unknown */ void 	_savegpr_18;
/* 0x10000634       4 */ /* unknown */ void 	_savegpr_19;
/* 0x10000638       4 */ /* unknown */ void 	_savegpr_20;
/* 0x1000063c       4 */ /* unknown */ void 	_savegpr_21;
/* 0x10000640       4 */ /* unknown */ void 	_savegpr_22;
/* 0x10000644       4 */ /* unknown */ void 	_savegpr_23;
/* 0x10000648       4 */ /* unknown */ void 	_savegpr_24;
/* 0x1000064c       4 */ /* unknown */ void 	_savegpr_25;
/* 0x10000650       4 */ /* unknown */ void 	_savegpr_26;
/* 0x10000654       4 */ /* unknown */ void 	_savegpr_27;
/* 0x10000658       4 */ /* unknown */ void 	_savegpr_28;
/* 0x1000065c       4 */ /* unknown */ void 	_savegpr_29;
/* 0x10000660       4 */ /* unknown */ void 	_savegpr_30;
/* 0x10000664       8 */ /* unknown */ void 	_savegpr_31;
/* 0x1000066c       4 */ /* unknown */ void 	_restfpr_14;
/* 0x10000670       4 */ /* unknown */ void 	_restfpr_15;
/* 0x10000674       4 */ /* unknown */ void 	_restfpr_16;
/* 0x10000678       4 */ /* unknown */ void 	_restfpr_17;
/* 0x1000067c       4 */ /* unknown */ void 	_restfpr_18;
/* 0x10000680       4 */ /* unknown */ void 	_restfpr_19;
/* 0x10000684       4 */ /* unknown */ void 	_restfpr_20;
/* 0x10000688       4 */ /* unknown */ void 	_restfpr_21;
/* 0x1000068c       4 */ /* unknown */ void 	_restfpr_22;
/* 0x10000690       4 */ /* unknown */ void 	_restfpr_23;
/* 0x10000694       4 */ /* unknown */ void 	_restfpr_24;
/* 0x10000698       4 */ /* unknown */ void 	_restfpr_25;
/* 0x1000069c       4 */ /* unknown */ void 	_restfpr_26;
/* 0x100006a0       4 */ /* unknown */ void 	_restfpr_27;
/* 0x100006a4       4 */ /* unknown */ void 	_restfpr_28;
/* 0x100006a8       4 */ /* unknown */ void 	_restfpr_29;
/* 0x100006ac       4 */ /* unknown */ void 	_restfpr_30;
/* 0x100006b0       8 */ /* unknown */ void 	_restfpr_31;
/* 0x100006b8       4 */ /* unknown */ void 	_restgpr_14;
/* 0x100006bc       4 */ /* unknown */ void 	_restgpr_15;
/* 0x100006c0       4 */ /* unknown */ void 	_restgpr_16;
/* 0x100006c4       4 */ /* unknown */ void 	_restgpr_17;
/* 0x100006c8       4 */ /* unknown */ void 	_restgpr_18;
/* 0x100006cc       4 */ /* unknown */ void 	_restgpr_19;
/* 0x100006d0       4 */ /* unknown */ void 	_restgpr_20;
/* 0x100006d4       4 */ /* unknown */ void 	_restgpr_21;
/* 0x100006d8       4 */ /* unknown */ void 	_restgpr_22;
/* 0x100006dc       4 */ /* unknown */ void 	_restgpr_23;
/* 0x100006e0       4 */ /* unknown */ void 	_restgpr_24;
/* 0x100006e4       4 */ /* unknown */ void 	_restgpr_25;
/* 0x100006e8       4 */ /* unknown */ void 	_restgpr_26;
/* 0x100006ec       4 */ /* unknown */ void 	_restgpr_27;
/* 0x100006f0       4 */ /* unknown */ void 	_restgpr_28;
/* 0x100006f4       4 */ /* unknown */ void 	_restgpr_29;
/* 0x100006f8       4 */ /* unknown */ void 	_restgpr_30;
/* 0x100006fc       8 */ /* unknown */ void 	_restgpr_31;
/* 0x10000704       4 */ /* unknown */ void 	_restfpr_14_x;
/* 0x10000708       4 */ /* unknown */ void 	_restfpr_15_x;
/* 0x1000070c       4 */ /* unknown */ void 	_restfpr_16_x;
/* 0x10000710       4 */ /* unknown */ void 	_restfpr_17_x;
/* 0x10000714       4 */ /* unknown */ void 	_restfpr_18_x;
/* 0x10000718       4 */ /* unknown */ void 	_restfpr_19_x;
/* 0x1000071c       4 */ /* unknown */ void 	_restfpr_20_x;
/* 0x10000720       4 */ /* unknown */ void 	_restfpr_21_x;
/* 0x10000724       4 */ /* unknown */ void 	_restfpr_22_x;
/* 0x10000728       4 */ /* unknown */ void 	_restfpr_23_x;
/* 0x1000072c       4 */ /* unknown */ void 	_restfpr_24_x;
/* 0x10000730       4 */ /* unknown */ void 	_restfpr_25_x;
/* 0x10000734       4 */ /* unknown */ void 	_restfpr_26_x;
/* 0x10000738       4 */ /* unknown */ void 	_restfpr_27_x;
/* 0x1000073c       4 */ /* unknown */ void 	_restfpr_28_x;
/* 0x10000740       4 */ /* unknown */ void 	_restfpr_29_x;
/* 0x10000744       4 */ /* unknown */ void 	_restfpr_30_x;
/* 0x10000748      20 */ /* unknown */ void 	_restfpr_31_x;
/* 0x1000075c       4 */ /* unknown */ void 	_restgpr_14_x;
/* 0x10000760       4 */ /* unknown */ void 	_restgpr_15_x;
/* 0x10000764       4 */ /* unknown */ void 	_restgpr_16_x;
/* 0x10000768       4 */ /* unknown */ void 	_restgpr_17_x;
/* 0x1000076c       4 */ /* unknown */ void 	_restgpr_18_x;
/* 0x10000770       4 */ /* unknown */ void 	_restgpr_19_x;
/* 0x10000774       4 */ /* unknown */ void 	_restgpr_20_x;
/* 0x10000778       4 */ /* unknown */ void 	_restgpr_21_x;
/* 0x1000077c       4 */ /* unknown */ void 	_restgpr_22_x;
/* 0x10000780       4 */ /* unknown */ void 	_restgpr_23_x;
/* 0x10000784       4 */ /* unknown */ void 	_restgpr_24_x;
/* 0x10000788       4 */ /* unknown */ void 	_restgpr_25_x;
/* 0x1000078c       4 */ /* unknown */ void 	_restgpr_26_x;
/* 0x10000790       4 */ /* unknown */ void 	_restgpr_27_x;
/* 0x10000794       4 */ /* unknown */ void 	_restgpr_28_x;
/* 0x10000798       4 */ /* unknown */ void 	_restgpr_29_x;
/* 0x1000079c       4 */ /* unknown */ void 	_restgpr_30_x;
/* 0x100007a0      20 */ /* unknown */ void 	_restgpr_31_x;
/* 0x100007b4      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x10000804      28 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x10000820       0 */ /* unknown */ void 	_fini;
/* 0x10000850       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x10000860       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x10008860       0 */ /* unknown */ void 	_SDA2_BASE_;
/* 0x10010864       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x10010868       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x1001086c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x10010870       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x10010874       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x10010874       0 */ /* unknown */ void 	__JCR_END__;
/* 0x10010888       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x10010950       0 */ /* unknown */ void 	__dso_handle;
/* 0x10010950       0 */ /* unknown */ void 	data_start;
/* 0x10010950       0 */ /* unknown */ void 	__data_start;
/* 0x10010954       0 */ /* unknown */ void 	p.0;
/* 0x10010958      40 */ /* unknown */ void 	a;
/* 0x10010984       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x100109dc       8 */ /* unknown */ void 	__libc_start_main;
/* 0x100109e4       1 */ /* unknown */ void 	printf;
/* 0x100109f4       1 */ /* unknown */ void 	completed.1;
/* 0x10018994       0 */ /* unknown */ void 	_SDA_BASE_;
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
