/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104B4 - 0x0001052F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    esp = -536862704;
    esp = esp + *(eax + -1610374592);
    esp = esp + 1;
    asm("pushf");
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    *ecx = 0;
    *(eax + 1) = *(eax + 1) + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    (restore)eax;
    eax = eax + 1;
    *(eax - 62) = *(eax - 62) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("xchg eax,ebp");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    al :: 212;
    al :: 0;
    *eax = *eax + al;
    *(ebp + 1) = *(ebp + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    eax = 1;
    ebx = 61737185;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010531 -> 000104f2 */
/*	Procedure: 0x00010530 - 0x00010587
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x104f2");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345003234;
    asm("pusha");
    eax = (al | 210) + 181668032 + 1;
    *(eax + 302031010) = *(eax + 302031010) + al;
    *eax = *eax + 32;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,dl");
    eax = eax + 47319232;
    *eax = *eax + al;
    asm("rol byte [edx],cl");
    eax = eax + 1;
    *(eax + 570450082) = *(eax + 570450082) + al;
    *eax = *eax + 13;
    asm("adc [eax],eax");
    *eax = *eax + al;
    al = *LD0080010;
    *(eax + -1627119614) = *(eax + -1627119614) + dl;
}

/*	Procedure: 0x00010588 - 0x000105DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010588()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769384430) = *(eax + -769384430) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(eax - 108) = *(eax - 108) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05e2();
}

/*	Procedure: 0x000105E0 - 0x000105EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105a2");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000105F0 - 0x00010673
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105b2");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    do {
        asm("scasb");
        eax = eax + 311596257;
        asm("pusha");
        *((al & dl) + 1378752) = *((al & dl) + 1378752) + (al & dl) + 1378752;
        (restore)ss;
        *eax = *eax + al;
        *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
        *eax = *eax & al;
        al = al + *(eax + 311821568);
        asm("loopne 0x1062c");
        asm("rol byte [0x400ac0],1");
    } while(eax = eax + 1);
    *(eax + 1117120) = *(eax + 1117120) + eax + 1117120;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 + 113) = *(eax + 1 + 113) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010675 -> 00010636 */
/*	Procedure: 0x00010674 - 0x00010683
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10636");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010685 -> 00010646 */
/* DEST BLOCK NOT FOUND: 000106a7 -> 0001066e */
/*	Procedure: 0x00010684 - 0x000106DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10646");
    *ecx = dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    ebp = es;
    ch = ch + al + *eax;
    asm("daa");
    edi = -1090009620;
    asm("in al,dx");
    *(eax + 1122841) & esp;
    asm("adc ah,[ebx]");
    if(*(ecx - 112) = *(ecx - 112) + al) {
        goto L0001066e;
    }
    asm("aas");
    edi = -1088431888;
    asm("lock xchg eax,edx");
    asm("adc [eax],al");
    al = al | 148;
    asm("adc [eax],al");
    eax = eax | 1581252672;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc38206d6();
    asm("loopne 0x106e0");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000106dd -> 0001069e */
/*	Procedure: 0x000106DC - 0x0001072B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1069e");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311470304;
    asm("rol byte [0x2d008c0],cl");
    do {
    } while(*eax = *eax & bl);
    *(edx + -2147287233) = 0;
    *(eax + -1610842366) = *(eax + -1610842366) | ah;
    return;
    *( *LD0FC3F04 + 318717858) = *( *LD0FC3F04 + 318717858) + al;
    edi = 130303;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001072d -> 000106ee */
/*	Procedure: 0x0001072C - 0x0001073B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106ee");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001073d -> 000106fe */
/*	Procedure: 0x0001073C - 0x00010757
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x106fe");
    al = *LACFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010759 -> 0001071a */
/*	Procedure: 0x00010758 - 0x0001076B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1071a");
    al = *L75FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000207E8 - 0x000207F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

atexit()
{



    *eax = *eax + dh;
    *(edi + 127999) = *(edi + 127999) ^ bh;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x000207F4 - 0x000207FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

exit()
{



    eax = eax + *eax;
    *(eax + esi) = *(eax + esi) + bh;
    edi = 127231;
    *eax = *eax + al;
}

/*	Procedure: 0x00020800 - 0x0002082F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_exit()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + cl;
    edi = 126463;
    *eax = *eax + al;
    eax = eax + *eax;
    *(eax + esi - 65) = *(eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000003;
    *(eax + 48) = *(eax + 48) + ah;
    edi = 124927;
    *eax = *eax + al;
    *(eax + esi - 65) = *(eax + esi - 65) + ch;
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00020830 - 0x0002083F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104b4     124 */ /* unknown */ void 	_start;
/* 0x00010530     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105e0      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x000105f0     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010674      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010684      88 */ /* unknown */ void 	main;
/* 0x000106dc      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0001072c      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x0001073c      28 */ /* unknown */ void 	_init;
/* 0x00010758       1 */ /* unknown */ void 	_fini;
/* 0x00010770       4 */ /* unknown */ void 	_lib_version;
/* 0x00010790       0 */ /* unknown */ void 	_etext;
/* 0x00020790       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000207b8       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000207e8      12 */ /* unknown */ void 	atexit;
/* 0x000207f4      12 */ /* unknown */ void 	exit;
/* 0x00020800      48 */ /* unknown */ void 	_exit;
/* 0x00020830       1 */ /* unknown */ void 	printf;
/* 0x00020840       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000208fc       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020900       0 */ /* unknown */ void 	force_to_data;
/* 0x00020904       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020908       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0002090c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020910       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020914       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020914       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020918       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020918       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0002091c       0 */ /* unknown */ void 	p.0;
/* 0x00020920       0 */ /* unknown */ void 	_edata;
/* 0x00020920       1 */ /* unknown */ void 	completed.1;
/* 0x00020924      24 */ /* unknown */ void 	object.2;
/* 0x0002093c       4 */ /* unknown */ void 	_environ;
/* 0x0002093c       4 */ /* unknown */ void 	environ;
/* 0x00020940       0 */ /* unknown */ void 	_end;
/* 0x00020940       0 */ /* unknown */ void 	_END_;
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
