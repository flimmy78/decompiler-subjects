/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/bswap/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048278 - 0x0804828E
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

_init()
{



    call_gmon_start();
    frame_dummy();
    return(__do_global_ctors_aux());
}

extern /* addr: 0804828F */  /*	Procedure: 0x0804828F - 0x0804829F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804828F()
/* DEST BLOCK NOT FOUND: 080482ab -> 08048290 */
/*	Procedure: 0x080482A0 - 0x080482AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A0()
{



    goto ( *L0804958c);
    (save)0;
    goto L08048290;
}

/* DEST BLOCK NOT FOUND: 080482bb -> 08048290 */
/*	Procedure: 0x080482B0 - 0x080482BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B0()
{



    goto ( *L08049590);
    (save)8;
    goto L08048290;
}

/*	Procedure: 0x080482C0 - 0x080482E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    ebp = 0;
    (restore)esi;
    ecx = esp;
    esp = esp & -16;
    (save)eax;
    (save)esp;
    (save)edx;
    (save)__libc_csu_fini;
    (save)__libc_csu_init;
    (save)ecx;
    (save)esi;
    (save)main;
    L080482A0();
    asm("hlt");
}

/*	Procedure: 0x080482E4 - 0x08048305
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    eax = L080482ed();
    (restore)ebx;
    (save)eax;
    eax = *(ebx + 4755 + -4);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x08048306 - 0x08048307
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048306()
{



}

/*	Procedure: 0x08048308 - 0x08048341
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.1 == 0) {
        eax = p.0;
        edx = *p.0;
        do {
            p.0 = eax + 4;
            *edx();
            eax = p.0;
            edx = *p.0;
        } while(edx != 0);
        completed.1 = 1;
    }
}

/*	Procedure: 0x08048342 - 0x08048343
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048342()
{



}

/*	Procedure: 0x08048344 - 0x0804836D
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

frame_dummy()
{



    eax = __JCR_LIST__;
    if(__JCR_LIST__ != 0) {
        eax = 0;
        if(0 != 0) {
            esp = esp - 12;
            (save)__JCR_LIST__;
            *L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x0804836E - 0x0804836F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804836E()
{



}

/*	Procedure: 0x08048370 - 0x08048379
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

bswap(A8)
/* unknown */ void  A8;
{



    asm("bswap eax");
}

/*	Procedure: 0x0804837A - 0x080483B6
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp;
    esp = esp - 12;
    Vfffffffc = bswap(305419896);
    esp = esp - 8;
    (save)Vfffffffc;
    (save)0x804848c;
    L080482B0();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483B7 - 0x080483B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483B7()
{



}

/*	Procedure: 0x080483B8 - 0x080483FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080483c6();
    (restore)ebx;
    ebx = ebx + 4538;
    eax = _init();
    edx = ebx + -224;
    edx = edx - ebx + -224;
    esi = 0;
    if(0 < edx >> 2) {
        edi = edx;
        do {
            eax = *(ebx + esi * 4 + -224)();
            esi = esi + 1;
        } while(esi < edi);
    }
}

/*	Procedure: 0x08048400 - 0x08048443
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L0804840a();
    (restore)ebx;
    ebx = ebx + 4470;
    ecx = ebx + -224;
    ecx = ecx - ebx + -224 >> 2;
    ecx :: 0;
    if(!(esi = ecx - 1)) {
        return(_fini());
    }
    do {
        *(ebx + esi * 4 + -224)();
        edx = esi;
        esi = esi - 1;
    } while(edx != 0);
    return(_fini());
}

/*	Procedure: 0x08048444 - 0x08048467
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    (save)edx;
    eax = __CTOR_LIST__;
    ebx = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
    (restore)eax;
}

/*	Procedure: 0x08048468 - 0x08048482
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    L08048471();
    (restore)ebx;
    ebx = ebx + 4367;
    return(__do_global_dtors_aux(edx));
}

extern /* addr: 08048483 */  /*	Procedure: 0x08048483 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048483()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513272 */ /* unknown */ void 	printf;
/* 0x08048278      72 */ /* unknown */ void 	_init;
/* 0x080482c0      36 */ /* unknown */ void 	_start;
/* 0x080482e4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048308      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048344      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048370      10 */ /* unknown */ void 	bswap;
/* 0x0804837a      62 */ /* unknown */ void 	main;
/* 0x080483b8      72 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048400      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048444      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048468       0 */ /* unknown */ void 	_fini;
/* 0x08048484       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048488       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804849c       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080494a0       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080494a4       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080494a8       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080494ac       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080494b0       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080494b0       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080494b4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049580       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049594       0 */ /* unknown */ void 	data_start;
/* 0x08049594       0 */ /* unknown */ void 	__data_start;
/* 0x08049598       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804959c       0 */ /* unknown */ void 	p.0;
/* 0x080495a0       1 */ /* unknown */ void 	completed.1;
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
