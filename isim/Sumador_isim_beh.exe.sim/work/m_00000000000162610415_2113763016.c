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
static const char *ng0 = "C:/Users/nimer/Documents/Verilog Projects/Programmable/Sumador.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {15, 0};
static int ng3[] = {11, 0};
static int ng4[] = {0, 0};
static int ng5[] = {20, 0};
static int ng6[] = {1, 0};
static int ng7[] = {21, 0};
static int ng8[] = {24, 0};
static int ng9[] = {22, 0};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static int ng12[] = {5, 0};
static int ng13[] = {10, 0};
static int ng14[] = {6, 0};
static int ng15[] = {19, 0};
static int ng16[] = {16, 0};
static unsigned int ng17[] = {3U, 0U};



static void Cont_19_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1656U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 2984);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 2932);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;

LAB0:    t1 = (t0 + 2736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2940);
    *((int *)t2) = 1;
    t3 = (t0 + 2764);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1196U);
    t5 = *((char **)t4);
    t4 = (t0 + 1976);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1196U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2068);
    t10 = (t0 + 2068);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    t14 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1012U);
    t4 = *((char **)t2);
    t2 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t14);
    t6 = (!(t16));
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t15);
    t17 = (!(t19));
    t20 = (t6 && t17);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t21 = (!(t23));
    t24 = (t20 && t21);
    if (t24 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1288U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t23 = *((unsigned int *)t4);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB9:    xsi_set_current_line(45, ng0);

LAB28:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2068);
    t10 = (t0 + 2068);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    t14 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1104U);
    t4 = *((char **)t2);
    t2 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t14);
    t6 = (!(t16));
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t15);
    t17 = (!(t19));
    t20 = (t6 && t17);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t21 = (!(t23));
    t24 = (t20 && t21);
    if (t24 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1380U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t23 = *((unsigned int *)t4);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB15;

LAB11:    xsi_set_current_line(55, ng0);

LAB40:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2068);
    t10 = (t0 + 2068);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng12)));
    t14 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    t13 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t14);
    t6 = (!(t16));
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t15);
    t17 = (!(t19));
    t20 = (t6 && t17);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t21 = (!(t23));
    t24 = (t20 && t21);
    if (t24 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t14);
    t6 = (!(t16));
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t15);
    t17 = (!(t19));
    t20 = (t6 && t17);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t21 = (!(t23));
    t24 = (t20 && t21);
    if (t24 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    t13 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t7, t8, t9, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t14);
    t6 = (!(t16));
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t15);
    t17 = (!(t19));
    t20 = (t6 && t17);
    t18 = (t9 + 4);
    t23 = *((unsigned int *)t18);
    t21 = (!(t23));
    t24 = (t20 && t21);
    if (t24 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2068);
    t5 = (t0 + 2068);
    t10 = (t5 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t7, t11, 2, t12, 32, 1);
    t13 = (t7 + 4);
    t16 = *((unsigned int *)t13);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng17)));
    t4 = (t0 + 1976);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB15;

LAB13:    xsi_set_current_line(66, ng0);

LAB53:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1472U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t19 = (~(t16));
    t23 = *((unsigned int *)t5);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB15;

LAB17:    t26 = *((unsigned int *)t9);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t8), t31);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB20;

LAB21:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB22;

LAB23:    t26 = *((unsigned int *)t9);
    t25 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t27 = (t28 - t29);
    t30 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t4, t25, *((unsigned int *)t8), t30);
    goto LAB24;

LAB25:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng10)));
    t10 = (t0 + 1976);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 2);
    goto LAB27;

LAB29:    t26 = *((unsigned int *)t9);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t8), t31);
    goto LAB30;

LAB31:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB32;

LAB33:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB34;

LAB35:    t26 = *((unsigned int *)t9);
    t25 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t27 = (t28 - t29);
    t30 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t4, t25, *((unsigned int *)t8), t30);
    goto LAB36;

LAB37:    xsi_set_current_line(52, ng0);
    t5 = ((char*)((ng11)));
    t10 = (t0 + 1976);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 2);
    goto LAB39;

LAB41:    t26 = *((unsigned int *)t9);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t8), t31);
    goto LAB42;

LAB43:    t26 = *((unsigned int *)t9);
    t25 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t27 = (t28 - t29);
    t30 = (t27 + 1);
    xsi_vlogvar_assign_value(t4, t2, t25, *((unsigned int *)t8), t30);
    goto LAB44;

LAB45:    t26 = *((unsigned int *)t9);
    t25 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t27 = (t28 - t29);
    t30 = (t27 + 1);
    xsi_vlogvar_assign_value(t4, t2, t25, *((unsigned int *)t8), t30);
    goto LAB46;

LAB47:    t26 = *((unsigned int *)t9);
    t25 = (t26 + 0);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t8);
    t27 = (t28 - t29);
    t30 = (t27 + 1);
    xsi_vlogvar_assign_value(t4, t2, t25, *((unsigned int *)t8), t30);
    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB50;

LAB51:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t7), 1);
    goto LAB52;

LAB54:    xsi_set_current_line(68, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1976);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB56;

}


extern void work_m_00000000000162610415_2113763016_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Always_29_1};
	xsi_register_didat("work_m_00000000000162610415_2113763016", "isim/Sumador_isim_beh.exe.sim/work/m_00000000000162610415_2113763016.didat");
	xsi_register_executes(pe);
}
