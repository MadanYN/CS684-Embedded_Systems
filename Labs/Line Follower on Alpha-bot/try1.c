/* --- Generated the 20/3/2023 at 14:5 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 11 0:35:15 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts try1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "try1.h"

void Try1__line_follow_reset(Try1__line_follow_mem* self) {
  self->v_90 = Try1__Two;
  self->pnr = false;
  self->ck = Try1__St_Straight;
  self->v_49 = true;
  self->v_46 = true;
}

void Try1__line_follow_step(long s1, long s2, long s3, long s4, long s5,
                            Try1__line_follow_out* _out,
                            Try1__line_follow_mem* self) {
  
  long v_69;
  long v_68;
  long v_67;
  long v_66;
  long v_65;
  long v_64;
  long v_63;
  long v_62;
  long v_61;
  long v_60;
  long v_59;
  long v_58;
  long v_57;
  long v_56;
  long r_St_Stop;
  Try1__st s_1_St_Stop;
  long r_St_Turn;
  Try1__st s_1_St_Turn;
  long r_St_Straight;
  Try1__st s_1_St_Straight;
  long v_80;
  long v_79;
  long v_78;
  long v_77;
  long v_82;
  long v_81;
  long v_87;
  long v_86;
  long v_85;
  long v_84;
  long v_83;
  long v_89;
  long v_88;
  Try1__modes next_iter_Twelve;
  long right_vel_St_Turn_Twelve;
  long left_vel_St_Turn_Twelve;
  long rdir_St_Turn_Twelve;
  long ldir_St_Turn_Twelve;
  Try1__modes next_iter_Eleven;
  long right_vel_St_Turn_Eleven;
  long left_vel_St_Turn_Eleven;
  long rdir_St_Turn_Eleven;
  long ldir_St_Turn_Eleven;
  Try1__modes next_iter_Seven;
  long right_vel_St_Turn_Seven;
  long left_vel_St_Turn_Seven;
  long rdir_St_Turn_Seven;
  long ldir_St_Turn_Seven;
  Try1__modes next_iter_Three;
  long right_vel_St_Turn_Three;
  long left_vel_St_Turn_Three;
  long rdir_St_Turn_Three;
  long ldir_St_Turn_Three;
  Try1__modes next_iter_Two;
  long right_vel_St_Turn_Two;
  long left_vel_St_Turn_Two;
  long rdir_St_Turn_Two;
  long ldir_St_Turn_Two;
  Try1__modes ck_2;
  long v_76;
  Try1__st v_75;
  long v_74;
  long v_73;
  long v_72;
  long v_71;
  long v_70;
  Try1__modes next_iter_1;
  Try1__modes iter;
  Try1__modes next_iter;
  long v_95;
  long v_94;
  long v_93;
  long v_92;
  long v_91;
  long nr_St_Stop;
  Try1__st ns_St_Stop;
  Try1__modes nodenum_St_Stop;
  long right_vel_St_Stop;
  long left_vel_St_Stop;
  long rdir_St_Stop;
  long ldir_St_Stop;
  long nr_St_Turn;
  Try1__st ns_St_Turn;
  Try1__modes nodenum_St_Turn;
  long right_vel_St_Turn;
  long left_vel_St_Turn;
  long rdir_St_Turn;
  long ldir_St_Turn;
  long nr_St_Straight;
  Try1__st ns_St_Straight;
  Try1__modes nodenum_St_Straight;
  long right_vel_St_Straight;
  long left_vel_St_Straight;
  long rdir_St_Straight;
  long ldir_St_Straight;
  Try1__st ck_1;
  long v_55;
  long v_54;
  long v_53;
  long v_52;
  long v_51;
  long v_48;
  long v_45;
  long v_44;
  long v_43;
  long v_42;
  long v_41;
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  long v_32;
  long v_31;
  long v_30;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_25;
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_19;
  long v_18;
  long v_17;
  long v_16;
  long v_15;
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_4;
  long v_3;
  long v_2;
  long v_1;
  long v;
  Try1__st s_1;
  Try1__st ns;
  long r;
  long nr;
  long wtAvg;
  long prop;
  long diff;
  long integ;
  long pid;
  long s[5];
  v_12 = (s5-Try1__actualMin);
  v_13 = (v_12*1000);
  v_14 = (v_13/50);
  v_9 = (s4-Try1__actualMin);
  v_10 = (v_9*1000);
  v_11 = (v_10/50);
  v_6 = (s3-Try1__actualMin);
  v_7 = (v_6*1000);
  v_8 = (v_7/50);
  v_3 = (s2-Try1__actualMin);
  v_4 = (v_3*1000);
  v_5 = (v_4/50);
  v = (s1-Try1__actualMin);
  v_1 = (v*1000);
  v_2 = (v_1/50);
  switch (self->ck) {
    case Try1__St_Turn:
      r_St_Turn = self->pnr;
      s_1_St_Turn = Try1__St_Turn;
      break;
    case Try1__St_Stop:
      r_St_Stop = self->pnr;
      s_1_St_Stop = Try1__St_Stop;
      break;
    default:
      break;
  };
  s[0] = v_2;
  s[1] = v_5;
  s[2] = v_8;
  s[3] = v_11;
  s[4] = v_14;
  v_43 = s[4];
  v_41 = s[3];
  v_39 = s[2];
  v_37 = s[1];
  v_36 = s[0];
  v_38 = (v_36+v_37);
  v_40 = (v_38+v_39);
  v_42 = (v_40+v_41);
  v_44 = (v_42+v_43);
  v_33 = s[4];
  v_34 = (4000*v_33);
  v_30 = s[3];
  v_31 = (3000*v_30);
  v_27 = s[2];
  v_28 = (2000*v_27);
  v_25 = s[1];
  v_26 = (1000*v_25);
  v_29 = (v_26+v_28);
  v_32 = (v_29+v_31);
  v_35 = (v_32+v_34);
  v_45 = (v_35/v_44);
  v_22 = s[4];
  v_20 = s[3];
  v_18 = s[2];
  v_16 = s[1];
  v_15 = s[0];
  v_17 = (v_15+v_16);
  v_19 = (v_17+v_18);
  v_21 = (v_19+v_20);
  v_23 = (v_21+v_22);
  v_24 = (v_23>0);
  if (v_24) {
    wtAvg = v_45;
  } else {
    wtAvg = 0;
  };
  prop = (wtAvg-2000);
  v_52 = (prop/Try1__kp);
  v_51 = (self->v_50+prop);
  if (self->v_49) {
    integ = prop;
  } else {
    integ = v_51;
  };
  v_55 = (integ/Try1__ki);
  v_48 = (prop-self->v_47);
  if (self->v_46) {
    diff = prop;
  } else {
    diff = v_48;
  };
  v_53 = (diff/Try1__kd);
  v_54 = (v_52+v_53);
  pid = (v_54+v_55);
  switch (self->ck) {
    case Try1__St_Straight:
      v_65 = s[0];
      v_66 = (v_65>Try1__thresh);
      v_63 = s[1];
      v_64 = (v_63>Try1__thresh);
      v_67 = (v_64&&v_66);
      v_60 = s[4];
      v_61 = (v_60>Try1__thresh);
      v_58 = s[3];
      v_59 = (v_58>Try1__thresh);
      v_62 = (v_59&&v_61);
      v_68 = (v_62||v_67);
      v_56 = s[2];
      v_57 = (v_56>Try1__thresh);
      v_69 = (v_57&&v_68);
      if (v_69) {
        r_St_Straight = false;
        s_1_St_Straight = Try1__St_Turn;
      } else {
        r_St_Straight = self->pnr;
        s_1_St_Straight = Try1__St_Straight;
      };
      s_1 = s_1_St_Straight;
      r = r_St_Straight;
      break;
    case Try1__St_Stop:
      s_1 = s_1_St_Stop;
      r = r_St_Stop;
      break;
    case Try1__St_Turn:
      s_1 = s_1_St_Turn;
      r = r_St_Turn;
      break;
    default:
      break;
  };
  ck_1 = s_1;
  switch (ck_1) {
    case Try1__St_Straight:
      nodenum_St_Straight = Try1__Twelve;
      rdir_St_Straight = 1;
      ldir_St_Straight = 1;
      v_95 = (Try1__base_speed-pid);
      v_93 = (Try1__base_speed+pid);
      v_94 = (v_93>0);
      if (v_94) {
        right_vel_St_Straight = v_95;
      } else {
        right_vel_St_Straight = 200;
      };
      v_92 = (Try1__base_speed+pid);
      v_91 = (pid<Try1__base_speed);
      if (v_91) {
        left_vel_St_Straight = v_92;
      } else {
        left_vel_St_Straight = 200;
      };
      nr_St_Straight = false;
      ns_St_Straight = Try1__St_Straight;
      _out->nodenum = nodenum_St_Straight;
      _out->ldir = ldir_St_Straight;
      _out->rdir = rdir_St_Straight;
      _out->left_vel = left_vel_St_Straight;
      _out->right_vel = right_vel_St_Straight;
      ns = ns_St_Straight;
      nr = nr_St_Straight;
      break;
    case Try1__St_Turn:
      if (r) {
        next_iter_1 = Try1__Two;
      } else {
        next_iter_1 = self->v_90;
      };
      iter = next_iter_1;
      ck_2 = iter;
      nodenum_St_Turn = iter;
      v_73 = s[2];
      v_74 = (v_73>Try1__thresh);
      if (v_74) {
        v_76 = true;
        v_75 = Try1__St_Straight;
      } else {
        v_76 = false;
        v_75 = Try1__St_Turn;
      };
      _out->nodenum = nodenum_St_Turn;
      switch (ck_2) {
        case Try1__Two:
          v_88 = s[2];
          v_89 = (v_88>Try1__thresh);
          if (v_89) {
            next_iter_Two = Try1__Three;
          } else {
            next_iter_Two = Try1__Two;
          };
          right_vel_St_Turn_Two = 100;
          left_vel_St_Turn_Two = 100;
          ldir_St_Turn_Two = 1;
          rdir_St_Turn_Two = 1;
          ldir_St_Turn = ldir_St_Turn_Two;
          rdir_St_Turn = rdir_St_Turn_Two;
          left_vel_St_Turn = left_vel_St_Turn_Two;
          right_vel_St_Turn = right_vel_St_Turn_Two;
          next_iter = next_iter_Two;
          break;
        case Try1__Three:
          v_86 = s[2];
          v_87 = (v_86>Try1__thresh);
          if (v_87) {
            next_iter_Three = Try1__Seven;
          } else {
            next_iter_Three = Try1__Three;
          };
          v_85 = (Try1__base_speed-pid);
          v_83 = (Try1__base_speed+pid);
          v_84 = (v_83>0);
          if (v_84) {
            right_vel_St_Turn_Three = v_85;
          } else {
            right_vel_St_Turn_Three = 200;
          };
          left_vel_St_Turn_Three = 0;
          ldir_St_Turn_Three = 0;
          rdir_St_Turn_Three = 1;
          ldir_St_Turn = ldir_St_Turn_Three;
          rdir_St_Turn = rdir_St_Turn_Three;
          left_vel_St_Turn = left_vel_St_Turn_Three;
          right_vel_St_Turn = right_vel_St_Turn_Three;
          next_iter = next_iter_Three;
          break;
        case Try1__Seven:
          v_81 = s[2];
          v_82 = (v_81>Try1__thresh);
          if (v_82) {
            next_iter_Seven = Try1__Eleven;
          } else {
            next_iter_Seven = Try1__Seven;
          };
          right_vel_St_Turn_Seven = 100;
          left_vel_St_Turn_Seven = 100;
          ldir_St_Turn_Seven = 1;
          rdir_St_Turn_Seven = 1;
          ldir_St_Turn = ldir_St_Turn_Seven;
          rdir_St_Turn = rdir_St_Turn_Seven;
          left_vel_St_Turn = left_vel_St_Turn_Seven;
          right_vel_St_Turn = right_vel_St_Turn_Seven;
          next_iter = next_iter_Seven;
          break;
        case Try1__Eleven:
          v_79 = s[2];
          v_80 = (v_79>Try1__thresh);
          if (v_80) {
            next_iter_Eleven = Try1__Twelve;
          } else {
            next_iter_Eleven = Try1__Eleven;
          };
          right_vel_St_Turn_Eleven = 0;
          v_78 = (Try1__base_speed+pid);
          v_77 = (pid<Try1__base_speed);
          if (v_77) {
            left_vel_St_Turn_Eleven = v_78;
          } else {
            left_vel_St_Turn_Eleven = 200;
          };
          ldir_St_Turn_Eleven = 1;
          rdir_St_Turn_Eleven = 0;
          ldir_St_Turn = ldir_St_Turn_Eleven;
          rdir_St_Turn = rdir_St_Turn_Eleven;
          left_vel_St_Turn = left_vel_St_Turn_Eleven;
          right_vel_St_Turn = right_vel_St_Turn_Eleven;
          next_iter = next_iter_Eleven;
          break;
        case Try1__Twelve:
          next_iter_Twelve = Try1__Twelve;
          right_vel_St_Turn_Twelve = 0;
          left_vel_St_Turn_Twelve = 0;
          ldir_St_Turn_Twelve = 1;
          rdir_St_Turn_Twelve = 1;
          ldir_St_Turn = ldir_St_Turn_Twelve;
          rdir_St_Turn = rdir_St_Turn_Twelve;
          left_vel_St_Turn = left_vel_St_Turn_Twelve;
          right_vel_St_Turn = right_vel_St_Turn_Twelve;
          next_iter = next_iter_Twelve;
          break;
        default:
          break;
      };
      _out->ldir = ldir_St_Turn;
      _out->rdir = rdir_St_Turn;
      _out->left_vel = left_vel_St_Turn;
      v_70 = (_out->left_vel==0);
      _out->right_vel = right_vel_St_Turn;
      v_71 = (_out->right_vel==0);
      v_72 = (v_70&&v_71);
      if (v_72) {
        nr_St_Turn = true;
        ns_St_Turn = Try1__St_Stop;
      } else {
        nr_St_Turn = v_76;
        ns_St_Turn = v_75;
      };
      ns = ns_St_Turn;
      nr = nr_St_Turn;
      self->v_90 = next_iter;
      break;
    case Try1__St_Stop:
      right_vel_St_Stop = 0;
      left_vel_St_Stop = 0;
      nodenum_St_Stop = Try1__Twelve;
      rdir_St_Stop = 1;
      ldir_St_Stop = 1;
      nr_St_Stop = false;
      ns_St_Stop = Try1__St_Stop;
      _out->nodenum = nodenum_St_Stop;
      _out->ldir = ldir_St_Stop;
      _out->rdir = rdir_St_Stop;
      _out->left_vel = left_vel_St_Stop;
      _out->right_vel = right_vel_St_Stop;
      ns = ns_St_Stop;
      nr = nr_St_Stop;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;
  self->v_50 = integ;
  self->v_49 = false;
  self->v_47 = prop;
  self->v_46 = false;;
}

