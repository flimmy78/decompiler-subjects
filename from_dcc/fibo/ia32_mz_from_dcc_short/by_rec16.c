/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/fibo/ia32_mz_from_dcc_short/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 0000015f -> 000001e9 */
/*	Procedure: 0x00000121 - 0x00000161
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000121()
{



    ds = *%cs:0x1f8];
    L000001A5();
    (save)cs;
    *L000005de();
    ax = 0;
    si = 0;
    cx = 0x2f;
    asm("cld");
    al = al + *si;
    asm("adc ah,0x0");
    si = si + 1;
    asm("loop 0x137");
    if(!(ax = ax - 0xd37)) {
        cx = 0x19;
        dx = 0x2f;
        ax = L000001DA();
    }
    bp = sp;
    ah = 0x4c;
    al = *(bp + 2);
    asm("int 0x21");
    cx = 0xe;
    dx = 0x48;
    goto L000001e9;
}

/*	Procedure: 0x00000162 - 0x000001A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000162()
{
	/* unknown */ void  ds;



    ax = 13568;
    asm("int 0x21");
    *L00000074 = bx;
    *L00000076 = es;
    ax = 13572;
    asm("int 0x21");
    *L00000078 = bx;
    *L0000007A = es;
    ax = 13573;
    asm("int 0x21");
    *L0000007C = bx;
    *L0000007E = es;
    ax = 13574;
    asm("int 0x21");
    *L00000080 = bx;
    *L00000082 = es;
    ax = 0x2500;
    ds = cs;
    dx = 0x158;
    asm("int 0x21");
}

/*	Procedure: 0x000001A5 - 0x000001D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001A5()
{



    (save)ds;
    ax = 0x2500;
    asm("lds dx,[0x74]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2504;
    asm("lds dx,[0x78]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2505;
    asm("lds dx,[0x7c]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2506;
    asm("lds dx,[0x80]");
    asm("int 0x21");
    (restore)ds;
    return;
    *L00000096 = 0;
    asm("retf");
}

/*	Procedure: 0x000001DA - 0x000001F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001DA()
{



    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    return;
    cx = 0x1e;
    dx = 0x56;
    ds = *%cs:0x1f8];
    L000001DA();
    (save)3;
    L00000121();
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x000001FA - 0x0000025A
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 8
 */

L000001FA()
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    L00000E11(0x194);
    L0000169A(0x1b1, & Vfffffffc);
    for(si = 1; si <= Vfffffffc; si = si + 1) {
        L00000E11(0x1b4);
        L0000169A(0x1c3, & Vfffffffe);
        (save)L0000025B(Vfffffffe);
        L00000E11(0x1c6, Vfffffffe);
    }
    return(L000002C7(0));
}

/*	Procedure: 0x0000025B - 0x0000028A
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L0000025B(A4)
/* unknown */ void  A4;
{



    if(A4 <= 2) {
        ax = 1;
    } else {
        (save)L0000025B(A4 - 1);
        dx = L0000025B(A4 + 65534);
        (restore)ax;
        ax = ax + dx;
    }
}

/*	Procedure: 0x0000028B - 0x000002C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000028B()
{



    (save)bp;
    (save)si;
    si = *(sp + 4);
    if(si >= 0) {
        if(si > 0x58) {
L0000029b:
            si = 0x57;
        }
        *L000001DA = si;
        al = *(si + 0x1dc);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L0000029b;
        }
        *L000001DA = 65535;
    }
    *L00000094 = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    return;
}

/*	Procedure: 0x000002C7 - 0x000002FB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000002C7(A4)
/* unknown */ void  A4;
{



    while(1) {
        ax = *L00000240;
        *L00000240 = *L00000240 - 1;
        if(ax == 0) {
            break;
        }
        bx = *L00000240 << 1;
        *(bx + 0x5ea)();
    }
    *L00000236();
    *L00000238();
    *L0000023a();
    return(L00000121(A4));
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 0000036e -> 000003b0 */
/* DEST BLOCK NOT FOUND: 000003ad -> 000001e2 */
/*	Procedure: 0x000002FC - 0x00000384
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000002FC()
{



    (restore) *%cs:0x2f6];
    *%cs:0x2f8] = ds;
    asm("cld");
    es = *L00000090;
    si = 0x80;
    ah = 0;
    asm("%e lodsb");
    ax = ax + 1;
    bp = es;
    asm("xchg dx,si");
    asm("xchg ax,bx");
    si = *L0000008A + 2;
    cx = 1;
    if(*L00000092 >= 3) {
        es = *L0000008C;
        di = si;
        cl = 0x7f;
        al = 0;
        asm("repne scasb");
        < ? L000003ad : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L000003ad;
    }
    sp = di;
    ds = es;
    es = ss;
    (save)cx;
    cx = cx - 1;
    asm("rep movsb");
    *di = 0;
    di = di + 1;
    ds = bp;
    asm("xchg si,dx");
    asm("xchg bx,cx");
    dx = bx;
L00000369:
    L00000385();
    if(!(bx = bx + 1)) {
        < ? L000003b0 : ;
        L00000385();
        > ? L0000036e : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000369;
    }
    al = 0;
    goto L00000369;
}

/* DEST BLOCK NOT FOUND: 000003ad -> 000001e2 */
/*	Procedure: 0x00000385 - 0x000003E6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000385()
{



    if(ax != 0) {
        dx = dx + 1;
        *di = al;
        di = di + 1;
        if(al == 0) {
        }
    }
    asm("xchg ah,al");
    al = 0;
    asm("stc");
    if(!(bx = bx + 1)) {
        al = *esi;
        esi = esi + 1;
        cx = cx - 1;
        if(!(al = al - 0x22)) {
            if(al + 0x22 == 0x5c && *si == 0x22) {
                al = *esi;
                esi = esi + 1;
                cx = cx - 1;
            }
            si :: 0;
        }
    }
    return;
    goto L000001e2;
    (restore)cx;
    cx = cx + dx;
    ds = *%cs:0x2f8];
    *L00000084 = bx;
    bx = bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L000001e2;
    }
    sp = bp;
    *L00000086 = bp;
L000003cd:
    < ? L000003dd : ;
    *bp = si;
    bp = bp + 2;
    asm("%s lodsb");
    asm("loopne 0x3d5");
    if(al == 0) {
        goto L000003cd;
    }
    *bp = 0;
    goto ( *L000002f6);
}

/* DEST BLOCK NOT FOUND: 0000041a -> 000001e2 */
stack space not deallocated on return
/*	Procedure: 0x000003E7 - 0x00000456
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000003E7()
{



    ax = L00000536( *L0000008A);
    di = ax;
    if(ax != 0) {
        (save)ds;
        es = ds;
        ds = *L0000008C;
        si = 0;
        asm("cld");
        asm("rep movsb");
        (restore)ds;
        di = ax;
        (save)es;
        ax = L00000536( *L0000008E);
        bx = ax;
        (restore)es;
        *L00000088 = ax;
        if(ax != 0) {
            goto L0000041d;
        }
    }
    goto L000001e2;
L0000041d:
    ax = 0;
    cx = 65535;
L00000422:
    *bx = di;
    bx = bx + 2;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L00000422;
    }
    *bx = ax;
    return;
    (save)bp;
    bp = sp;
    if(*L00000240 == 0x20) {
        ax = 1;
    } else {
        ax = *(bp + 4);
        *(( *L00000240 << 1) + 0x5ea) = ax;
        *L00000240 = *L00000240 + 1;
        ax = 0;
    }
    (restore)bp;
}

/*	Procedure: 0x00000457 - 0x00000484
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000457(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = *(A4 + 6);
    *L0000062C = ax;
    if(ax == A4) {
        *L0000062C = 0;
    } else {
        si = *(A4 + 4);
        *( *L0000062C + 4) = si;
        ax = *L0000062C;
        *(si + 6) = ax;
    }
}

/*	Procedure: 0x00000485 - 0x000004BE
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L00000485(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;



    *A4 = *A4 - A6;
    si = *A4 + A4;
    *si = A6 + 1;
    *(si + 2) = A4;
    if(*L0000062A == A4) {
        *L0000062A = si;
    } else {
        *(si + A6 + 2) = si;
    }
    ax = si + 4;
}

/*	Procedure: 0x000004BF - 0x000004FB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000004BF(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L000005CD(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *(si + 2) = *L0000062A;
        *si = A4 + 1;
        *L0000062A = si;
        ax = *L0000062A + 4;
    }
}

/*	Procedure: 0x000004FC - 0x00000535
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000004FC(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L000005CD(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *L0000062E = si;
        *L0000062A = si;
        *si = A4 + 1;
        ax = si + 4;
    }
}

/*	Procedure: 0x00000536 - 0x000005A8
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000536(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = A4;
    if(di == 0 || di > -12) {
        ax = 0;
    } else {
        di = di + 0xb & 65528;
        if(*L0000062E == 0) {
            ax = L000004FC(di);
        } else {
            si = *L0000062C;
            if(si != 0) {
                do {
                    ax = *si;
                    if(ax >= di + 0x28) {
                        goto L0000057a;
                    }
                    if(*si >= di) {
                        goto L00000588;
                    }
                    si = *(si + 6);
                } while(si != *L0000062C);
                goto L0000059e;
L0000057a:
                ax = L00000485(si, di);
                goto L000005a5;
L00000588:
                L00000457(si);
                *si = *si + 1;
                ax = si + 4;
            } else {
L0000059e:
                ax = L000004BF(di);
            }
        }
    }
L000005a5:
}

/*	Procedure: 0x000005A9 - 0x000005CC
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000005A9(A4)
/* unknown */ void  A4;
{



    ax = A4;
    if(ax < sp - 0x100) {
        *L0000009E = ax;
        ax = 0;
    } else {
        *L00000094 = 8;
        ax = 65535;
    }
}

/*	Procedure: 0x000005CD - 0x00000620
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L000005CD(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = A4 + *L0000009E;
    asm("adc dx,+0x0");
    cx = ax + 0x100;
    asm("adc dx,+0x0");
    if(A6 == 0) {
        if(cx >= sp) {
            goto L000005f4;
        }
        asm("xchg ax,[0x9e]");
    } else {
L000005f4:
        *L00000094 = 8;
        ax = 65535;
    }
    return;
    (save)bp;
    bp = sp;
    ax = L000005A9(A4);
    return;
    (save)bp;
    bp = sp;
    ax = A4;
    asm("cwd");
    ax = L000005CD(ax, A6);
}

/*	Procedure: 0x00000621 - 0x00000667
 *	Argument size: 4
 *	Local size: 2
 *	Save regs size: 8
 */

L00000621(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    si = *A4;
    Vfffffffe = si;
    if(!( *(A4 + 2) & 0x40)) {
        ax = si;
    } else {
        for(di = *(A4 + 0xa); 1; Vfffffffe = Vfffffffe + 1) {
            ax = si;
            si = si - 1;
            if(ax == 0) {
                break;
            }
            bx = di;
            di = di + 1;
            if(*bx != 0xa) {
                continue;
            }
        }
        ax = Vfffffffe;
    }
}

/*	Procedure: 0x00000668 - 0x00000720
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 4
 */

L00000668(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  si;



    si = A4;
    if(L00000D93(si) != 0) {
        ax = 65535;
    } else {
        if(Aa == 1 && *si > 0) {
            ax = L00000621(si);
            asm("cwd");
            A6 = A6 - ax;
            asm("sbb [bp+0x8],dx");
        }
        *(si + 2) = *(si + 2) & 65119;
        *si = 0;
        ax = *(si + 8);
        *(si + 0xa) = ax;
        (save)Aa;
        (save)A8;
        (save)A6;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000BEE();
        sp = sp + 8;
        if(dx == -1) {
            if(ax != 65535) {
                goto L000006c5;
            }
            ax = 65535;
        } else {
L000006c5:
            ax = 0;
        }
    }
    return;
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = A4;
    ax = L00000D93(si);
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        al = *(si + 4);
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00001D14(ax);
        if(*si > 0) {
            dx = *(bp - 2);
            (save)dx;
            (save) *(bp - 4);
            ax = L00000621(si);
            asm("cwd");
            bx = ax;
            cx = dx;
            (restore)ax;
            (restore)dx;
            ax = ax - bx;
            asm("sbb dx,cx");
        } else {
            dx = *(bp - 2);
            ax = *(bp - 4);
        }
    }
}

/*	Procedure: 0x00000721 - 0x00000747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000721()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = 0x14;
    for(si = 0x344; 1; si = si + 0x10) {
        ax = di;
        di = di - 1;
        if(ax == 0) {
            break;
        }
        if(( *(si + 2) & 0x300) == 0x300) {
            L00000D93(si);
        }
    }
}

/*	Procedure: 0x00000748 - 0x000007B7
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000748(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = A4;
    if(!( *(si + 2) & 0x200)) {
        L00000721();
    }
    (save) *(si + 6);
    ax = *(si + 8);
    *(si + 0xa) = ax;
    (save)ax;
    al = *(si + 4);
    asm("cbw");
    (save)ax;
    ax = L000009BD();
    sp = sp + 6;
    *si = ax;
    if(*si > 0) {
        *(si + 2) = *(si + 2) & 65503;
        ax = 0;
        goto L000007a0;
    } else {
        if(*si == 0) {
            *(si + 2) = *(si + 2) & 65151 | 0x20;
        } else {
            *si = 0;
            *(si + 2) = *(si + 2) | 0x10;
        }
    }
    ax = 65535;
L000007a0:
    return;
    (save)bp;
    bp = sp;
    (save)si;
    si = A4;
    *si = *si + 1;
    ax = L000007B8(si);
}

/* DEST BLOCK NOT FOUND: 000008b5 -> 000008b7 */
stack space not deallocated on return
/*	Procedure: 0x000007B8 - 0x000008B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000007B8()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    (save)si;
    si = *(bp + 4);
    while(*si = *si - 1) {
        if(( *si = *si + 1) || !( *(si + 2) & 0x110)) {
            goto L000007df;
        }
        while(1) {
            *(si + 2) = *(si + 2) | 0x80;
            if(*(si + 6) != 0) {
                break;
            }
            if(*L000004AC != 0) {
                goto L00000847;
            }
            ax = 0x344;
            if(0x344 != si) {
                goto L00000847;
            }
            al = *(si + 4);
            asm("cbw");
            if(L000008B8(ax) == 0) {
                *(si + 2) = *(si + 2) & 65023;
            }
            (save)0x200;
            ax = *(si + 2) & 0x200 ? 0 : 1;
            (save)ax;
            L000008CA(si, 0);
        }
        ax = L00000748(si);
        if(ax != 0) {
            goto L000007fd;
        }
    }
    *(si + 0xa) = *(si + 0xa) + 1;
    al = *( *(si + 0xa) - 1);
    ah = 0;
    goto L000008a8;
L000007df:
    *(si + 2) = *(si + 2) | 0x10;
    ax = 65535;
    goto L000008a8;
L000007fd:
    ax = 65535;
    goto L000008a8;
L00000847:
    do {
        if(!( *(si + 2) & 0x200)) {
            L00000721();
        }
        (save)1;
        ax = bp - 1;
        (save)ax;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000A79();
        sp = sp + 6;
        if(ax != 1) {
            goto L00000869;
        }
        if(*(bp - 1) != 0xd) {
            break;
        }
    } while(*(si + 2) & 0x40);
    goto L0000089c;
L00000869:
    al = *(si + 4);
    asm("cbw");
    *(si + 2) = L00000D25(ax) != 1 ? *(si + 2) | 0x10 : *(si + 2) & 65151 | 0x20;
    ax = 65535;
    goto L000008a8;
L0000089c:
    *(si + 2) = *(si + 2) & 65503;
    al = *(bp - 1);
    ah = 0;
L000008a8:
    (restore)si;
    sp = bp;
    (restore)bp;
    return;
    L000007B8(0x344);
}

/*	Procedure: 0x000008B8 - 0x000008C9
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000008B8(A4)
/* unknown */ void  A4;
{



    ax = 17408;
    asm("int 0x21");
    return(dx & 0x80);
}

/*	Procedure: 0x000008CA - 0x000009BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000008CA()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    di = *(bp + 0xa);
    si = *(bp + 4);
    if(*(si + 0xe) != si || *(bp + 8) > 2 || di > 32767) {
        ax = 65535;
    } else {
        if(*L000004AE == 0) {
            if(0x354 != si) {
                goto L00000904;
            }
            *L000004AE = 1;
        } else {
L00000904:
            if(*L000004AC == 0 && 0x344 == si) {
                *L000004AC = 1;
            }
        }
        if(*si != 0) {
            (save)1;
            (save)0;
            L00000668(si, 0);
        }
        if(!( *(si + 2) & 4)) {
            L00001673( *(si + 8));
        }
        *(si + 2) = *(si + 2) & 65523;
        *(si + 6) = 0;
        ax = si + 5;
        *(si + 8) = ax;
        *(si + 0xa) = *(si + 8);
        if(*(bp + 8) != 2 && di > 0) {
            *L00000236 = 0x99c;
            if(*(bp + 6) == 0) {
                ax = L00000536(di);
                *(bp + 6) = ax;
                if(*(bp + 6) != 0) {
                    *(si + 2) = *(si + 2) | 4;
                    goto L0000097d;
                }
                ax = 65535;
                goto L00000998;
            }
L0000097d:
            ax = *(bp + 6);
            *(si + 0xa) = ax;
            *(si + 8) = *(si + 0xa);
            *(si + 6) = di;
            if(*(bp + 8) == 1) {
                *(si + 2) = *(si + 2) | 8;
            }
        }
        ax = 0;
    }
L00000998:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    (save)si;
    (save)di;
    di = 4;
    si = 0x344;
    goto L000009b6;
L000009a6:
    if(!( *(si + 2) & 3)) {
        ax = L00000D93(si);
    }
    di = di - 1;
    si = si + 0x10;
L000009b6:
    if(di != 0) {
        goto L000009a6;
    }
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x000009BD - 0x00000A78
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

L000009BD(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    if(A8 + 1 < 2 || !( *((A4 << 1) + 0x484) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save)A8;
            Vfffffffc = L00000A79(A4, A6);
            if(Vfffffffc + 1 < 2 || !( *((A4 << 1) + 0x484) & 32768)) {
                break;
            }
            cx = Vfffffffc;
            es = ds;
            di = A6;
            bx = A6;
            asm("cld");
            al = *esi;
            esi = esi + 1;
            if(al == 0x1a) {
                goto L00000a4d;
            }
            if(al == 0xd) {
                asm("loop 0xa1b");
                (save)es;
                (save)bx;
                (save)1;
                L00000A79(A4, & Vffffffff);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = Vffffffff;
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0xa1b");
            }
            if(di != bx) {
                goto L00000a6d;
            }
        }
        ax = Vfffffffc;
        goto L00000a73;
L00000a4d:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000BEE(A4, cx);
        *((A4 << 1) + 0x484) = *((A4 << 1) + 0x484) | 0x200;
        (restore)bx;
L00000a6d:
        ax = di - bx;
    }
L00000a73:
}

/*	Procedure: 0x00000A79 - 0x00000A94
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A79(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    ah = 0x3f;
    asm("int 0x21");
    < ? L00000a8d : ;
    goto L00000a93;
    ax = L0000028B(ax);
L00000a93:
}

/*	Procedure: 0x00000A95 - 0x00000BA7
 *	Argument size: -130
 *	Local size: 138
 *	Save regs size: 8
 */

L00000A95(A4, A6, A8, Aff76, Aff78, Aff7b, Aff7c, Aff7e)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aff76;
/* unknown */ void  Aff78;
/* unknown */ void  Aff7b;
/* unknown */ void  Aff7c;
/* unknown */ void  Aff7e;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    if(A8 + 1 < 2) {
        ax = 0;
    } else {
        if(!( *((A4 << 1) + 0x484) & 32768)) {
            (save)A8;
            ax = L00000BA8(A4, A6);
        } else {
            *((A4 << 1) + 0x484) = *((A4 << 1) + 0x484) & 65023;
            Aff7c = A6;
            Aff78 = A8;
            si = & Aff7e;
            goto L00000b57;
L00000b38:
            ax = Aff76 < 0 ? 65535 : A8 - Aff78 + Aff76 - di;
            goto L00000ba2;
L00000b57:
            while(Aff78 != 0) {
                Aff78 = Aff78 - 1;
                bx = Aff7c;
                Aff7c = Aff7c + 1;
                al = *bx;
                Aff7b = al;
                if(Aff7b == 0xa) {
                    *si = 0xd;
                    si = si + 1;
                }
                *si = Aff7b;
                si = si + 1;
                if(si - & Aff7e < 0x80) {
                    continue;
                }
                di = si - & Aff7e;
                (save)di;
                ax = L00000BA8(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 != di) {
                    goto L00000b38;
                }
                si = & Aff7e;
            }
            di = si - & Aff7e;
            if(di > 0) {
                (save)di;
                ax = L00000BA8(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 == di) {
                    goto L00000b9d;
                }
                ax = Aff76 < 0 ? 65535 : A8 + Aff76 - di;
            } else {
L00000b9d:
                ax = A8;
            }
        }
    }
L00000ba2:
}

/*	Procedure: 0x00000BA8 - 0x00000BED
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BA8(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    if(!( *((A4 << 1) + 0x484) & 0x800)) {
        ax = L00000BEE(A4, 0, 0, 2);
    }
    ah = 0x40;
    bx = A4;
    asm("int 0x21");
    < ? L00000be6 : ;
    (save)ax;
    *((A4 << 1) + 0x484) = *((A4 << 1) + 0x484) | 0x1000;
    (restore)ax;
    goto L00000bec;
    ax = L0000028B(ax);
L00000bec:
}

/*	Procedure: 0x00000BEE - 0x00000C18
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BEE(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{



    ah = 0x42;
    asm("int 0x21");
    if(!( *((A4 << 1) + 0x484) = *((A4 << 1) + 0x484) & 65023)) {
    } else {
        ax = L0000028B(ax);
        asm("cwd");
    }
}

/* DEST BLOCK NOT FOUND: 00000d22 -> 000001e2 */
/*	Procedure: 0x00000C19 - 0x00000D24
 *	Argument size: -20
 *	Local size: 34
 *	Save regs size: 0
 */

L00000C19(A4, A6, A8, Aa, Ac, Ae)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
/* unknown */ void  Ac;
/* unknown */ void  Ae;
{
	/* unknown */ void  Vffffffde;



    (save)si;
    (save)di;
    (save)es;
    di = Aa;
    es = ds;
    bx = A8;
    if(bx <= 0x24 && bl >= 2) {
        ax = Ac;
        cx = Ae;
        if(cx < 0 && A6 != 0) {
            *di = 0x2d;
            cx = ~cx;
            ax = ~ax;
            asm("sbb cx,+0x0");
        }
        si = & Vffffffde;
        if(!(di = di + 1)) {
L00000c54:
            asm("xchg ax,cx");
            bx = bx / bx;
            edx = bx % bx & 65535;
            asm("xchg ax,cx");
            bx = bx / bx;
            dx = bx % bx;
            *si = dl;
            if(si = si + 1) {
                goto L00000c6a;
            }
            goto L00000c54;
        }
L00000c63:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *si = dl;
        si = si + 1;
L00000c6a:
        if(ax != 0) {
            goto L00000c63;
        }
        cx = ~( & Vffffffde) + si;
        asm("cld");
        al = !(al = *(si - 1) - 0xa) ? al + 0x3a : al + A4;
        *di = al;
        di = di + 1;
        asm("loop 0xc76");
    }
    *di = 0;
    di = di + 1;
    (restore)es;
    eax = Aa & 65535;
    (restore)di;
    (restore)si;
    return;
    (save)bp;
    bp = sp;
    if(A8 == 0xa) {
        ax = A4;
        asm("cwd");
    } else {
        ax = A4;
        dx = 0;
    }
    al = 1;
    ax = L00000C19(0x61, 1, A8, A6, ax, dx);
    return;
    bp = sp;
    ax = L00000C19(0x61 & 0xff, 0, Aa, A8, A4, A6, bp);
    return;
    (save)bp;
    bp = sp;
    (save)A6;
    (save)A4;
    (save)A8;
    (save)Aa;
    ax = Aa == 0xa ? 1 : 0;
    ax = L00000C19(0x61, ax);
    return;
    dx = 0x4b0;
    goto L00000d0c;
    dx = 0x4b5;
L00000d0c:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x4ba;
    ah = 0x40;
    asm("int 0x21");
    goto L000001e2;
}

/*	Procedure: 0x00000D25 - 0x00000D92
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000D25(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    if(!( *((A4 << 1) + 0x484) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        asm("int 0x21");
        < ? L00000d89 : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L00000d89 : ;
            (save)dx;
            (save)ax;
            ax = 16898;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            Vfffffffc = ax;
            Vfffffffe = dx;
            (restore)dx;
            (restore)cx;
            < ? L00000d89 : ;
            ax = 16896;
            asm("int 0x21");
            < ? L00000d89 : ;
            if(dx < Vfffffffe) {
                goto L00000d85;
            }
            > ? L00000d80 : ;
            if(ax < Vfffffffc) {
                goto L00000d85;
            }
            ax = 1;
        } else {
L00000d85:
            ax = 0;
            goto L00000d8f;
            ax = L0000028B(ax);
        }
    }
L00000d8f:
}

/*	Procedure: 0x00000D93 - 0x00000E10
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000D93(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  di;



    if(*(A4 + 0xe) != A4) {
        ax = 65535;
    } else {
        if(*A4 >= 0) {
            if(!( *(A4 + 2) & 8)) {
                ax = *(A4 + 0xa);
                if(ax != A4 + 5) {
                    goto L00000dd5;
                }
            }
            *A4 = 0;
            ax = *(A4 + 0xa);
            if(ax == A4 + 5) {
                *(A4 + 0xa) = *(A4 + 8);
            }
L00000dd5:
            ax = 0;
        } else {
            di = *(A4 + 6) + *A4 + 1;
            *A4 = *A4 - di;
            (save)di;
            ax = *(A4 + 8);
            *(A4 + 0xa) = ax;
            (save)ax;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            if(L00000A95() != di) {
                if(*(A4 + 2) & 0x200) {
                    goto L00000e09;
                }
                *(A4 + 2) = *(A4 + 2) | 0x10;
                ax = 65535;
            } else {
L00000e09:
                ax = 0;
            }
        }
    }
}

/*	Procedure: 0x00000E11 - 0x00000E29
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E11(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = L00001039( & A6, A4, 0x354, 0xf47);
}

/*	Procedure: 0x00000E2A - 0x00000E42
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E2A(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    *A6 = *A6 - 1;
    (save)A6;
    asm("cbw");
    ax = L00000E43(ax);
}

/*	Procedure: 0x00000E43 - 0x00000F30
 *	Argument size: 6
 *	Local size: 2
 *	Save regs size: 4
 */

L00000E43(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  Vffffffff;



    Vffffffff = A4;
    while(*A6 = *A6 + 1) {
        *A6 = *A6 - 1;
        if(*(A6 + 2) & 0x90 || !( *(A6 + 2) & 2)) {
            goto L00000e9d;
        }
        *(A6 + 2) = *(A6 + 2) | 0x100;
        if(*(A6 + 6) == 0) {
            goto L00000ed7;
        }
        if(*A6 == 0) {
            ax = *(A6 + 6);
            *A6 = 65535 - ax;
        } else {
            ax = L00000D93(A6);
            if(ax != 0) {
                goto L00000ec1;
            }
        }
    }
    *(A6 + 0xa) = *(A6 + 0xa) + 1;
    *( *(A6 + 0xa) - 1) = Vffffffff;
    if(!( *(A6 + 2) & 8)) {
        if(Vffffffff != 0xa && Vffffffff != 0xd) {
            goto L00000e85;
        }
        ax = L00000D93(A6);
        if(ax == 0) {
            goto L00000e85;
        }
        ax = 65535;
    } else {
L00000e85:
        al = Vffffffff;
        ah = 0;
        goto L00000f2c;
L00000e9d:
        *(A6 + 2) = *(A6 + 2) | 0x10;
        ax = 65535;
        goto L00000f2c;
L00000ec1:
        ax = 65535;
        goto L00000f2c;
L00000ed7:
        if(Vffffffff == 0xa && !( *(A6 + 2) & 0x40)) {
            (save)1;
            ax = 0x4e2;
            (save)0x4e2;
            al = *(A6 + 4);
            asm("cbw");
            (save)ax;
            ax = L00000BA8();
            sp = sp + 6;
            if(ax != 1) {
                goto L00000f14;
            }
        }
        (save)1;
        ax = & A4;
        (save)ax;
        al = *(A6 + 4);
        asm("cbw");
        (save)ax;
        ax = L00000BA8();
        sp = sp + 6;
        if(ax != 1) {
L00000f14:
            if(*(A6 + 2) & 0x200) {
                goto L00000f25;
            }
            *(A6 + 2) = *(A6 + 2) | 0x10;
            ax = 65535;
        } else {
L00000f25:
            al = Vffffffff;
            ah = 0;
        }
    }
L00000f2c:
}

/*	Procedure: 0x00000F31 - 0x00000F46
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000F31(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = L00000E43(A4, 0x354);
}

/*	Procedure: 0x00000F47 - 0x00001009
 *	Argument size: 8
 *	Local size: 2
 *	Save regs size: 8
 */

L00000F47(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    di = A6;
    Vfffffffe = di;
    if(!( *(A4 + 2) & 8)) {
        goto L00000f7b;
L00000f76:
        ax = 0;
        goto L00001002;
L00000f7b:
        do {
            ax = di;
            di = di - 1;
            if(ax == 0) {
                goto L00000f82;
            }
            (save)A4;
            bx = A8;
            A8 = A8 + 1;
            al = *bx;
            asm("cbw");
            (save)ax;
            (restore)cx;
        } while(L00000E43() != 65535);
        goto L00000f76;
L00000f82:
    } else {
        if(!( *(A4 + 2) & 0x40)) {
            if(*(A4 + 6) == 0) {
                goto L00000ff6;
            }
            ax = *(A4 + 6);
            if(ax >= di) {
                goto L00000ff6;
            }
            if(*A4 != 0) {
                ax = L00000D93(A4);
                if(ax == 0) {
                    goto L00000fab;
                }
                ax = 0;
                goto L00001002;
            }
L00000fab:
            (save)di;
            (save)A8;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            sp = sp + 6;
            if(L00000BA8() < di) {
                ax = 0;
                goto L00001002;
            }
        } else {
            goto L00000ff6;
L00000ff2:
            ax = 0;
            goto L00001002;
L00000ff6:
            do {
                ax = di;
                di = di - 1;
                if(ax == 0) {
                    goto L00000ffd;
                }
                if(*A4 = *A4 + 1) {
                    bx = A8;
                    A8 = A8 + 1;
                    ax = L00000E2A( *bx, A4);
                } else {
                    bx = A8;
                    A8 = A8 + 1;
                    al = *bx;
                    *(A4 + 0xa) = *(A4 + 0xa) + 1;
                    *( *(A4 + 0xa) - 1) = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L00000ff2;
        }
    }
L00000ffd:
    ax = Vfffffffe;
L00001002:
}

/*	Procedure: 0x0000100A - 0x00001038
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000100A()
{



    goto ( *L000005e2);
    (save)bp;
    dx = *(sp + 4);
    cx = 0xf04;
    bx = 0x4eb;
    asm("cld");
    al = dh >> cl;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dh & ch;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dl >> cl;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dl & ch;
    asm("xlatb");
    *di = al;
    di = di + 1;
    (restore)bp;
}

/* DEST BLOCK NOT FOUND: 00001050 -> 00001093 */
/*	Procedure: 0x00001039 - 0x00001066
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001039()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L00001093;
    (save)di;
    cx = 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx - 1;
    (restore)di;
    return;
    *di = al;
    di = di + 1;
    *(bp - 0x55) = *(bp - 0x55) - 1;
    <= ? L00001092 : ;
}

stack space not deallocated on return
/*	Procedure: 0x00001067 - 0x00001672
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00001067()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  es;



    di = di - bp - 0x54;
    ax = *(bp + 0xa)( *(bp + 8), di, bp - 0x54);
    if(ax == 0) {
        *(bp - 2) = 1;
    }
    *(bp - 0x55) = 0x50;
    *(bp - 0x58) = *(bp - 0x58) + di;
    di = bp - 0x54;
    return;
    (save)es;
    asm("cld");
    *(bp + 65386) = bp - 0x54;
    di = *(bp + 65386);
    si = *(bp + 6);
L000010a3:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        if(al == 0x25) {
            goto L000010bc;
        }
L000010ac:
        *di = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L000010a3;
        }
        ax = L00001067();
        goto L000010a3;
    }
    goto L00001538;
L000010bc:
    *(bp + 65398) = si;
    al = *esi;
    esi = esi + 1;
    if(al == 0x25) {
        goto L000010ac;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L000010e6;
L000010e5:
    al = *esi;
    esi = esi + 1;
L000010e6:
    dx = 0;
    if(0xe0 < 0x60) {
        bl = *(bx + 0x4fb);
        eax = bx & 65535;
        if(ax > 0x17) {
            goto L00001526;
        }
        bx = ax << 1;
        goto ( *(bx + 0x110b));
        (save)si;
        asm("adc [0x9711],di");
        asm("adc [bp+si+0x11],cx");
        sp = 50705;
        asm("adc [bx+si],cx");
        asm("adc dl,[bp+si]");
        asm("adc ah,[bp+si]");
        asm("adc bh,[di+0x11]");
        (save)di;
        asm("adc dh,[bp+si]");
        asm("adc dh,[0x3a12]");
        asm("adc bl,ah");
        asm("adc cl,[bp+0x2f13]");
        asm("adc cx,[bx+0x13]");
        asm("stc");
        asm("adc al,0x26");
        asm("adc ax,0x1526");
        asm("%e adc ax,0x1169");
        >= ? L0000114c : ;
    }
    goto L00001526;
    if(ch <= 0) {
        *(bp + 65384) = *(bp + 65384) | 1;
        goto L000010e5;
        if(ch <= 0) {
            *(bp + 65384) = *(bp + 65384) | 2;
            goto L000010e5;
            if(ch <= 0) {
                if(*(bp + 65395) != 0x2b) {
                    *(bp + 65395) = dl;
                }
                goto L000010e5;
                *(bp + 65384) = *(bp + 65384) & -33;
                ch = 5;
                goto L000010e5;
                *(bp + 65384) = *(bp + 65384) | 0x20;
                ch = 5;
                goto L000010e5;
                if(ch <= 0) {
                    *(bp + 65384) & 2;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                }
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
                *(bx + si) = *(bx + si) + al;
            }
        }
    }
L00001526:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001538:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00001673 - 0x00001699
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001673()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x0000169A - 0x00001D13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000169A()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00001D14 - 0x00001D83
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D14()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

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
option: +flag16
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
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
