#include <assert.h>
#include <stdio.h>

int  test_2_blocks_base(int c0) {
    if(c0) return 200;

    return 201;
}

int  test_2_blocks_variant_0(int c0) {
    if(!c0) return 201;

    return 200;
}

void test_2_blocks() {

    for(int c0=0;c0<2;c0++) {
        int base=test_2_blocks_base(c0);

        if(base != test_2_blocks_variant_0(c0)) {
            printf("test_2_blocks_variant_0: expected %d but got %d\n", base, test_2_blocks_variant_0(c0));
            assert(0);
        }    }
}

int  test_3_blocks_base(int c0, int c1) {
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_3_blocks_variant_0(int c0, int c1) {
    if(c0) return 200;
    if(!c1) return 202;

    return 201;
}

int  test_3_blocks_variant_1(int c0, int c1) {
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_3_blocks_variant_2(int c0, int c1) {
    if(c1 && !c0) return 201;
    if(!c0) return 202;

    return 200;
}

int  test_3_blocks_variant_3(int c0, int c1) {
    if(!c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_3_blocks_variant_4(int c0, int c1) {
    if(!c0 && !c1) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

void test_3_blocks() {

    for(int c0=0;c0<2;c0++) {

    for(int c1=0;c1<2;c1++) {
        int base=test_3_blocks_base(c0, c1);

        if(base != test_3_blocks_variant_0(c0, c1)) {
            printf("test_3_blocks_variant_0: expected %d but got %d\n", base, test_3_blocks_variant_0(c0, c1));
            assert(0);
        }
        if(base != test_3_blocks_variant_1(c0, c1)) {
            printf("test_3_blocks_variant_1: expected %d but got %d\n", base, test_3_blocks_variant_1(c0, c1));
            assert(0);
        }
        if(base != test_3_blocks_variant_2(c0, c1)) {
            printf("test_3_blocks_variant_2: expected %d but got %d\n", base, test_3_blocks_variant_2(c0, c1));
            assert(0);
        }
        if(base != test_3_blocks_variant_3(c0, c1)) {
            printf("test_3_blocks_variant_3: expected %d but got %d\n", base, test_3_blocks_variant_3(c0, c1));
            assert(0);
        }
        if(base != test_3_blocks_variant_4(c0, c1)) {
            printf("test_3_blocks_variant_4: expected %d but got %d\n", base, test_3_blocks_variant_4(c0, c1));
            assert(0);
        }    }
    }
}

int  test_4_blocks_base(int c0, int c1, int c2) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_4_blocks_variant_0(int c0, int c1, int c2) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c2) return 203;

    return 202;
}

int  test_4_blocks_variant_1(int c0, int c1, int c2) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_4_blocks_variant_2(int c0, int c1, int c2) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1) return 203;

    return 201;
}

int  test_4_blocks_variant_3(int c0, int c1, int c2) {
    if(c0) return 200;
    if(!c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_4_blocks_variant_4(int c0, int c1, int c2) {
    if(c0) return 200;
    if(!c1 && !c2) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_4_blocks_variant_5(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_4_blocks_variant_6(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2) return 203;

    return 202;
}

int  test_4_blocks_variant_7(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_4_blocks_variant_8(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0) return 203;

    return 200;
}

int  test_4_blocks_variant_9(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(!c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_4_blocks_variant_10(int c0, int c1, int c2) {
    if(c1 && !c0) return 201;
    if(!c0 && !c2) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_4_blocks_variant_11(int c0, int c1, int c2) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_4_blocks_variant_12(int c0, int c1, int c2) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1) return 203;

    return 201;
}

int  test_4_blocks_variant_13(int c0, int c1, int c2) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_4_blocks_variant_14(int c0, int c1, int c2) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c0) return 203;

    return 200;
}

int  test_4_blocks_variant_15(int c0, int c1, int c2) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_4_blocks_variant_16(int c0, int c1, int c2) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_4_blocks_variant_17(int c0, int c1, int c2) {
    if(!c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_4_blocks_variant_18(int c0, int c1, int c2) {
    if(!c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_4_blocks_variant_19(int c0, int c1, int c2) {
    if(!c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_4_blocks_variant_20(int c0, int c1, int c2) {
    if(!c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_4_blocks_variant_21(int c0, int c1, int c2) {
    if(!c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_4_blocks_variant_22(int c0, int c1, int c2) {
    if(!c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

void test_4_blocks() {

    for(int c0=0;c0<2;c0++) {

    for(int c1=0;c1<2;c1++) {

    for(int c2=0;c2<2;c2++) {
        int base=test_4_blocks_base(c0, c1, c2);

        if(base != test_4_blocks_variant_0(c0, c1, c2)) {
            printf("test_4_blocks_variant_0: expected %d but got %d\n", base, test_4_blocks_variant_0(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_1(c0, c1, c2)) {
            printf("test_4_blocks_variant_1: expected %d but got %d\n", base, test_4_blocks_variant_1(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_2(c0, c1, c2)) {
            printf("test_4_blocks_variant_2: expected %d but got %d\n", base, test_4_blocks_variant_2(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_3(c0, c1, c2)) {
            printf("test_4_blocks_variant_3: expected %d but got %d\n", base, test_4_blocks_variant_3(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_4(c0, c1, c2)) {
            printf("test_4_blocks_variant_4: expected %d but got %d\n", base, test_4_blocks_variant_4(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_5(c0, c1, c2)) {
            printf("test_4_blocks_variant_5: expected %d but got %d\n", base, test_4_blocks_variant_5(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_6(c0, c1, c2)) {
            printf("test_4_blocks_variant_6: expected %d but got %d\n", base, test_4_blocks_variant_6(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_7(c0, c1, c2)) {
            printf("test_4_blocks_variant_7: expected %d but got %d\n", base, test_4_blocks_variant_7(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_8(c0, c1, c2)) {
            printf("test_4_blocks_variant_8: expected %d but got %d\n", base, test_4_blocks_variant_8(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_9(c0, c1, c2)) {
            printf("test_4_blocks_variant_9: expected %d but got %d\n", base, test_4_blocks_variant_9(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_10(c0, c1, c2)) {
            printf("test_4_blocks_variant_10: expected %d but got %d\n", base, test_4_blocks_variant_10(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_11(c0, c1, c2)) {
            printf("test_4_blocks_variant_11: expected %d but got %d\n", base, test_4_blocks_variant_11(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_12(c0, c1, c2)) {
            printf("test_4_blocks_variant_12: expected %d but got %d\n", base, test_4_blocks_variant_12(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_13(c0, c1, c2)) {
            printf("test_4_blocks_variant_13: expected %d but got %d\n", base, test_4_blocks_variant_13(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_14(c0, c1, c2)) {
            printf("test_4_blocks_variant_14: expected %d but got %d\n", base, test_4_blocks_variant_14(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_15(c0, c1, c2)) {
            printf("test_4_blocks_variant_15: expected %d but got %d\n", base, test_4_blocks_variant_15(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_16(c0, c1, c2)) {
            printf("test_4_blocks_variant_16: expected %d but got %d\n", base, test_4_blocks_variant_16(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_17(c0, c1, c2)) {
            printf("test_4_blocks_variant_17: expected %d but got %d\n", base, test_4_blocks_variant_17(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_18(c0, c1, c2)) {
            printf("test_4_blocks_variant_18: expected %d but got %d\n", base, test_4_blocks_variant_18(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_19(c0, c1, c2)) {
            printf("test_4_blocks_variant_19: expected %d but got %d\n", base, test_4_blocks_variant_19(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_20(c0, c1, c2)) {
            printf("test_4_blocks_variant_20: expected %d but got %d\n", base, test_4_blocks_variant_20(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_21(c0, c1, c2)) {
            printf("test_4_blocks_variant_21: expected %d but got %d\n", base, test_4_blocks_variant_21(c0, c1, c2));
            assert(0);
        }
        if(base != test_4_blocks_variant_22(c0, c1, c2)) {
            printf("test_4_blocks_variant_22: expected %d but got %d\n", base, test_4_blocks_variant_22(c0, c1, c2));
            assert(0);
        }    }
    }
    }
}

int  test_5_blocks_base(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_0(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_1(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_2(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_3(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_4(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c2 && !c3) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_5(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_6(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_7(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_8(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_9(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_10(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1 && !c3) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_11(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_12(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_13(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_14(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_15(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_16(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c1 && !c2) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_17(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_18(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c2 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_19(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c3 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_20(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c1 && !c3 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_21(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_22(int c0, int c1, int c2, int c3) {
    if(c0) return 200;
    if(!c1 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_23(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_24(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_25(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_26(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_27(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_28(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2 && !c3) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_29(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_30(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_31(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_32(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_33(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_34(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0 && !c3) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_35(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_36(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_37(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_38(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_39(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_40(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c0 && !c2) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_41(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_42(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_43(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c3 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_44(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c0 && !c3 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_45(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_46(int c0, int c1, int c2, int c3) {
    if(c1 && !c0) return 201;
    if(!c0 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_47(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_48(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_49(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_50(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_51(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_52(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1 && !c3) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_53(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_5_blocks_variant_54(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3) return 204;

    return 203;
}

int  test_5_blocks_variant_55(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_56(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_57(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_58(int c0, int c1, int c2, int c3) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c0 && !c3) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_59(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_60(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_61(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_62(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_63(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_64(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c0 && !c1) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_5_blocks_variant_65(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_66(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_67(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_68(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_69(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_70(int c0, int c1, int c2, int c3) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_5_blocks_variant_71(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_72(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_73(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_74(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_75(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_76(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1 && !c2) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_77(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_5_blocks_variant_78(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2) return 204;

    return 202;
}

int  test_5_blocks_variant_79(int c0, int c1, int c2, int c3) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_80(int c0, int c1, int c2, int c3) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_81(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_82(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c0 && !c2) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_83(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_5_blocks_variant_84(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1) return 204;

    return 201;
}

int  test_5_blocks_variant_85(int c0, int c1, int c2, int c3) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_5_blocks_variant_86(int c0, int c1, int c2, int c3) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c0) return 204;

    return 200;
}

int  test_5_blocks_variant_87(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_88(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_5_blocks_variant_89(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_90(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_91(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_92(int c0, int c1, int c2, int c3) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_93(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_94(int c0, int c1, int c2, int c3) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_5_blocks_variant_95(int c0, int c1, int c2, int c3) {
    if(!c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_96(int c0, int c1, int c2, int c3) {
    if(!c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_97(int c0, int c1, int c2, int c3) {
    if(!c3 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_98(int c0, int c1, int c2, int c3) {
    if(!c1 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_99(int c0, int c1, int c2, int c3) {
    if(!c2 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_100(int c0, int c1, int c2, int c3) {
    if(!c1 && !c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_101(int c0, int c1, int c2, int c3) {
    if(!c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_5_blocks_variant_102(int c0, int c1, int c2, int c3) {
    if(!c2 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_5_blocks_variant_103(int c0, int c1, int c2, int c3) {
    if(!c3 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_104(int c0, int c1, int c2, int c3) {
    if(!c0 && !c3 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_105(int c0, int c1, int c2, int c3) {
    if(!c2 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_106(int c0, int c1, int c2, int c3) {
    if(!c0 && !c2 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_107(int c0, int c1, int c2, int c3) {
    if(!c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_5_blocks_variant_108(int c0, int c1, int c2, int c3) {
    if(!c1 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_5_blocks_variant_109(int c0, int c1, int c2, int c3) {
    if(!c3 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_5_blocks_variant_110(int c0, int c1, int c2, int c3) {
    if(!c0 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_5_blocks_variant_111(int c0, int c1, int c2, int c3) {
    if(!c1 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_112(int c0, int c1, int c2, int c3) {
    if(!c0 && !c1 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_5_blocks_variant_113(int c0, int c1, int c2, int c3) {
    if(!c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_5_blocks_variant_114(int c0, int c1, int c2, int c3) {
    if(!c1 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_5_blocks_variant_115(int c0, int c1, int c2, int c3) {
    if(!c2 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_5_blocks_variant_116(int c0, int c1, int c2, int c3) {
    if(!c0 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_5_blocks_variant_117(int c0, int c1, int c2, int c3) {
    if(!c1 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_5_blocks_variant_118(int c0, int c1, int c2, int c3) {
    if(!c0 && !c1 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

void test_5_blocks() {

    for(int c0=0;c0<2;c0++) {

    for(int c1=0;c1<2;c1++) {

    for(int c2=0;c2<2;c2++) {

    for(int c3=0;c3<2;c3++) {
        int base=test_5_blocks_base(c0, c1, c2, c3);

        if(base != test_5_blocks_variant_0(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_0: expected %d but got %d\n", base, test_5_blocks_variant_0(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_1(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_1: expected %d but got %d\n", base, test_5_blocks_variant_1(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_2(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_2: expected %d but got %d\n", base, test_5_blocks_variant_2(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_3(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_3: expected %d but got %d\n", base, test_5_blocks_variant_3(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_4(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_4: expected %d but got %d\n", base, test_5_blocks_variant_4(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_5(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_5: expected %d but got %d\n", base, test_5_blocks_variant_5(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_6(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_6: expected %d but got %d\n", base, test_5_blocks_variant_6(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_7(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_7: expected %d but got %d\n", base, test_5_blocks_variant_7(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_8(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_8: expected %d but got %d\n", base, test_5_blocks_variant_8(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_9(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_9: expected %d but got %d\n", base, test_5_blocks_variant_9(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_10(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_10: expected %d but got %d\n", base, test_5_blocks_variant_10(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_11(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_11: expected %d but got %d\n", base, test_5_blocks_variant_11(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_12(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_12: expected %d but got %d\n", base, test_5_blocks_variant_12(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_13(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_13: expected %d but got %d\n", base, test_5_blocks_variant_13(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_14(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_14: expected %d but got %d\n", base, test_5_blocks_variant_14(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_15(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_15: expected %d but got %d\n", base, test_5_blocks_variant_15(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_16(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_16: expected %d but got %d\n", base, test_5_blocks_variant_16(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_17(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_17: expected %d but got %d\n", base, test_5_blocks_variant_17(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_18(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_18: expected %d but got %d\n", base, test_5_blocks_variant_18(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_19(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_19: expected %d but got %d\n", base, test_5_blocks_variant_19(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_20(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_20: expected %d but got %d\n", base, test_5_blocks_variant_20(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_21(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_21: expected %d but got %d\n", base, test_5_blocks_variant_21(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_22(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_22: expected %d but got %d\n", base, test_5_blocks_variant_22(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_23(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_23: expected %d but got %d\n", base, test_5_blocks_variant_23(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_24(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_24: expected %d but got %d\n", base, test_5_blocks_variant_24(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_25(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_25: expected %d but got %d\n", base, test_5_blocks_variant_25(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_26(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_26: expected %d but got %d\n", base, test_5_blocks_variant_26(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_27(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_27: expected %d but got %d\n", base, test_5_blocks_variant_27(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_28(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_28: expected %d but got %d\n", base, test_5_blocks_variant_28(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_29(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_29: expected %d but got %d\n", base, test_5_blocks_variant_29(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_30(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_30: expected %d but got %d\n", base, test_5_blocks_variant_30(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_31(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_31: expected %d but got %d\n", base, test_5_blocks_variant_31(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_32(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_32: expected %d but got %d\n", base, test_5_blocks_variant_32(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_33(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_33: expected %d but got %d\n", base, test_5_blocks_variant_33(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_34(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_34: expected %d but got %d\n", base, test_5_blocks_variant_34(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_35(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_35: expected %d but got %d\n", base, test_5_blocks_variant_35(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_36(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_36: expected %d but got %d\n", base, test_5_blocks_variant_36(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_37(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_37: expected %d but got %d\n", base, test_5_blocks_variant_37(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_38(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_38: expected %d but got %d\n", base, test_5_blocks_variant_38(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_39(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_39: expected %d but got %d\n", base, test_5_blocks_variant_39(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_40(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_40: expected %d but got %d\n", base, test_5_blocks_variant_40(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_41(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_41: expected %d but got %d\n", base, test_5_blocks_variant_41(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_42(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_42: expected %d but got %d\n", base, test_5_blocks_variant_42(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_43(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_43: expected %d but got %d\n", base, test_5_blocks_variant_43(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_44(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_44: expected %d but got %d\n", base, test_5_blocks_variant_44(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_45(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_45: expected %d but got %d\n", base, test_5_blocks_variant_45(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_46(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_46: expected %d but got %d\n", base, test_5_blocks_variant_46(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_47(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_47: expected %d but got %d\n", base, test_5_blocks_variant_47(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_48(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_48: expected %d but got %d\n", base, test_5_blocks_variant_48(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_49(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_49: expected %d but got %d\n", base, test_5_blocks_variant_49(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_50(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_50: expected %d but got %d\n", base, test_5_blocks_variant_50(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_51(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_51: expected %d but got %d\n", base, test_5_blocks_variant_51(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_52(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_52: expected %d but got %d\n", base, test_5_blocks_variant_52(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_53(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_53: expected %d but got %d\n", base, test_5_blocks_variant_53(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_54(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_54: expected %d but got %d\n", base, test_5_blocks_variant_54(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_55(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_55: expected %d but got %d\n", base, test_5_blocks_variant_55(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_56(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_56: expected %d but got %d\n", base, test_5_blocks_variant_56(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_57(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_57: expected %d but got %d\n", base, test_5_blocks_variant_57(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_58(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_58: expected %d but got %d\n", base, test_5_blocks_variant_58(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_59(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_59: expected %d but got %d\n", base, test_5_blocks_variant_59(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_60(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_60: expected %d but got %d\n", base, test_5_blocks_variant_60(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_61(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_61: expected %d but got %d\n", base, test_5_blocks_variant_61(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_62(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_62: expected %d but got %d\n", base, test_5_blocks_variant_62(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_63(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_63: expected %d but got %d\n", base, test_5_blocks_variant_63(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_64(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_64: expected %d but got %d\n", base, test_5_blocks_variant_64(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_65(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_65: expected %d but got %d\n", base, test_5_blocks_variant_65(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_66(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_66: expected %d but got %d\n", base, test_5_blocks_variant_66(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_67(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_67: expected %d but got %d\n", base, test_5_blocks_variant_67(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_68(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_68: expected %d but got %d\n", base, test_5_blocks_variant_68(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_69(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_69: expected %d but got %d\n", base, test_5_blocks_variant_69(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_70(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_70: expected %d but got %d\n", base, test_5_blocks_variant_70(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_71(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_71: expected %d but got %d\n", base, test_5_blocks_variant_71(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_72(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_72: expected %d but got %d\n", base, test_5_blocks_variant_72(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_73(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_73: expected %d but got %d\n", base, test_5_blocks_variant_73(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_74(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_74: expected %d but got %d\n", base, test_5_blocks_variant_74(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_75(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_75: expected %d but got %d\n", base, test_5_blocks_variant_75(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_76(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_76: expected %d but got %d\n", base, test_5_blocks_variant_76(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_77(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_77: expected %d but got %d\n", base, test_5_blocks_variant_77(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_78(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_78: expected %d but got %d\n", base, test_5_blocks_variant_78(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_79(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_79: expected %d but got %d\n", base, test_5_blocks_variant_79(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_80(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_80: expected %d but got %d\n", base, test_5_blocks_variant_80(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_81(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_81: expected %d but got %d\n", base, test_5_blocks_variant_81(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_82(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_82: expected %d but got %d\n", base, test_5_blocks_variant_82(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_83(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_83: expected %d but got %d\n", base, test_5_blocks_variant_83(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_84(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_84: expected %d but got %d\n", base, test_5_blocks_variant_84(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_85(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_85: expected %d but got %d\n", base, test_5_blocks_variant_85(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_86(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_86: expected %d but got %d\n", base, test_5_blocks_variant_86(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_87(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_87: expected %d but got %d\n", base, test_5_blocks_variant_87(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_88(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_88: expected %d but got %d\n", base, test_5_blocks_variant_88(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_89(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_89: expected %d but got %d\n", base, test_5_blocks_variant_89(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_90(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_90: expected %d but got %d\n", base, test_5_blocks_variant_90(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_91(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_91: expected %d but got %d\n", base, test_5_blocks_variant_91(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_92(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_92: expected %d but got %d\n", base, test_5_blocks_variant_92(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_93(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_93: expected %d but got %d\n", base, test_5_blocks_variant_93(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_94(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_94: expected %d but got %d\n", base, test_5_blocks_variant_94(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_95(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_95: expected %d but got %d\n", base, test_5_blocks_variant_95(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_96(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_96: expected %d but got %d\n", base, test_5_blocks_variant_96(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_97(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_97: expected %d but got %d\n", base, test_5_blocks_variant_97(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_98(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_98: expected %d but got %d\n", base, test_5_blocks_variant_98(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_99(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_99: expected %d but got %d\n", base, test_5_blocks_variant_99(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_100(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_100: expected %d but got %d\n", base, test_5_blocks_variant_100(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_101(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_101: expected %d but got %d\n", base, test_5_blocks_variant_101(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_102(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_102: expected %d but got %d\n", base, test_5_blocks_variant_102(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_103(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_103: expected %d but got %d\n", base, test_5_blocks_variant_103(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_104(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_104: expected %d but got %d\n", base, test_5_blocks_variant_104(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_105(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_105: expected %d but got %d\n", base, test_5_blocks_variant_105(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_106(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_106: expected %d but got %d\n", base, test_5_blocks_variant_106(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_107(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_107: expected %d but got %d\n", base, test_5_blocks_variant_107(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_108(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_108: expected %d but got %d\n", base, test_5_blocks_variant_108(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_109(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_109: expected %d but got %d\n", base, test_5_blocks_variant_109(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_110(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_110: expected %d but got %d\n", base, test_5_blocks_variant_110(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_111(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_111: expected %d but got %d\n", base, test_5_blocks_variant_111(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_112(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_112: expected %d but got %d\n", base, test_5_blocks_variant_112(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_113(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_113: expected %d but got %d\n", base, test_5_blocks_variant_113(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_114(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_114: expected %d but got %d\n", base, test_5_blocks_variant_114(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_115(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_115: expected %d but got %d\n", base, test_5_blocks_variant_115(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_116(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_116: expected %d but got %d\n", base, test_5_blocks_variant_116(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_117(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_117: expected %d but got %d\n", base, test_5_blocks_variant_117(c0, c1, c2, c3));
            assert(0);
        }
        if(base != test_5_blocks_variant_118(c0, c1, c2, c3)) {
            printf("test_5_blocks_variant_118: expected %d but got %d\n", base, test_5_blocks_variant_118(c0, c1, c2, c3));
            assert(0);
        }    }
    }
    }
    }
}

int  test_6_blocks_base(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_0(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_1(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_2(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_3(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_4(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_5(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_6(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_7(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_8(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_9(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_10(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_11(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_12(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_13(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2 && !c3) return 204;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_14(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2 && !c3) return 204;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_15(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_16(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_17(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c4 && !c3 && !c2) return 205;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_18(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c3 && !c4 && !c2) return 205;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_19(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c4 && !c2 && !c3) return 205;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_20(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c2 && !c4 && !c3) return 205;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_21(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c3 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_22(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c1) return 201;
    if(!c2 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_23(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_24(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_25(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_26(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_27(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_28(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_29(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_30(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_31(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_32(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_33(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_34(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_35(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_36(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_37(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1 && !c3) return 204;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_38(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1 && !c3) return 204;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_39(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_40(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_41(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c4 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_42(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c3 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_43(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c4 && !c1 && !c3) return 205;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_44(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1 && !c4 && !c3) return 205;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_45(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c3 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_46(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_47(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_48(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_49(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_50(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_51(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_52(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_53(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_54(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_55(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_56(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_57(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_58(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c1 && !c2) return 203;
    if(c2 && !c1) return 202;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_59(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_60(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_61(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_62(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_63(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_64(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_65(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c4 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_66(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c2 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_67(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c4 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_68(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c1 && !c4 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_69(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c2 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_70(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c1 && !c2 && !c4) return 205;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_71(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_72(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_73(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_74(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_75(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_76(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_77(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_78(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_79(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c1 && !c3 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_80(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c1 && !c3 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_81(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_82(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_83(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_84(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_85(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c1 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_86(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c1 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_87(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_88(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_89(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(!c3 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_90(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(!c2 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_91(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(!c3 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_92(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(!c1 && !c3 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_93(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(!c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_94(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(!c1 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_95(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c3 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_96(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c4 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_97(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c2 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_98(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c4 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_99(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c2 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_100(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c3 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_101(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c3 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_102(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c4 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_103(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c1 && !c3 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_104(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c4 && !c3 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_105(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c1 && !c4 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_106(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c3 && !c4 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_107(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_108(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c4 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_109(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c4 && !c1 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_110(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c4 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_111(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c1 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_112(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c2 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_113(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c2 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_114(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c3 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_115(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c3 && !c1 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_116(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c3 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_117(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c2 && !c1 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_118(int c0, int c1, int c2, int c3, int c4) {
    if(c0) return 200;
    if(!c1 && !c2 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_119(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_120(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_121(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_122(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_123(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_124(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_125(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_126(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_127(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_128(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_129(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_130(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_131(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_132(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_133(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2 && !c3) return 204;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_134(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2 && !c3) return 204;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_135(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_136(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_137(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4 && !c3 && !c2) return 205;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_138(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3 && !c4 && !c2) return 205;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_139(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4 && !c2 && !c3) return 205;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_140(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2 && !c4 && !c3) return 205;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_141(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_142(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_143(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_144(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_145(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_146(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_147(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_148(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_149(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_150(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_151(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_152(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_153(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_154(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_155(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_156(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_157(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0 && !c3) return 204;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_158(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0 && !c3) return 204;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_159(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_160(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_161(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_162(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_163(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c4 && !c0 && !c3) return 205;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_164(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0 && !c4 && !c3) return 205;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_165(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c3 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_166(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_167(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_168(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_169(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_170(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_171(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_172(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_173(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_174(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_175(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_176(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_177(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_178(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c0 && !c2) return 203;
    if(c2 && !c0) return 202;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_179(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_180(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_181(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_182(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_183(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_184(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_185(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_186(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_187(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c4 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_188(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c0 && !c4 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_189(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c2 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_190(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c0 && !c2 && !c4) return 205;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_191(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_192(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_193(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_194(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_195(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_196(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_197(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_198(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_199(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_200(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_201(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_202(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_203(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_204(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_205(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_206(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_207(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_208(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_209(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(!c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_210(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(!c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_211(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(!c3 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_212(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(!c0 && !c3 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_213(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(!c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_214(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(!c0 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_215(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_216(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_217(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_218(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_219(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_220(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_221(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c3 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_222(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c4 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_223(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c0 && !c3 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_224(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c4 && !c3 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_225(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c0 && !c4 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_226(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c3 && !c4 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_227(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_228(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c4 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_229(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c4 && !c0 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_230(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c4 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_231(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c0 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_232(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c2 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_233(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c2 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_234(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c3 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_235(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c3 && !c0 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_236(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c3 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_237(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c2 && !c0 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_238(int c0, int c1, int c2, int c3, int c4) {
    if(c1 && !c0) return 201;
    if(!c0 && !c2 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_239(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_240(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_241(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_242(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_243(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_244(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_245(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_246(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_247(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_248(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_249(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_250(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_251(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_252(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_253(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1 && !c3) return 204;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_254(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1 && !c3) return 204;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_255(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_256(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_257(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c4 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_258(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c3 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_259(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c4 && !c1 && !c3) return 205;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_260(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1 && !c4 && !c3) return 205;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_261(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c3 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_262(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_263(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_264(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_265(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3) return 204;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_266(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3) return 204;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_267(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4 && !c3) return 205;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_268(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3 && !c4) return 205;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_269(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_270(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_271(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_272(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_273(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_274(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_275(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_276(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_277(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c3) return 204;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_278(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c3) return 204;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_279(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_280(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_281(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_282(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_283(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c4 && !c0 && !c3) return 205;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_284(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c0 && !c4 && !c3) return 205;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_285(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c3 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_286(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c0 && !c1) return 202;
    if(c1 && !c0) return 201;
    if(!c0 && !c3 && !c4) return 205;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_287(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_288(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_289(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_290(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_291(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_292(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_293(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_294(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_295(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_296(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_297(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_298(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_299(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_300(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_301(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_302(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_303(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_304(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_305(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_306(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_307(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_308(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_309(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c1 && !c0 && !c4) return 205;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_310(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c0 && !c1 && !c4) return 205;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_311(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_312(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_313(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_314(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_315(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_316(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_317(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_318(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_319(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_320(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_321(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_322(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_323(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_324(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_325(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_326(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_327(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_328(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_329(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(!c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_330(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(!c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_331(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(!c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_332(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(!c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_333(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(!c1 && !c0 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_334(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(!c0 && !c1 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_335(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_336(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_337(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_338(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_339(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_340(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_341(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_342(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_343(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_344(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c4 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_345(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_346(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c3 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_347(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c1 && !c0 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_348(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c4 && !c0 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_349(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c0 && !c1 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_350(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c4 && !c1 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_351(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0 && !c4 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_352(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1 && !c4 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_353(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c1 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_354(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c3 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_355(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c0 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_356(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c3 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_357(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0 && !c3 && !c4) return 205;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_358(int c0, int c1, int c2, int c3, int c4) {
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1 && !c3 && !c4) return 205;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_359(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_360(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_361(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_362(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_363(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_364(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_365(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_366(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_367(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_368(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_369(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_370(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_371(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_372(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_373(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_374(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1 && !c2) return 204;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_375(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_376(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_377(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c4 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_378(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c2 && !c4 && !c1) return 205;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_379(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c4 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_380(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1 && !c4 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_381(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c2 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_382(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1 && !c2 && !c4) return 205;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_383(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_384(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_385(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2) return 204;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_386(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2) return 204;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_387(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4 && !c2) return 205;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_388(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2 && !c4) return 205;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_389(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_390(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_391(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_392(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_393(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_394(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c2 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_395(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_396(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_397(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_398(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0 && !c2) return 204;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_399(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_400(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_401(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_402(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_403(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c4 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_404(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c0 && !c4 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_405(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c2 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_406(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c0 && !c1) return 203;
    if(c1 && !c0) return 201;
    if(!c0 && !c2 && !c4) return 205;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_407(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_408(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_409(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1) return 204;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_410(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1) return 204;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_411(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c4 && !c1) return 205;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_412(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1 && !c4) return 205;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_413(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4) return 204;

    return 205;
}

int  test_6_blocks_variant_414(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c4) return 205;

    return 204;
}

int  test_6_blocks_variant_415(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_416(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_417(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c4 && !c0) return 205;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_418(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c0 && !c1 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c0 && !c4) return 205;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_419(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_420(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_421(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_422(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_423(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_424(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_425(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_426(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_427(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_428(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_429(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0 && !c4) return 205;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_430(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c0 && !c2) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1 && !c4) return 205;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_431(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_432(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_433(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_434(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_435(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_436(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_437(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_438(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_439(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_440(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_441(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_442(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_443(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_444(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_445(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_446(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_447(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_448(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c4 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_449(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(!c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_450(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(!c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_451(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(!c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_452(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(!c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_453(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(!c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_454(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(!c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_455(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c4 && !c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_456(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_457(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c4 && !c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_458(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_459(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_460(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_461(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c4 && !c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_462(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_463(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c4 && !c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_464(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c4 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_465(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_466(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c2 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_467(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c4 && !c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_468(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c1 && !c4 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_469(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c4 && !c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_470(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c0 && !c4 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_471(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c1 && !c0 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_472(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(!c0 && !c1 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_473(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c1 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_474(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c2 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_475(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c0 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_476(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c2 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_477(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c0 && !c2 && !c4) return 205;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_478(int c0, int c1, int c2, int c3, int c4) {
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c1 && !c2 && !c4) return 205;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_479(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_480(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_481(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_482(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_483(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_484(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_485(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_486(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_487(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_488(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_489(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_490(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_491(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_492(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_493(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_494(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_495(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_496(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_497(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c3 && !c2 && !c1) return 205;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_498(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c2 && !c3 && !c1) return 205;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_499(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c3 && !c1 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_500(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1 && !c3 && !c2) return 205;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_501(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_502(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(!c1 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_503(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_504(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_505(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_506(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_507(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3 && !c2) return 205;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_508(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2 && !c3) return 205;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_509(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_510(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_511(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c3 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_512(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c3 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_513(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_514(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c2 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_515(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_516(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_517(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c2 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_518(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c2 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_519(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_520(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c3 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_521(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_522(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_523(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c3 && !c0 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_524(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0 && !c3 && !c2) return 205;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_525(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_526(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c0 && !c1) return 204;
    if(c1 && !c0) return 201;
    if(!c0 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_527(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_528(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_529(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_530(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_531(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c3 && !c1) return 205;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_532(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1 && !c3) return 205;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_533(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;

    return 205;
}

int  test_6_blocks_variant_534(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c3) return 205;

    return 203;
}

int  test_6_blocks_variant_535(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_536(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c3 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_537(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c3 && !c0) return 205;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_538(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c0 && !c1 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c0 && !c3) return 205;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_539(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_540(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_541(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c1 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_542(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c1 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_543(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_544(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c3 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_545(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_546(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_547(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_548(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_549(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_550(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c0 && !c2) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1 && !c3) return 205;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_551(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_552(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_553(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_554(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_555(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c2 && !c1) return 205;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_556(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(!c1 && !c2) return 205;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_557(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 205;
}

int  test_6_blocks_variant_558(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(!c2) return 205;

    return 202;
}

int  test_6_blocks_variant_559(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_560(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c2 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_561(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(!c2 && !c0) return 205;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_562(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c0 && !c1 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(!c0 && !c2) return 205;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_563(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 205;
}

int  test_6_blocks_variant_564(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(!c1) return 205;

    return 201;
}

int  test_6_blocks_variant_565(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c1 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 205;
}

int  test_6_blocks_variant_566(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c0 && !c1 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(!c0) return 205;

    return 200;
}

int  test_6_blocks_variant_567(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c1 && !c0) return 205;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_568(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c0 && !c2 && !c3) return 204;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(!c0 && !c1) return 205;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_569(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_570(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_571(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_572(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_573(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_574(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c0 && !c3) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(!c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_575(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c3 && !c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_576(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c2 && !c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_577(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c3 && !c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_578(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c1 && !c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_579(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(!c2 && !c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_580(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(!c1 && !c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_581(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c3 && !c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_582(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c2 && !c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_583(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c3 && !c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_584(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(!c0 && !c3 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_585(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(!c2 && !c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_586(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(!c0 && !c2 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_587(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(!c3 && !c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_588(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(!c1 && !c3 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_589(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(!c3 && !c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_590(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(!c0 && !c3 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_591(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(!c1 && !c0 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_592(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(!c0 && !c1 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_593(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(!c2 && !c1 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_594(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(!c1 && !c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_595(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(!c2 && !c0 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_596(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(!c0 && !c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_597(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(!c1 && !c0 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_598(int c0, int c1, int c2, int c3, int c4) {
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(!c0 && !c1 && !c2 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_599(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_600(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c2 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_601(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_602(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c3 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_603(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_604(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c4 && !c1 && !c0) return 205;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_605(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_606(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c1 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_607(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_608(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c3 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_609(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_610(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c4 && !c2 && !c0) return 205;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_611(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_612(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c1 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_613(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_614(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c2 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_615(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_616(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c4 && !c3 && !c0) return 205;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_617(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_618(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c1 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_619(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_620(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c2 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c3 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_621(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_622(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c3 && !c4 && !c0) return 205;
    if(c0) return 200;
    if(c4 && !c2 && !c3 && !c1) return 204;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_623(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_624(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c2 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_625(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_626(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c3 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_627(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_628(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c4 && !c0 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3 && !c2) return 204;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_629(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_630(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c0 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_631(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c3 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_632(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c3 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_633(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c4 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_634(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c4 && !c2 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_635(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_636(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c0 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_637(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c2 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_638(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c2 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_639(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c4 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_640(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c4 && !c3 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_641(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_642(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c0 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_643(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c2 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_644(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c2 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_645(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c3 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_646(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c3 && !c4 && !c1) return 205;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_647(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_648(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c1 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_649(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c3 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_650(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c3 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_651(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c4 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_652(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c4 && !c0 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c3 && !c1) return 204;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_653(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c3 && !c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3) return 203;

    return 204;
}

int  test_6_blocks_variant_654(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c4 && !c0 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c3) return 204;

    return 203;
}

int  test_6_blocks_variant_655(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c3 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_656(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c3 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_657(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c4 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_658(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c4 && !c1 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c3 && !c0) return 204;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_659(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c0 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_660(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c0 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_661(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c1 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_662(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c1 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_663(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c4 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_664(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c4 && !c3 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_665(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c0 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_666(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c0 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_667(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c1 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_668(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c1 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_669(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c3 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_670(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c3 && !c4 && !c2) return 205;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_671(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c1 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_672(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c1 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_673(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_674(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c2 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_675(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c4 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_676(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c4 && !c0 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c4 && !c2 && !c1) return 204;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_677(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c2 && !c0 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 204;
}

int  test_6_blocks_variant_678(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c4 && !c0 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c4 && !c2) return 204;

    return 202;
}

int  test_6_blocks_variant_679(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_680(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c2 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_681(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c4 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_682(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c4 && !c1 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c4 && !c2 && !c0) return 204;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_683(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c1 && !c0 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 204;
}

int  test_6_blocks_variant_684(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c4 && !c0 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c4 && !c1) return 204;

    return 201;
}

int  test_6_blocks_variant_685(int c0, int c1, int c2, int c3, int c4) {
    if(!c4 && !c0 && !c1 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 204;
}

int  test_6_blocks_variant_686(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c4 && !c1 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c4 && !c0) return 204;

    return 200;
}

int  test_6_blocks_variant_687(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c4 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_688(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c4 && !c2 && !c3) return 205;
    if(c3 && !c1 && !c2 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c4 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_689(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c0 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_690(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c0 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_691(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c1 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_692(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c1 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_693(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c2 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_694(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c2 && !c4 && !c3) return 205;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c4 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_695(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c1 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_696(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c1 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c1) return 201;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_697(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c2 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_698(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c2 && !c0 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c2 && !c1) return 202;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_699(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c3 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_700(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c3 && !c0 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c0) return 200;
    if(c3 && !c2 && !c1) return 203;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_701(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c2 && !c0 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c2) return 202;

    return 203;
}

int  test_6_blocks_variant_702(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c3 && !c0 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c0) return 200;
    if(c3 && !c2) return 203;

    return 202;
}

int  test_6_blocks_variant_703(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c2 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_704(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c2 && !c1 && !c4) return 205;
    if(c4 && !c3 && !c2 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_705(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c3 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_706(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c3 && !c1 && !c4) return 205;
    if(c4 && !c2 && !c3 && !c1 && !c0) return 204;
    if(c1 && !c0) return 201;
    if(c3 && !c2 && !c0) return 203;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_707(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c1 && !c0 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c1) return 201;

    return 203;
}

int  test_6_blocks_variant_708(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c3 && !c0 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;
    if(c3 && !c1) return 203;

    return 201;
}

int  test_6_blocks_variant_709(int c0, int c1, int c2, int c3, int c4) {
    if(!c3 && !c0 && !c1 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 203;
}

int  test_6_blocks_variant_710(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c3 && !c1 && !c2 && !c4) return 205;
    if(c4 && !c3 && !c1 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;
    if(c3 && !c0) return 203;

    return 200;
}

int  test_6_blocks_variant_711(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c3 && !c2 && !c4) return 205;
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_712(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c3 && !c2 && !c4) return 205;
    if(c4 && !c1 && !c3 && !c2 && !c0) return 204;
    if(c2 && !c1 && !c0) return 202;
    if(c3 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;

    return 200;
}

int  test_6_blocks_variant_713(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c1 && !c0 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c1) return 201;

    return 202;
}

int  test_6_blocks_variant_714(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c2 && !c0 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c0) return 200;
    if(c2 && !c1) return 202;

    return 201;
}

int  test_6_blocks_variant_715(int c0, int c1, int c2, int c3, int c4) {
    if(!c2 && !c0 && !c1 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c0) return 200;

    return 202;
}

int  test_6_blocks_variant_716(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c2 && !c1 && !c3 && !c4) return 205;
    if(c4 && !c2 && !c1 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c1 && !c0) return 201;
    if(c2 && !c0) return 202;

    return 200;
}

int  test_6_blocks_variant_717(int c0, int c1, int c2, int c3, int c4) {
    if(!c1 && !c0 && !c2 && !c3 && !c4) return 205;
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c0) return 200;

    return 201;
}

int  test_6_blocks_variant_718(int c0, int c1, int c2, int c3, int c4) {
    if(!c0 && !c1 && !c2 && !c3 && !c4) return 205;
    if(c4 && !c1 && !c2 && !c3 && !c0) return 204;
    if(c3 && !c2 && !c1 && !c0) return 203;
    if(c2 && !c1 && !c0) return 202;
    if(c1 && !c0) return 201;

    return 200;
}

void test_6_blocks() {

    for(int c0=0;c0<2;c0++) {

    for(int c1=0;c1<2;c1++) {

    for(int c2=0;c2<2;c2++) {

    for(int c3=0;c3<2;c3++) {

    for(int c4=0;c4<2;c4++) {
        int base=test_6_blocks_base(c0, c1, c2, c3, c4);

        if(base != test_6_blocks_variant_0(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_0: expected %d but got %d\n", base, test_6_blocks_variant_0(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_1(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_1: expected %d but got %d\n", base, test_6_blocks_variant_1(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_2(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_2: expected %d but got %d\n", base, test_6_blocks_variant_2(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_3(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_3: expected %d but got %d\n", base, test_6_blocks_variant_3(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_4(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_4: expected %d but got %d\n", base, test_6_blocks_variant_4(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_5(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_5: expected %d but got %d\n", base, test_6_blocks_variant_5(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_6(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_6: expected %d but got %d\n", base, test_6_blocks_variant_6(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_7(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_7: expected %d but got %d\n", base, test_6_blocks_variant_7(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_8(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_8: expected %d but got %d\n", base, test_6_blocks_variant_8(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_9(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_9: expected %d but got %d\n", base, test_6_blocks_variant_9(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_10(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_10: expected %d but got %d\n", base, test_6_blocks_variant_10(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_11(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_11: expected %d but got %d\n", base, test_6_blocks_variant_11(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_12(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_12: expected %d but got %d\n", base, test_6_blocks_variant_12(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_13(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_13: expected %d but got %d\n", base, test_6_blocks_variant_13(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_14(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_14: expected %d but got %d\n", base, test_6_blocks_variant_14(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_15(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_15: expected %d but got %d\n", base, test_6_blocks_variant_15(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_16(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_16: expected %d but got %d\n", base, test_6_blocks_variant_16(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_17(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_17: expected %d but got %d\n", base, test_6_blocks_variant_17(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_18(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_18: expected %d but got %d\n", base, test_6_blocks_variant_18(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_19(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_19: expected %d but got %d\n", base, test_6_blocks_variant_19(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_20(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_20: expected %d but got %d\n", base, test_6_blocks_variant_20(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_21(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_21: expected %d but got %d\n", base, test_6_blocks_variant_21(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_22(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_22: expected %d but got %d\n", base, test_6_blocks_variant_22(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_23(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_23: expected %d but got %d\n", base, test_6_blocks_variant_23(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_24(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_24: expected %d but got %d\n", base, test_6_blocks_variant_24(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_25(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_25: expected %d but got %d\n", base, test_6_blocks_variant_25(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_26(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_26: expected %d but got %d\n", base, test_6_blocks_variant_26(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_27(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_27: expected %d but got %d\n", base, test_6_blocks_variant_27(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_28(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_28: expected %d but got %d\n", base, test_6_blocks_variant_28(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_29(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_29: expected %d but got %d\n", base, test_6_blocks_variant_29(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_30(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_30: expected %d but got %d\n", base, test_6_blocks_variant_30(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_31(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_31: expected %d but got %d\n", base, test_6_blocks_variant_31(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_32(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_32: expected %d but got %d\n", base, test_6_blocks_variant_32(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_33(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_33: expected %d but got %d\n", base, test_6_blocks_variant_33(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_34(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_34: expected %d but got %d\n", base, test_6_blocks_variant_34(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_35(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_35: expected %d but got %d\n", base, test_6_blocks_variant_35(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_36(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_36: expected %d but got %d\n", base, test_6_blocks_variant_36(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_37(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_37: expected %d but got %d\n", base, test_6_blocks_variant_37(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_38(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_38: expected %d but got %d\n", base, test_6_blocks_variant_38(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_39(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_39: expected %d but got %d\n", base, test_6_blocks_variant_39(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_40(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_40: expected %d but got %d\n", base, test_6_blocks_variant_40(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_41(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_41: expected %d but got %d\n", base, test_6_blocks_variant_41(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_42(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_42: expected %d but got %d\n", base, test_6_blocks_variant_42(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_43(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_43: expected %d but got %d\n", base, test_6_blocks_variant_43(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_44(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_44: expected %d but got %d\n", base, test_6_blocks_variant_44(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_45(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_45: expected %d but got %d\n", base, test_6_blocks_variant_45(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_46(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_46: expected %d but got %d\n", base, test_6_blocks_variant_46(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_47(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_47: expected %d but got %d\n", base, test_6_blocks_variant_47(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_48(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_48: expected %d but got %d\n", base, test_6_blocks_variant_48(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_49(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_49: expected %d but got %d\n", base, test_6_blocks_variant_49(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_50(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_50: expected %d but got %d\n", base, test_6_blocks_variant_50(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_51(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_51: expected %d but got %d\n", base, test_6_blocks_variant_51(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_52(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_52: expected %d but got %d\n", base, test_6_blocks_variant_52(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_53(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_53: expected %d but got %d\n", base, test_6_blocks_variant_53(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_54(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_54: expected %d but got %d\n", base, test_6_blocks_variant_54(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_55(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_55: expected %d but got %d\n", base, test_6_blocks_variant_55(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_56(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_56: expected %d but got %d\n", base, test_6_blocks_variant_56(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_57(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_57: expected %d but got %d\n", base, test_6_blocks_variant_57(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_58(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_58: expected %d but got %d\n", base, test_6_blocks_variant_58(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_59(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_59: expected %d but got %d\n", base, test_6_blocks_variant_59(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_60(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_60: expected %d but got %d\n", base, test_6_blocks_variant_60(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_61(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_61: expected %d but got %d\n", base, test_6_blocks_variant_61(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_62(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_62: expected %d but got %d\n", base, test_6_blocks_variant_62(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_63(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_63: expected %d but got %d\n", base, test_6_blocks_variant_63(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_64(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_64: expected %d but got %d\n", base, test_6_blocks_variant_64(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_65(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_65: expected %d but got %d\n", base, test_6_blocks_variant_65(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_66(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_66: expected %d but got %d\n", base, test_6_blocks_variant_66(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_67(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_67: expected %d but got %d\n", base, test_6_blocks_variant_67(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_68(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_68: expected %d but got %d\n", base, test_6_blocks_variant_68(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_69(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_69: expected %d but got %d\n", base, test_6_blocks_variant_69(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_70(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_70: expected %d but got %d\n", base, test_6_blocks_variant_70(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_71(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_71: expected %d but got %d\n", base, test_6_blocks_variant_71(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_72(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_72: expected %d but got %d\n", base, test_6_blocks_variant_72(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_73(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_73: expected %d but got %d\n", base, test_6_blocks_variant_73(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_74(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_74: expected %d but got %d\n", base, test_6_blocks_variant_74(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_75(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_75: expected %d but got %d\n", base, test_6_blocks_variant_75(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_76(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_76: expected %d but got %d\n", base, test_6_blocks_variant_76(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_77(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_77: expected %d but got %d\n", base, test_6_blocks_variant_77(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_78(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_78: expected %d but got %d\n", base, test_6_blocks_variant_78(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_79(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_79: expected %d but got %d\n", base, test_6_blocks_variant_79(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_80(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_80: expected %d but got %d\n", base, test_6_blocks_variant_80(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_81(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_81: expected %d but got %d\n", base, test_6_blocks_variant_81(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_82(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_82: expected %d but got %d\n", base, test_6_blocks_variant_82(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_83(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_83: expected %d but got %d\n", base, test_6_blocks_variant_83(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_84(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_84: expected %d but got %d\n", base, test_6_blocks_variant_84(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_85(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_85: expected %d but got %d\n", base, test_6_blocks_variant_85(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_86(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_86: expected %d but got %d\n", base, test_6_blocks_variant_86(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_87(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_87: expected %d but got %d\n", base, test_6_blocks_variant_87(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_88(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_88: expected %d but got %d\n", base, test_6_blocks_variant_88(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_89(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_89: expected %d but got %d\n", base, test_6_blocks_variant_89(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_90(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_90: expected %d but got %d\n", base, test_6_blocks_variant_90(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_91(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_91: expected %d but got %d\n", base, test_6_blocks_variant_91(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_92(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_92: expected %d but got %d\n", base, test_6_blocks_variant_92(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_93(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_93: expected %d but got %d\n", base, test_6_blocks_variant_93(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_94(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_94: expected %d but got %d\n", base, test_6_blocks_variant_94(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_95(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_95: expected %d but got %d\n", base, test_6_blocks_variant_95(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_96(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_96: expected %d but got %d\n", base, test_6_blocks_variant_96(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_97(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_97: expected %d but got %d\n", base, test_6_blocks_variant_97(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_98(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_98: expected %d but got %d\n", base, test_6_blocks_variant_98(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_99(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_99: expected %d but got %d\n", base, test_6_blocks_variant_99(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_100(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_100: expected %d but got %d\n", base, test_6_blocks_variant_100(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_101(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_101: expected %d but got %d\n", base, test_6_blocks_variant_101(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_102(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_102: expected %d but got %d\n", base, test_6_blocks_variant_102(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_103(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_103: expected %d but got %d\n", base, test_6_blocks_variant_103(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_104(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_104: expected %d but got %d\n", base, test_6_blocks_variant_104(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_105(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_105: expected %d but got %d\n", base, test_6_blocks_variant_105(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_106(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_106: expected %d but got %d\n", base, test_6_blocks_variant_106(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_107(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_107: expected %d but got %d\n", base, test_6_blocks_variant_107(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_108(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_108: expected %d but got %d\n", base, test_6_blocks_variant_108(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_109(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_109: expected %d but got %d\n", base, test_6_blocks_variant_109(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_110(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_110: expected %d but got %d\n", base, test_6_blocks_variant_110(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_111(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_111: expected %d but got %d\n", base, test_6_blocks_variant_111(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_112(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_112: expected %d but got %d\n", base, test_6_blocks_variant_112(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_113(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_113: expected %d but got %d\n", base, test_6_blocks_variant_113(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_114(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_114: expected %d but got %d\n", base, test_6_blocks_variant_114(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_115(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_115: expected %d but got %d\n", base, test_6_blocks_variant_115(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_116(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_116: expected %d but got %d\n", base, test_6_blocks_variant_116(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_117(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_117: expected %d but got %d\n", base, test_6_blocks_variant_117(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_118(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_118: expected %d but got %d\n", base, test_6_blocks_variant_118(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_119(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_119: expected %d but got %d\n", base, test_6_blocks_variant_119(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_120(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_120: expected %d but got %d\n", base, test_6_blocks_variant_120(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_121(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_121: expected %d but got %d\n", base, test_6_blocks_variant_121(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_122(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_122: expected %d but got %d\n", base, test_6_blocks_variant_122(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_123(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_123: expected %d but got %d\n", base, test_6_blocks_variant_123(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_124(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_124: expected %d but got %d\n", base, test_6_blocks_variant_124(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_125(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_125: expected %d but got %d\n", base, test_6_blocks_variant_125(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_126(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_126: expected %d but got %d\n", base, test_6_blocks_variant_126(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_127(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_127: expected %d but got %d\n", base, test_6_blocks_variant_127(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_128(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_128: expected %d but got %d\n", base, test_6_blocks_variant_128(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_129(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_129: expected %d but got %d\n", base, test_6_blocks_variant_129(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_130(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_130: expected %d but got %d\n", base, test_6_blocks_variant_130(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_131(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_131: expected %d but got %d\n", base, test_6_blocks_variant_131(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_132(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_132: expected %d but got %d\n", base, test_6_blocks_variant_132(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_133(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_133: expected %d but got %d\n", base, test_6_blocks_variant_133(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_134(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_134: expected %d but got %d\n", base, test_6_blocks_variant_134(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_135(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_135: expected %d but got %d\n", base, test_6_blocks_variant_135(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_136(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_136: expected %d but got %d\n", base, test_6_blocks_variant_136(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_137(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_137: expected %d but got %d\n", base, test_6_blocks_variant_137(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_138(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_138: expected %d but got %d\n", base, test_6_blocks_variant_138(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_139(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_139: expected %d but got %d\n", base, test_6_blocks_variant_139(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_140(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_140: expected %d but got %d\n", base, test_6_blocks_variant_140(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_141(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_141: expected %d but got %d\n", base, test_6_blocks_variant_141(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_142(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_142: expected %d but got %d\n", base, test_6_blocks_variant_142(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_143(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_143: expected %d but got %d\n", base, test_6_blocks_variant_143(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_144(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_144: expected %d but got %d\n", base, test_6_blocks_variant_144(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_145(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_145: expected %d but got %d\n", base, test_6_blocks_variant_145(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_146(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_146: expected %d but got %d\n", base, test_6_blocks_variant_146(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_147(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_147: expected %d but got %d\n", base, test_6_blocks_variant_147(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_148(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_148: expected %d but got %d\n", base, test_6_blocks_variant_148(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_149(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_149: expected %d but got %d\n", base, test_6_blocks_variant_149(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_150(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_150: expected %d but got %d\n", base, test_6_blocks_variant_150(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_151(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_151: expected %d but got %d\n", base, test_6_blocks_variant_151(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_152(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_152: expected %d but got %d\n", base, test_6_blocks_variant_152(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_153(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_153: expected %d but got %d\n", base, test_6_blocks_variant_153(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_154(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_154: expected %d but got %d\n", base, test_6_blocks_variant_154(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_155(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_155: expected %d but got %d\n", base, test_6_blocks_variant_155(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_156(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_156: expected %d but got %d\n", base, test_6_blocks_variant_156(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_157(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_157: expected %d but got %d\n", base, test_6_blocks_variant_157(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_158(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_158: expected %d but got %d\n", base, test_6_blocks_variant_158(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_159(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_159: expected %d but got %d\n", base, test_6_blocks_variant_159(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_160(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_160: expected %d but got %d\n", base, test_6_blocks_variant_160(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_161(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_161: expected %d but got %d\n", base, test_6_blocks_variant_161(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_162(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_162: expected %d but got %d\n", base, test_6_blocks_variant_162(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_163(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_163: expected %d but got %d\n", base, test_6_blocks_variant_163(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_164(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_164: expected %d but got %d\n", base, test_6_blocks_variant_164(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_165(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_165: expected %d but got %d\n", base, test_6_blocks_variant_165(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_166(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_166: expected %d but got %d\n", base, test_6_blocks_variant_166(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_167(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_167: expected %d but got %d\n", base, test_6_blocks_variant_167(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_168(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_168: expected %d but got %d\n", base, test_6_blocks_variant_168(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_169(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_169: expected %d but got %d\n", base, test_6_blocks_variant_169(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_170(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_170: expected %d but got %d\n", base, test_6_blocks_variant_170(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_171(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_171: expected %d but got %d\n", base, test_6_blocks_variant_171(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_172(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_172: expected %d but got %d\n", base, test_6_blocks_variant_172(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_173(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_173: expected %d but got %d\n", base, test_6_blocks_variant_173(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_174(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_174: expected %d but got %d\n", base, test_6_blocks_variant_174(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_175(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_175: expected %d but got %d\n", base, test_6_blocks_variant_175(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_176(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_176: expected %d but got %d\n", base, test_6_blocks_variant_176(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_177(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_177: expected %d but got %d\n", base, test_6_blocks_variant_177(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_178(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_178: expected %d but got %d\n", base, test_6_blocks_variant_178(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_179(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_179: expected %d but got %d\n", base, test_6_blocks_variant_179(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_180(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_180: expected %d but got %d\n", base, test_6_blocks_variant_180(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_181(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_181: expected %d but got %d\n", base, test_6_blocks_variant_181(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_182(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_182: expected %d but got %d\n", base, test_6_blocks_variant_182(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_183(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_183: expected %d but got %d\n", base, test_6_blocks_variant_183(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_184(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_184: expected %d but got %d\n", base, test_6_blocks_variant_184(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_185(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_185: expected %d but got %d\n", base, test_6_blocks_variant_185(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_186(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_186: expected %d but got %d\n", base, test_6_blocks_variant_186(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_187(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_187: expected %d but got %d\n", base, test_6_blocks_variant_187(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_188(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_188: expected %d but got %d\n", base, test_6_blocks_variant_188(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_189(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_189: expected %d but got %d\n", base, test_6_blocks_variant_189(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_190(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_190: expected %d but got %d\n", base, test_6_blocks_variant_190(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_191(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_191: expected %d but got %d\n", base, test_6_blocks_variant_191(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_192(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_192: expected %d but got %d\n", base, test_6_blocks_variant_192(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_193(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_193: expected %d but got %d\n", base, test_6_blocks_variant_193(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_194(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_194: expected %d but got %d\n", base, test_6_blocks_variant_194(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_195(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_195: expected %d but got %d\n", base, test_6_blocks_variant_195(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_196(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_196: expected %d but got %d\n", base, test_6_blocks_variant_196(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_197(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_197: expected %d but got %d\n", base, test_6_blocks_variant_197(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_198(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_198: expected %d but got %d\n", base, test_6_blocks_variant_198(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_199(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_199: expected %d but got %d\n", base, test_6_blocks_variant_199(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_200(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_200: expected %d but got %d\n", base, test_6_blocks_variant_200(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_201(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_201: expected %d but got %d\n", base, test_6_blocks_variant_201(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_202(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_202: expected %d but got %d\n", base, test_6_blocks_variant_202(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_203(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_203: expected %d but got %d\n", base, test_6_blocks_variant_203(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_204(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_204: expected %d but got %d\n", base, test_6_blocks_variant_204(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_205(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_205: expected %d but got %d\n", base, test_6_blocks_variant_205(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_206(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_206: expected %d but got %d\n", base, test_6_blocks_variant_206(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_207(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_207: expected %d but got %d\n", base, test_6_blocks_variant_207(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_208(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_208: expected %d but got %d\n", base, test_6_blocks_variant_208(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_209(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_209: expected %d but got %d\n", base, test_6_blocks_variant_209(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_210(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_210: expected %d but got %d\n", base, test_6_blocks_variant_210(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_211(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_211: expected %d but got %d\n", base, test_6_blocks_variant_211(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_212(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_212: expected %d but got %d\n", base, test_6_blocks_variant_212(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_213(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_213: expected %d but got %d\n", base, test_6_blocks_variant_213(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_214(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_214: expected %d but got %d\n", base, test_6_blocks_variant_214(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_215(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_215: expected %d but got %d\n", base, test_6_blocks_variant_215(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_216(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_216: expected %d but got %d\n", base, test_6_blocks_variant_216(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_217(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_217: expected %d but got %d\n", base, test_6_blocks_variant_217(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_218(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_218: expected %d but got %d\n", base, test_6_blocks_variant_218(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_219(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_219: expected %d but got %d\n", base, test_6_blocks_variant_219(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_220(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_220: expected %d but got %d\n", base, test_6_blocks_variant_220(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_221(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_221: expected %d but got %d\n", base, test_6_blocks_variant_221(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_222(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_222: expected %d but got %d\n", base, test_6_blocks_variant_222(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_223(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_223: expected %d but got %d\n", base, test_6_blocks_variant_223(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_224(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_224: expected %d but got %d\n", base, test_6_blocks_variant_224(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_225(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_225: expected %d but got %d\n", base, test_6_blocks_variant_225(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_226(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_226: expected %d but got %d\n", base, test_6_blocks_variant_226(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_227(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_227: expected %d but got %d\n", base, test_6_blocks_variant_227(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_228(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_228: expected %d but got %d\n", base, test_6_blocks_variant_228(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_229(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_229: expected %d but got %d\n", base, test_6_blocks_variant_229(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_230(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_230: expected %d but got %d\n", base, test_6_blocks_variant_230(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_231(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_231: expected %d but got %d\n", base, test_6_blocks_variant_231(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_232(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_232: expected %d but got %d\n", base, test_6_blocks_variant_232(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_233(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_233: expected %d but got %d\n", base, test_6_blocks_variant_233(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_234(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_234: expected %d but got %d\n", base, test_6_blocks_variant_234(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_235(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_235: expected %d but got %d\n", base, test_6_blocks_variant_235(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_236(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_236: expected %d but got %d\n", base, test_6_blocks_variant_236(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_237(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_237: expected %d but got %d\n", base, test_6_blocks_variant_237(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_238(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_238: expected %d but got %d\n", base, test_6_blocks_variant_238(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_239(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_239: expected %d but got %d\n", base, test_6_blocks_variant_239(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_240(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_240: expected %d but got %d\n", base, test_6_blocks_variant_240(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_241(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_241: expected %d but got %d\n", base, test_6_blocks_variant_241(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_242(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_242: expected %d but got %d\n", base, test_6_blocks_variant_242(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_243(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_243: expected %d but got %d\n", base, test_6_blocks_variant_243(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_244(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_244: expected %d but got %d\n", base, test_6_blocks_variant_244(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_245(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_245: expected %d but got %d\n", base, test_6_blocks_variant_245(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_246(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_246: expected %d but got %d\n", base, test_6_blocks_variant_246(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_247(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_247: expected %d but got %d\n", base, test_6_blocks_variant_247(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_248(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_248: expected %d but got %d\n", base, test_6_blocks_variant_248(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_249(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_249: expected %d but got %d\n", base, test_6_blocks_variant_249(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_250(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_250: expected %d but got %d\n", base, test_6_blocks_variant_250(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_251(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_251: expected %d but got %d\n", base, test_6_blocks_variant_251(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_252(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_252: expected %d but got %d\n", base, test_6_blocks_variant_252(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_253(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_253: expected %d but got %d\n", base, test_6_blocks_variant_253(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_254(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_254: expected %d but got %d\n", base, test_6_blocks_variant_254(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_255(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_255: expected %d but got %d\n", base, test_6_blocks_variant_255(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_256(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_256: expected %d but got %d\n", base, test_6_blocks_variant_256(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_257(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_257: expected %d but got %d\n", base, test_6_blocks_variant_257(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_258(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_258: expected %d but got %d\n", base, test_6_blocks_variant_258(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_259(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_259: expected %d but got %d\n", base, test_6_blocks_variant_259(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_260(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_260: expected %d but got %d\n", base, test_6_blocks_variant_260(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_261(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_261: expected %d but got %d\n", base, test_6_blocks_variant_261(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_262(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_262: expected %d but got %d\n", base, test_6_blocks_variant_262(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_263(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_263: expected %d but got %d\n", base, test_6_blocks_variant_263(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_264(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_264: expected %d but got %d\n", base, test_6_blocks_variant_264(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_265(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_265: expected %d but got %d\n", base, test_6_blocks_variant_265(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_266(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_266: expected %d but got %d\n", base, test_6_blocks_variant_266(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_267(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_267: expected %d but got %d\n", base, test_6_blocks_variant_267(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_268(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_268: expected %d but got %d\n", base, test_6_blocks_variant_268(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_269(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_269: expected %d but got %d\n", base, test_6_blocks_variant_269(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_270(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_270: expected %d but got %d\n", base, test_6_blocks_variant_270(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_271(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_271: expected %d but got %d\n", base, test_6_blocks_variant_271(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_272(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_272: expected %d but got %d\n", base, test_6_blocks_variant_272(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_273(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_273: expected %d but got %d\n", base, test_6_blocks_variant_273(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_274(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_274: expected %d but got %d\n", base, test_6_blocks_variant_274(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_275(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_275: expected %d but got %d\n", base, test_6_blocks_variant_275(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_276(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_276: expected %d but got %d\n", base, test_6_blocks_variant_276(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_277(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_277: expected %d but got %d\n", base, test_6_blocks_variant_277(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_278(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_278: expected %d but got %d\n", base, test_6_blocks_variant_278(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_279(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_279: expected %d but got %d\n", base, test_6_blocks_variant_279(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_280(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_280: expected %d but got %d\n", base, test_6_blocks_variant_280(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_281(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_281: expected %d but got %d\n", base, test_6_blocks_variant_281(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_282(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_282: expected %d but got %d\n", base, test_6_blocks_variant_282(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_283(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_283: expected %d but got %d\n", base, test_6_blocks_variant_283(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_284(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_284: expected %d but got %d\n", base, test_6_blocks_variant_284(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_285(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_285: expected %d but got %d\n", base, test_6_blocks_variant_285(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_286(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_286: expected %d but got %d\n", base, test_6_blocks_variant_286(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_287(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_287: expected %d but got %d\n", base, test_6_blocks_variant_287(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_288(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_288: expected %d but got %d\n", base, test_6_blocks_variant_288(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_289(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_289: expected %d but got %d\n", base, test_6_blocks_variant_289(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_290(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_290: expected %d but got %d\n", base, test_6_blocks_variant_290(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_291(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_291: expected %d but got %d\n", base, test_6_blocks_variant_291(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_292(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_292: expected %d but got %d\n", base, test_6_blocks_variant_292(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_293(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_293: expected %d but got %d\n", base, test_6_blocks_variant_293(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_294(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_294: expected %d but got %d\n", base, test_6_blocks_variant_294(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_295(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_295: expected %d but got %d\n", base, test_6_blocks_variant_295(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_296(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_296: expected %d but got %d\n", base, test_6_blocks_variant_296(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_297(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_297: expected %d but got %d\n", base, test_6_blocks_variant_297(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_298(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_298: expected %d but got %d\n", base, test_6_blocks_variant_298(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_299(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_299: expected %d but got %d\n", base, test_6_blocks_variant_299(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_300(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_300: expected %d but got %d\n", base, test_6_blocks_variant_300(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_301(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_301: expected %d but got %d\n", base, test_6_blocks_variant_301(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_302(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_302: expected %d but got %d\n", base, test_6_blocks_variant_302(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_303(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_303: expected %d but got %d\n", base, test_6_blocks_variant_303(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_304(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_304: expected %d but got %d\n", base, test_6_blocks_variant_304(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_305(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_305: expected %d but got %d\n", base, test_6_blocks_variant_305(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_306(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_306: expected %d but got %d\n", base, test_6_blocks_variant_306(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_307(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_307: expected %d but got %d\n", base, test_6_blocks_variant_307(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_308(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_308: expected %d but got %d\n", base, test_6_blocks_variant_308(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_309(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_309: expected %d but got %d\n", base, test_6_blocks_variant_309(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_310(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_310: expected %d but got %d\n", base, test_6_blocks_variant_310(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_311(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_311: expected %d but got %d\n", base, test_6_blocks_variant_311(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_312(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_312: expected %d but got %d\n", base, test_6_blocks_variant_312(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_313(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_313: expected %d but got %d\n", base, test_6_blocks_variant_313(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_314(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_314: expected %d but got %d\n", base, test_6_blocks_variant_314(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_315(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_315: expected %d but got %d\n", base, test_6_blocks_variant_315(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_316(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_316: expected %d but got %d\n", base, test_6_blocks_variant_316(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_317(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_317: expected %d but got %d\n", base, test_6_blocks_variant_317(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_318(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_318: expected %d but got %d\n", base, test_6_blocks_variant_318(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_319(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_319: expected %d but got %d\n", base, test_6_blocks_variant_319(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_320(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_320: expected %d but got %d\n", base, test_6_blocks_variant_320(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_321(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_321: expected %d but got %d\n", base, test_6_blocks_variant_321(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_322(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_322: expected %d but got %d\n", base, test_6_blocks_variant_322(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_323(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_323: expected %d but got %d\n", base, test_6_blocks_variant_323(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_324(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_324: expected %d but got %d\n", base, test_6_blocks_variant_324(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_325(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_325: expected %d but got %d\n", base, test_6_blocks_variant_325(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_326(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_326: expected %d but got %d\n", base, test_6_blocks_variant_326(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_327(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_327: expected %d but got %d\n", base, test_6_blocks_variant_327(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_328(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_328: expected %d but got %d\n", base, test_6_blocks_variant_328(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_329(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_329: expected %d but got %d\n", base, test_6_blocks_variant_329(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_330(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_330: expected %d but got %d\n", base, test_6_blocks_variant_330(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_331(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_331: expected %d but got %d\n", base, test_6_blocks_variant_331(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_332(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_332: expected %d but got %d\n", base, test_6_blocks_variant_332(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_333(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_333: expected %d but got %d\n", base, test_6_blocks_variant_333(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_334(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_334: expected %d but got %d\n", base, test_6_blocks_variant_334(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_335(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_335: expected %d but got %d\n", base, test_6_blocks_variant_335(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_336(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_336: expected %d but got %d\n", base, test_6_blocks_variant_336(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_337(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_337: expected %d but got %d\n", base, test_6_blocks_variant_337(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_338(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_338: expected %d but got %d\n", base, test_6_blocks_variant_338(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_339(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_339: expected %d but got %d\n", base, test_6_blocks_variant_339(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_340(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_340: expected %d but got %d\n", base, test_6_blocks_variant_340(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_341(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_341: expected %d but got %d\n", base, test_6_blocks_variant_341(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_342(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_342: expected %d but got %d\n", base, test_6_blocks_variant_342(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_343(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_343: expected %d but got %d\n", base, test_6_blocks_variant_343(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_344(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_344: expected %d but got %d\n", base, test_6_blocks_variant_344(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_345(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_345: expected %d but got %d\n", base, test_6_blocks_variant_345(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_346(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_346: expected %d but got %d\n", base, test_6_blocks_variant_346(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_347(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_347: expected %d but got %d\n", base, test_6_blocks_variant_347(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_348(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_348: expected %d but got %d\n", base, test_6_blocks_variant_348(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_349(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_349: expected %d but got %d\n", base, test_6_blocks_variant_349(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_350(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_350: expected %d but got %d\n", base, test_6_blocks_variant_350(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_351(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_351: expected %d but got %d\n", base, test_6_blocks_variant_351(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_352(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_352: expected %d but got %d\n", base, test_6_blocks_variant_352(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_353(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_353: expected %d but got %d\n", base, test_6_blocks_variant_353(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_354(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_354: expected %d but got %d\n", base, test_6_blocks_variant_354(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_355(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_355: expected %d but got %d\n", base, test_6_blocks_variant_355(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_356(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_356: expected %d but got %d\n", base, test_6_blocks_variant_356(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_357(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_357: expected %d but got %d\n", base, test_6_blocks_variant_357(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_358(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_358: expected %d but got %d\n", base, test_6_blocks_variant_358(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_359(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_359: expected %d but got %d\n", base, test_6_blocks_variant_359(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_360(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_360: expected %d but got %d\n", base, test_6_blocks_variant_360(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_361(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_361: expected %d but got %d\n", base, test_6_blocks_variant_361(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_362(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_362: expected %d but got %d\n", base, test_6_blocks_variant_362(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_363(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_363: expected %d but got %d\n", base, test_6_blocks_variant_363(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_364(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_364: expected %d but got %d\n", base, test_6_blocks_variant_364(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_365(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_365: expected %d but got %d\n", base, test_6_blocks_variant_365(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_366(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_366: expected %d but got %d\n", base, test_6_blocks_variant_366(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_367(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_367: expected %d but got %d\n", base, test_6_blocks_variant_367(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_368(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_368: expected %d but got %d\n", base, test_6_blocks_variant_368(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_369(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_369: expected %d but got %d\n", base, test_6_blocks_variant_369(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_370(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_370: expected %d but got %d\n", base, test_6_blocks_variant_370(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_371(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_371: expected %d but got %d\n", base, test_6_blocks_variant_371(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_372(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_372: expected %d but got %d\n", base, test_6_blocks_variant_372(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_373(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_373: expected %d but got %d\n", base, test_6_blocks_variant_373(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_374(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_374: expected %d but got %d\n", base, test_6_blocks_variant_374(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_375(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_375: expected %d but got %d\n", base, test_6_blocks_variant_375(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_376(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_376: expected %d but got %d\n", base, test_6_blocks_variant_376(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_377(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_377: expected %d but got %d\n", base, test_6_blocks_variant_377(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_378(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_378: expected %d but got %d\n", base, test_6_blocks_variant_378(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_379(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_379: expected %d but got %d\n", base, test_6_blocks_variant_379(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_380(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_380: expected %d but got %d\n", base, test_6_blocks_variant_380(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_381(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_381: expected %d but got %d\n", base, test_6_blocks_variant_381(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_382(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_382: expected %d but got %d\n", base, test_6_blocks_variant_382(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_383(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_383: expected %d but got %d\n", base, test_6_blocks_variant_383(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_384(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_384: expected %d but got %d\n", base, test_6_blocks_variant_384(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_385(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_385: expected %d but got %d\n", base, test_6_blocks_variant_385(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_386(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_386: expected %d but got %d\n", base, test_6_blocks_variant_386(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_387(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_387: expected %d but got %d\n", base, test_6_blocks_variant_387(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_388(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_388: expected %d but got %d\n", base, test_6_blocks_variant_388(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_389(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_389: expected %d but got %d\n", base, test_6_blocks_variant_389(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_390(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_390: expected %d but got %d\n", base, test_6_blocks_variant_390(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_391(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_391: expected %d but got %d\n", base, test_6_blocks_variant_391(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_392(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_392: expected %d but got %d\n", base, test_6_blocks_variant_392(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_393(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_393: expected %d but got %d\n", base, test_6_blocks_variant_393(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_394(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_394: expected %d but got %d\n", base, test_6_blocks_variant_394(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_395(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_395: expected %d but got %d\n", base, test_6_blocks_variant_395(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_396(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_396: expected %d but got %d\n", base, test_6_blocks_variant_396(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_397(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_397: expected %d but got %d\n", base, test_6_blocks_variant_397(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_398(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_398: expected %d but got %d\n", base, test_6_blocks_variant_398(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_399(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_399: expected %d but got %d\n", base, test_6_blocks_variant_399(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_400(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_400: expected %d but got %d\n", base, test_6_blocks_variant_400(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_401(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_401: expected %d but got %d\n", base, test_6_blocks_variant_401(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_402(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_402: expected %d but got %d\n", base, test_6_blocks_variant_402(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_403(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_403: expected %d but got %d\n", base, test_6_blocks_variant_403(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_404(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_404: expected %d but got %d\n", base, test_6_blocks_variant_404(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_405(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_405: expected %d but got %d\n", base, test_6_blocks_variant_405(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_406(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_406: expected %d but got %d\n", base, test_6_blocks_variant_406(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_407(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_407: expected %d but got %d\n", base, test_6_blocks_variant_407(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_408(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_408: expected %d but got %d\n", base, test_6_blocks_variant_408(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_409(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_409: expected %d but got %d\n", base, test_6_blocks_variant_409(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_410(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_410: expected %d but got %d\n", base, test_6_blocks_variant_410(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_411(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_411: expected %d but got %d\n", base, test_6_blocks_variant_411(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_412(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_412: expected %d but got %d\n", base, test_6_blocks_variant_412(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_413(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_413: expected %d but got %d\n", base, test_6_blocks_variant_413(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_414(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_414: expected %d but got %d\n", base, test_6_blocks_variant_414(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_415(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_415: expected %d but got %d\n", base, test_6_blocks_variant_415(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_416(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_416: expected %d but got %d\n", base, test_6_blocks_variant_416(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_417(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_417: expected %d but got %d\n", base, test_6_blocks_variant_417(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_418(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_418: expected %d but got %d\n", base, test_6_blocks_variant_418(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_419(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_419: expected %d but got %d\n", base, test_6_blocks_variant_419(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_420(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_420: expected %d but got %d\n", base, test_6_blocks_variant_420(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_421(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_421: expected %d but got %d\n", base, test_6_blocks_variant_421(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_422(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_422: expected %d but got %d\n", base, test_6_blocks_variant_422(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_423(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_423: expected %d but got %d\n", base, test_6_blocks_variant_423(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_424(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_424: expected %d but got %d\n", base, test_6_blocks_variant_424(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_425(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_425: expected %d but got %d\n", base, test_6_blocks_variant_425(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_426(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_426: expected %d but got %d\n", base, test_6_blocks_variant_426(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_427(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_427: expected %d but got %d\n", base, test_6_blocks_variant_427(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_428(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_428: expected %d but got %d\n", base, test_6_blocks_variant_428(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_429(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_429: expected %d but got %d\n", base, test_6_blocks_variant_429(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_430(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_430: expected %d but got %d\n", base, test_6_blocks_variant_430(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_431(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_431: expected %d but got %d\n", base, test_6_blocks_variant_431(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_432(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_432: expected %d but got %d\n", base, test_6_blocks_variant_432(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_433(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_433: expected %d but got %d\n", base, test_6_blocks_variant_433(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_434(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_434: expected %d but got %d\n", base, test_6_blocks_variant_434(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_435(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_435: expected %d but got %d\n", base, test_6_blocks_variant_435(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_436(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_436: expected %d but got %d\n", base, test_6_blocks_variant_436(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_437(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_437: expected %d but got %d\n", base, test_6_blocks_variant_437(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_438(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_438: expected %d but got %d\n", base, test_6_blocks_variant_438(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_439(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_439: expected %d but got %d\n", base, test_6_blocks_variant_439(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_440(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_440: expected %d but got %d\n", base, test_6_blocks_variant_440(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_441(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_441: expected %d but got %d\n", base, test_6_blocks_variant_441(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_442(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_442: expected %d but got %d\n", base, test_6_blocks_variant_442(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_443(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_443: expected %d but got %d\n", base, test_6_blocks_variant_443(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_444(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_444: expected %d but got %d\n", base, test_6_blocks_variant_444(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_445(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_445: expected %d but got %d\n", base, test_6_blocks_variant_445(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_446(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_446: expected %d but got %d\n", base, test_6_blocks_variant_446(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_447(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_447: expected %d but got %d\n", base, test_6_blocks_variant_447(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_448(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_448: expected %d but got %d\n", base, test_6_blocks_variant_448(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_449(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_449: expected %d but got %d\n", base, test_6_blocks_variant_449(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_450(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_450: expected %d but got %d\n", base, test_6_blocks_variant_450(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_451(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_451: expected %d but got %d\n", base, test_6_blocks_variant_451(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_452(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_452: expected %d but got %d\n", base, test_6_blocks_variant_452(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_453(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_453: expected %d but got %d\n", base, test_6_blocks_variant_453(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_454(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_454: expected %d but got %d\n", base, test_6_blocks_variant_454(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_455(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_455: expected %d but got %d\n", base, test_6_blocks_variant_455(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_456(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_456: expected %d but got %d\n", base, test_6_blocks_variant_456(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_457(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_457: expected %d but got %d\n", base, test_6_blocks_variant_457(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_458(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_458: expected %d but got %d\n", base, test_6_blocks_variant_458(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_459(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_459: expected %d but got %d\n", base, test_6_blocks_variant_459(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_460(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_460: expected %d but got %d\n", base, test_6_blocks_variant_460(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_461(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_461: expected %d but got %d\n", base, test_6_blocks_variant_461(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_462(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_462: expected %d but got %d\n", base, test_6_blocks_variant_462(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_463(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_463: expected %d but got %d\n", base, test_6_blocks_variant_463(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_464(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_464: expected %d but got %d\n", base, test_6_blocks_variant_464(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_465(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_465: expected %d but got %d\n", base, test_6_blocks_variant_465(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_466(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_466: expected %d but got %d\n", base, test_6_blocks_variant_466(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_467(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_467: expected %d but got %d\n", base, test_6_blocks_variant_467(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_468(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_468: expected %d but got %d\n", base, test_6_blocks_variant_468(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_469(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_469: expected %d but got %d\n", base, test_6_blocks_variant_469(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_470(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_470: expected %d but got %d\n", base, test_6_blocks_variant_470(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_471(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_471: expected %d but got %d\n", base, test_6_blocks_variant_471(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_472(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_472: expected %d but got %d\n", base, test_6_blocks_variant_472(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_473(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_473: expected %d but got %d\n", base, test_6_blocks_variant_473(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_474(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_474: expected %d but got %d\n", base, test_6_blocks_variant_474(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_475(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_475: expected %d but got %d\n", base, test_6_blocks_variant_475(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_476(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_476: expected %d but got %d\n", base, test_6_blocks_variant_476(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_477(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_477: expected %d but got %d\n", base, test_6_blocks_variant_477(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_478(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_478: expected %d but got %d\n", base, test_6_blocks_variant_478(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_479(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_479: expected %d but got %d\n", base, test_6_blocks_variant_479(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_480(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_480: expected %d but got %d\n", base, test_6_blocks_variant_480(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_481(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_481: expected %d but got %d\n", base, test_6_blocks_variant_481(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_482(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_482: expected %d but got %d\n", base, test_6_blocks_variant_482(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_483(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_483: expected %d but got %d\n", base, test_6_blocks_variant_483(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_484(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_484: expected %d but got %d\n", base, test_6_blocks_variant_484(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_485(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_485: expected %d but got %d\n", base, test_6_blocks_variant_485(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_486(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_486: expected %d but got %d\n", base, test_6_blocks_variant_486(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_487(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_487: expected %d but got %d\n", base, test_6_blocks_variant_487(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_488(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_488: expected %d but got %d\n", base, test_6_blocks_variant_488(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_489(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_489: expected %d but got %d\n", base, test_6_blocks_variant_489(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_490(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_490: expected %d but got %d\n", base, test_6_blocks_variant_490(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_491(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_491: expected %d but got %d\n", base, test_6_blocks_variant_491(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_492(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_492: expected %d but got %d\n", base, test_6_blocks_variant_492(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_493(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_493: expected %d but got %d\n", base, test_6_blocks_variant_493(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_494(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_494: expected %d but got %d\n", base, test_6_blocks_variant_494(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_495(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_495: expected %d but got %d\n", base, test_6_blocks_variant_495(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_496(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_496: expected %d but got %d\n", base, test_6_blocks_variant_496(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_497(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_497: expected %d but got %d\n", base, test_6_blocks_variant_497(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_498(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_498: expected %d but got %d\n", base, test_6_blocks_variant_498(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_499(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_499: expected %d but got %d\n", base, test_6_blocks_variant_499(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_500(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_500: expected %d but got %d\n", base, test_6_blocks_variant_500(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_501(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_501: expected %d but got %d\n", base, test_6_blocks_variant_501(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_502(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_502: expected %d but got %d\n", base, test_6_blocks_variant_502(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_503(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_503: expected %d but got %d\n", base, test_6_blocks_variant_503(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_504(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_504: expected %d but got %d\n", base, test_6_blocks_variant_504(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_505(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_505: expected %d but got %d\n", base, test_6_blocks_variant_505(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_506(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_506: expected %d but got %d\n", base, test_6_blocks_variant_506(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_507(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_507: expected %d but got %d\n", base, test_6_blocks_variant_507(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_508(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_508: expected %d but got %d\n", base, test_6_blocks_variant_508(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_509(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_509: expected %d but got %d\n", base, test_6_blocks_variant_509(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_510(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_510: expected %d but got %d\n", base, test_6_blocks_variant_510(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_511(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_511: expected %d but got %d\n", base, test_6_blocks_variant_511(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_512(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_512: expected %d but got %d\n", base, test_6_blocks_variant_512(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_513(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_513: expected %d but got %d\n", base, test_6_blocks_variant_513(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_514(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_514: expected %d but got %d\n", base, test_6_blocks_variant_514(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_515(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_515: expected %d but got %d\n", base, test_6_blocks_variant_515(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_516(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_516: expected %d but got %d\n", base, test_6_blocks_variant_516(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_517(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_517: expected %d but got %d\n", base, test_6_blocks_variant_517(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_518(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_518: expected %d but got %d\n", base, test_6_blocks_variant_518(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_519(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_519: expected %d but got %d\n", base, test_6_blocks_variant_519(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_520(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_520: expected %d but got %d\n", base, test_6_blocks_variant_520(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_521(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_521: expected %d but got %d\n", base, test_6_blocks_variant_521(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_522(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_522: expected %d but got %d\n", base, test_6_blocks_variant_522(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_523(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_523: expected %d but got %d\n", base, test_6_blocks_variant_523(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_524(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_524: expected %d but got %d\n", base, test_6_blocks_variant_524(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_525(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_525: expected %d but got %d\n", base, test_6_blocks_variant_525(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_526(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_526: expected %d but got %d\n", base, test_6_blocks_variant_526(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_527(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_527: expected %d but got %d\n", base, test_6_blocks_variant_527(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_528(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_528: expected %d but got %d\n", base, test_6_blocks_variant_528(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_529(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_529: expected %d but got %d\n", base, test_6_blocks_variant_529(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_530(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_530: expected %d but got %d\n", base, test_6_blocks_variant_530(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_531(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_531: expected %d but got %d\n", base, test_6_blocks_variant_531(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_532(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_532: expected %d but got %d\n", base, test_6_blocks_variant_532(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_533(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_533: expected %d but got %d\n", base, test_6_blocks_variant_533(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_534(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_534: expected %d but got %d\n", base, test_6_blocks_variant_534(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_535(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_535: expected %d but got %d\n", base, test_6_blocks_variant_535(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_536(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_536: expected %d but got %d\n", base, test_6_blocks_variant_536(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_537(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_537: expected %d but got %d\n", base, test_6_blocks_variant_537(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_538(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_538: expected %d but got %d\n", base, test_6_blocks_variant_538(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_539(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_539: expected %d but got %d\n", base, test_6_blocks_variant_539(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_540(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_540: expected %d but got %d\n", base, test_6_blocks_variant_540(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_541(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_541: expected %d but got %d\n", base, test_6_blocks_variant_541(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_542(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_542: expected %d but got %d\n", base, test_6_blocks_variant_542(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_543(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_543: expected %d but got %d\n", base, test_6_blocks_variant_543(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_544(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_544: expected %d but got %d\n", base, test_6_blocks_variant_544(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_545(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_545: expected %d but got %d\n", base, test_6_blocks_variant_545(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_546(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_546: expected %d but got %d\n", base, test_6_blocks_variant_546(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_547(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_547: expected %d but got %d\n", base, test_6_blocks_variant_547(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_548(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_548: expected %d but got %d\n", base, test_6_blocks_variant_548(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_549(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_549: expected %d but got %d\n", base, test_6_blocks_variant_549(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_550(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_550: expected %d but got %d\n", base, test_6_blocks_variant_550(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_551(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_551: expected %d but got %d\n", base, test_6_blocks_variant_551(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_552(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_552: expected %d but got %d\n", base, test_6_blocks_variant_552(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_553(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_553: expected %d but got %d\n", base, test_6_blocks_variant_553(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_554(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_554: expected %d but got %d\n", base, test_6_blocks_variant_554(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_555(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_555: expected %d but got %d\n", base, test_6_blocks_variant_555(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_556(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_556: expected %d but got %d\n", base, test_6_blocks_variant_556(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_557(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_557: expected %d but got %d\n", base, test_6_blocks_variant_557(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_558(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_558: expected %d but got %d\n", base, test_6_blocks_variant_558(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_559(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_559: expected %d but got %d\n", base, test_6_blocks_variant_559(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_560(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_560: expected %d but got %d\n", base, test_6_blocks_variant_560(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_561(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_561: expected %d but got %d\n", base, test_6_blocks_variant_561(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_562(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_562: expected %d but got %d\n", base, test_6_blocks_variant_562(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_563(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_563: expected %d but got %d\n", base, test_6_blocks_variant_563(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_564(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_564: expected %d but got %d\n", base, test_6_blocks_variant_564(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_565(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_565: expected %d but got %d\n", base, test_6_blocks_variant_565(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_566(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_566: expected %d but got %d\n", base, test_6_blocks_variant_566(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_567(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_567: expected %d but got %d\n", base, test_6_blocks_variant_567(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_568(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_568: expected %d but got %d\n", base, test_6_blocks_variant_568(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_569(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_569: expected %d but got %d\n", base, test_6_blocks_variant_569(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_570(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_570: expected %d but got %d\n", base, test_6_blocks_variant_570(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_571(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_571: expected %d but got %d\n", base, test_6_blocks_variant_571(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_572(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_572: expected %d but got %d\n", base, test_6_blocks_variant_572(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_573(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_573: expected %d but got %d\n", base, test_6_blocks_variant_573(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_574(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_574: expected %d but got %d\n", base, test_6_blocks_variant_574(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_575(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_575: expected %d but got %d\n", base, test_6_blocks_variant_575(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_576(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_576: expected %d but got %d\n", base, test_6_blocks_variant_576(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_577(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_577: expected %d but got %d\n", base, test_6_blocks_variant_577(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_578(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_578: expected %d but got %d\n", base, test_6_blocks_variant_578(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_579(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_579: expected %d but got %d\n", base, test_6_blocks_variant_579(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_580(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_580: expected %d but got %d\n", base, test_6_blocks_variant_580(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_581(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_581: expected %d but got %d\n", base, test_6_blocks_variant_581(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_582(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_582: expected %d but got %d\n", base, test_6_blocks_variant_582(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_583(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_583: expected %d but got %d\n", base, test_6_blocks_variant_583(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_584(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_584: expected %d but got %d\n", base, test_6_blocks_variant_584(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_585(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_585: expected %d but got %d\n", base, test_6_blocks_variant_585(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_586(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_586: expected %d but got %d\n", base, test_6_blocks_variant_586(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_587(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_587: expected %d but got %d\n", base, test_6_blocks_variant_587(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_588(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_588: expected %d but got %d\n", base, test_6_blocks_variant_588(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_589(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_589: expected %d but got %d\n", base, test_6_blocks_variant_589(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_590(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_590: expected %d but got %d\n", base, test_6_blocks_variant_590(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_591(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_591: expected %d but got %d\n", base, test_6_blocks_variant_591(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_592(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_592: expected %d but got %d\n", base, test_6_blocks_variant_592(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_593(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_593: expected %d but got %d\n", base, test_6_blocks_variant_593(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_594(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_594: expected %d but got %d\n", base, test_6_blocks_variant_594(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_595(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_595: expected %d but got %d\n", base, test_6_blocks_variant_595(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_596(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_596: expected %d but got %d\n", base, test_6_blocks_variant_596(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_597(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_597: expected %d but got %d\n", base, test_6_blocks_variant_597(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_598(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_598: expected %d but got %d\n", base, test_6_blocks_variant_598(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_599(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_599: expected %d but got %d\n", base, test_6_blocks_variant_599(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_600(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_600: expected %d but got %d\n", base, test_6_blocks_variant_600(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_601(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_601: expected %d but got %d\n", base, test_6_blocks_variant_601(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_602(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_602: expected %d but got %d\n", base, test_6_blocks_variant_602(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_603(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_603: expected %d but got %d\n", base, test_6_blocks_variant_603(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_604(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_604: expected %d but got %d\n", base, test_6_blocks_variant_604(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_605(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_605: expected %d but got %d\n", base, test_6_blocks_variant_605(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_606(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_606: expected %d but got %d\n", base, test_6_blocks_variant_606(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_607(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_607: expected %d but got %d\n", base, test_6_blocks_variant_607(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_608(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_608: expected %d but got %d\n", base, test_6_blocks_variant_608(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_609(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_609: expected %d but got %d\n", base, test_6_blocks_variant_609(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_610(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_610: expected %d but got %d\n", base, test_6_blocks_variant_610(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_611(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_611: expected %d but got %d\n", base, test_6_blocks_variant_611(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_612(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_612: expected %d but got %d\n", base, test_6_blocks_variant_612(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_613(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_613: expected %d but got %d\n", base, test_6_blocks_variant_613(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_614(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_614: expected %d but got %d\n", base, test_6_blocks_variant_614(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_615(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_615: expected %d but got %d\n", base, test_6_blocks_variant_615(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_616(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_616: expected %d but got %d\n", base, test_6_blocks_variant_616(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_617(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_617: expected %d but got %d\n", base, test_6_blocks_variant_617(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_618(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_618: expected %d but got %d\n", base, test_6_blocks_variant_618(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_619(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_619: expected %d but got %d\n", base, test_6_blocks_variant_619(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_620(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_620: expected %d but got %d\n", base, test_6_blocks_variant_620(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_621(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_621: expected %d but got %d\n", base, test_6_blocks_variant_621(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_622(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_622: expected %d but got %d\n", base, test_6_blocks_variant_622(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_623(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_623: expected %d but got %d\n", base, test_6_blocks_variant_623(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_624(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_624: expected %d but got %d\n", base, test_6_blocks_variant_624(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_625(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_625: expected %d but got %d\n", base, test_6_blocks_variant_625(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_626(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_626: expected %d but got %d\n", base, test_6_blocks_variant_626(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_627(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_627: expected %d but got %d\n", base, test_6_blocks_variant_627(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_628(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_628: expected %d but got %d\n", base, test_6_blocks_variant_628(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_629(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_629: expected %d but got %d\n", base, test_6_blocks_variant_629(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_630(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_630: expected %d but got %d\n", base, test_6_blocks_variant_630(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_631(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_631: expected %d but got %d\n", base, test_6_blocks_variant_631(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_632(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_632: expected %d but got %d\n", base, test_6_blocks_variant_632(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_633(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_633: expected %d but got %d\n", base, test_6_blocks_variant_633(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_634(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_634: expected %d but got %d\n", base, test_6_blocks_variant_634(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_635(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_635: expected %d but got %d\n", base, test_6_blocks_variant_635(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_636(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_636: expected %d but got %d\n", base, test_6_blocks_variant_636(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_637(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_637: expected %d but got %d\n", base, test_6_blocks_variant_637(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_638(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_638: expected %d but got %d\n", base, test_6_blocks_variant_638(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_639(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_639: expected %d but got %d\n", base, test_6_blocks_variant_639(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_640(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_640: expected %d but got %d\n", base, test_6_blocks_variant_640(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_641(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_641: expected %d but got %d\n", base, test_6_blocks_variant_641(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_642(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_642: expected %d but got %d\n", base, test_6_blocks_variant_642(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_643(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_643: expected %d but got %d\n", base, test_6_blocks_variant_643(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_644(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_644: expected %d but got %d\n", base, test_6_blocks_variant_644(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_645(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_645: expected %d but got %d\n", base, test_6_blocks_variant_645(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_646(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_646: expected %d but got %d\n", base, test_6_blocks_variant_646(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_647(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_647: expected %d but got %d\n", base, test_6_blocks_variant_647(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_648(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_648: expected %d but got %d\n", base, test_6_blocks_variant_648(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_649(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_649: expected %d but got %d\n", base, test_6_blocks_variant_649(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_650(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_650: expected %d but got %d\n", base, test_6_blocks_variant_650(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_651(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_651: expected %d but got %d\n", base, test_6_blocks_variant_651(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_652(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_652: expected %d but got %d\n", base, test_6_blocks_variant_652(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_653(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_653: expected %d but got %d\n", base, test_6_blocks_variant_653(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_654(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_654: expected %d but got %d\n", base, test_6_blocks_variant_654(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_655(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_655: expected %d but got %d\n", base, test_6_blocks_variant_655(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_656(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_656: expected %d but got %d\n", base, test_6_blocks_variant_656(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_657(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_657: expected %d but got %d\n", base, test_6_blocks_variant_657(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_658(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_658: expected %d but got %d\n", base, test_6_blocks_variant_658(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_659(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_659: expected %d but got %d\n", base, test_6_blocks_variant_659(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_660(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_660: expected %d but got %d\n", base, test_6_blocks_variant_660(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_661(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_661: expected %d but got %d\n", base, test_6_blocks_variant_661(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_662(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_662: expected %d but got %d\n", base, test_6_blocks_variant_662(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_663(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_663: expected %d but got %d\n", base, test_6_blocks_variant_663(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_664(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_664: expected %d but got %d\n", base, test_6_blocks_variant_664(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_665(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_665: expected %d but got %d\n", base, test_6_blocks_variant_665(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_666(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_666: expected %d but got %d\n", base, test_6_blocks_variant_666(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_667(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_667: expected %d but got %d\n", base, test_6_blocks_variant_667(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_668(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_668: expected %d but got %d\n", base, test_6_blocks_variant_668(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_669(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_669: expected %d but got %d\n", base, test_6_blocks_variant_669(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_670(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_670: expected %d but got %d\n", base, test_6_blocks_variant_670(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_671(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_671: expected %d but got %d\n", base, test_6_blocks_variant_671(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_672(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_672: expected %d but got %d\n", base, test_6_blocks_variant_672(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_673(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_673: expected %d but got %d\n", base, test_6_blocks_variant_673(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_674(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_674: expected %d but got %d\n", base, test_6_blocks_variant_674(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_675(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_675: expected %d but got %d\n", base, test_6_blocks_variant_675(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_676(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_676: expected %d but got %d\n", base, test_6_blocks_variant_676(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_677(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_677: expected %d but got %d\n", base, test_6_blocks_variant_677(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_678(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_678: expected %d but got %d\n", base, test_6_blocks_variant_678(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_679(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_679: expected %d but got %d\n", base, test_6_blocks_variant_679(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_680(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_680: expected %d but got %d\n", base, test_6_blocks_variant_680(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_681(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_681: expected %d but got %d\n", base, test_6_blocks_variant_681(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_682(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_682: expected %d but got %d\n", base, test_6_blocks_variant_682(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_683(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_683: expected %d but got %d\n", base, test_6_blocks_variant_683(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_684(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_684: expected %d but got %d\n", base, test_6_blocks_variant_684(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_685(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_685: expected %d but got %d\n", base, test_6_blocks_variant_685(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_686(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_686: expected %d but got %d\n", base, test_6_blocks_variant_686(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_687(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_687: expected %d but got %d\n", base, test_6_blocks_variant_687(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_688(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_688: expected %d but got %d\n", base, test_6_blocks_variant_688(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_689(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_689: expected %d but got %d\n", base, test_6_blocks_variant_689(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_690(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_690: expected %d but got %d\n", base, test_6_blocks_variant_690(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_691(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_691: expected %d but got %d\n", base, test_6_blocks_variant_691(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_692(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_692: expected %d but got %d\n", base, test_6_blocks_variant_692(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_693(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_693: expected %d but got %d\n", base, test_6_blocks_variant_693(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_694(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_694: expected %d but got %d\n", base, test_6_blocks_variant_694(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_695(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_695: expected %d but got %d\n", base, test_6_blocks_variant_695(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_696(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_696: expected %d but got %d\n", base, test_6_blocks_variant_696(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_697(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_697: expected %d but got %d\n", base, test_6_blocks_variant_697(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_698(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_698: expected %d but got %d\n", base, test_6_blocks_variant_698(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_699(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_699: expected %d but got %d\n", base, test_6_blocks_variant_699(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_700(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_700: expected %d but got %d\n", base, test_6_blocks_variant_700(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_701(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_701: expected %d but got %d\n", base, test_6_blocks_variant_701(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_702(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_702: expected %d but got %d\n", base, test_6_blocks_variant_702(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_703(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_703: expected %d but got %d\n", base, test_6_blocks_variant_703(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_704(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_704: expected %d but got %d\n", base, test_6_blocks_variant_704(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_705(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_705: expected %d but got %d\n", base, test_6_blocks_variant_705(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_706(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_706: expected %d but got %d\n", base, test_6_blocks_variant_706(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_707(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_707: expected %d but got %d\n", base, test_6_blocks_variant_707(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_708(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_708: expected %d but got %d\n", base, test_6_blocks_variant_708(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_709(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_709: expected %d but got %d\n", base, test_6_blocks_variant_709(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_710(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_710: expected %d but got %d\n", base, test_6_blocks_variant_710(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_711(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_711: expected %d but got %d\n", base, test_6_blocks_variant_711(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_712(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_712: expected %d but got %d\n", base, test_6_blocks_variant_712(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_713(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_713: expected %d but got %d\n", base, test_6_blocks_variant_713(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_714(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_714: expected %d but got %d\n", base, test_6_blocks_variant_714(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_715(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_715: expected %d but got %d\n", base, test_6_blocks_variant_715(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_716(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_716: expected %d but got %d\n", base, test_6_blocks_variant_716(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_717(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_717: expected %d but got %d\n", base, test_6_blocks_variant_717(c0, c1, c2, c3, c4));
            assert(0);
        }
        if(base != test_6_blocks_variant_718(c0, c1, c2, c3, c4)) {
            printf("test_6_blocks_variant_718: expected %d but got %d\n", base, test_6_blocks_variant_718(c0, c1, c2, c3, c4));
            assert(0);
        }    }
    }
    }
    }
    }
}

int main() {
    test_2_blocks();
    test_3_blocks();
    test_4_blocks();
    test_5_blocks();
    test_6_blocks();
    return 0;
}
