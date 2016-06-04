/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/nimer/Documents/Verilog Projects/Programmable/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};



static void Always_27_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 2748U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3088);
    *((int *)t2) = 1;
    t3 = (t0 + 2776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1904U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2132);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1720U);
    t8 = *((char **)t7);
    t7 = (t0 + 1812U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2132);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB35;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2132);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2132);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB36;

LAB37:
LAB38:    t39 = (t0 + 2132);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB35;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t3) == 0)
        goto LAB39;

LAB41:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;

LAB42:    t8 = (t0 + 2132);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB35;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    t39 = (t0 + 2132);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB35;

LAB19:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB49;

LAB46:    if (t20 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t10) = 1;

LAB49:    t21 = (t0 + 2132);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB21:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 2132);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB35;

LAB23:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 2132);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB51;

LAB50:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB52;

LAB53:    t21 = (t0 + 2132);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB56;

LAB55:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB57;

LAB58:    t21 = (t0 + 2132);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB61;

LAB60:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB63;

LAB62:    *((unsigned int *)t10) = 1;

LAB63:    t21 = (t0 + 2132);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1720U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB66;

LAB65:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB68;

LAB67:    *((unsigned int *)t10) = 1;

LAB68:    t21 = (t0 + 2132);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB36:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB38;

LAB39:    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB45;

LAB48:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB51:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB56:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t10) = 1;
    goto LAB58;

LAB61:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB66:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

}

static void Always_48_1(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3096);
    *((int *)t2) = 1;
    t3 = (t0 + 2920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 2132);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 4294967295U);
    if (t14 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB8:    memset(t4, 0, 8);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t16) == 0)
        goto LAB9;

LAB11:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB12:    t23 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

}


extern void work_m_00000000002734659918_0886308060_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000002734659918_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000002734659918_0886308060.didat");
	xsi_register_executes(pe);
}
