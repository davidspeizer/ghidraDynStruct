// + Delete
// + Find
// + FindMax
// + FindMin
// + Insert
// + MakeEmpty
// + Retrieve
// + main
// + testtree.istr0
// + testtree.istr1
// + testtree.istr2
// + testtree.istr3
// + testtree.istr4
// + testtree.istr5
// + testtree.istr6
// + testtree.istr7
// + testtree.istr8
// + tree.istr0
// + tree.istr1
// + tree.istr2
// + tree.istr3
#include <stdlib.h>
#include <stdio.h>
#include "print.h"
typedef struct struct1 struct1;
typedef struct struct2 struct2;
struct struct1 {
  int field0;
  struct1* field1;
  struct1* field2;
};
struct struct2 {
  int field0;
  struct2* field1;
  struct2* field2;
};
char* tree_istr3();
char* tree_istr2();
char* tree_istr1();
char* tree_istr0();
int* FindMax(struct2* x7);
int* FindMin(struct2* x6);
struct2* Delete(int x10,struct2* x11);
int Retrieve(int* x12);
int* Find(int x4,struct2* x5);
struct2* Insert(int x8,struct2* x9);
struct2* MakeEmpty(struct1* x3);
int main(int x1,char** x2);
char* testtree_istr8();
char* testtree_istr7();
char* testtree_istr6();
char* testtree_istr5();
char* testtree_istr4();
char* testtree_istr3();
char* testtree_istr2();
char* testtree_istr1();
char* testtree_istr0();
char* tree_istr3() {
  char* y125;
  int y126;
  char* y127;
  char y128;
  label__BB000:
            y126 = 2;
            y125 = (char*) malloc((sizeof(char)) * y126 * 1);
            y127 = y125;
            y128 = 10;
            y127[0] = y128;
            y127 = y127 + 1;
            y128 = 0;
            y127[0] = y128;
            return y125;
}
char* tree_istr2() {
  char* y121;
  int y122;
  char* y123;
  char y124;
  label__BB000:
            y122 = 18;
            y121 = (char*) malloc((sizeof(char)) * y122 * 1);
            y123 = y121;
            y124 = 69;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 108;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 101;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 109;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 101;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 110;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 116;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 32;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 110;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 111;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 116;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 32;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 102;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 111;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 117;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 110;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 100;
            y123[0] = y124;
            y123 = y123 + 1;
            y124 = 0;
            y123[0] = y124;
            return y121;
}
char* tree_istr1() {
  char* y117;
  int y118;
  char* y119;
  char y120;
  label__BB000:
            y118 = 2;
            y117 = (char*) malloc((sizeof(char)) * y118 * 1);
            y119 = y117;
            y120 = 10;
            y119[0] = y120;
            y119 = y119 + 1;
            y120 = 0;
            y119[0] = y120;
            return y117;
}
char* tree_istr0() {
  char* y113;
  int y114;
  char* y115;
  char y116;
  label__BB000:
            y114 = 16;
            y113 = (char*) malloc((sizeof(char)) * y114 * 1);
            y115 = y113;
            y116 = 79;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 117;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 116;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 32;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 111;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 102;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 32;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 115;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 112;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 97;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 99;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 101;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 33;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 33;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 33;
            y115[0] = y116;
            y115 = y115 + 1;
            y116 = 0;
            y115[0] = y116;
            return y113;
}
int* FindMax(struct2* x7) {
  int* y152;
  int y153;
  struct2* y154;
  int* y155;
  label__BB000:
            if (x7) goto label__BB23;
            y153 = 1;
            goto label__BB24;
  label__BB10:
            y152 = x7;
            return y152;
  label__BB23:
            y153 = 0;
            if (y153) goto label__BB10;
            goto label__BB9;
  label__BB24:
            if (y153) goto label__BB10;
            goto label__BB9;
  label__BB8:
            y154 = x7->field2;
            x7 = y154;
            y155 = x7->field2;
            if (y155) goto label__BB8;
            y152 = x7;
            return y152;
  label__BB9:
            y155 = x7->field2;
            if (y155) goto label__BB8;
            y152 = x7;
            return y152;
}
int* FindMin(struct2* x6) {
  int* y148;
  int* y149;
  struct2* y150;
  int* y151;
  label__BB000:
            if (x6) goto label__BB5;
            y148 = 0;
            goto label__BB7;
  label__BB5:
            y149 = x6->field1;
            if (y149) goto label__BB6;
            y148 = x6;
            goto label__BB7;
  label__BB6:
            y150 = x6->field1;
            y151 = FindMin(y150);
            y148 = y151;
            return y148;
  label__BB7: return y148;
}
struct2* Delete(int x10,struct2* x11) {
  struct2* y177;
  int* y178;
  char* y179;
  int y180;
  char* y181;
  int y182;
  int y183;
  int y184;
  int y185;
  int y186;
  int y187;
  int y188;
  struct2* y189;
  struct2* y190;
  int y191;
  int y192;
  int y193;
  int y194;
  struct2* y195;
  struct2* y196;
  int* y197;
  int y198;
  int* y199;
  int y200;
  struct2* y201;
  int y202;
  int y203;
  struct2* y204;
  struct2* y205;
  int* y206;
  struct2* y207;
  int* y208;
  struct2* y209;
  label__BB000:
            if (x11) goto label__BB15;
            y179 = tree_istr2();
            y180 = prints(y179);
            y181 = tree_istr3();
            y182 = prints(y181);
            y184 = 1;
            y183 = mincexit(y184);
            goto label__BB20;
  label__BB15:
            y185 = x11->field0;
            y186 = x10;
            y186 = y186 - y185;
            y186 = y186 * -1;
            y186 = y186 + -1;
            y187 = y185;
            y188 = y185;
            y187 = y187 | x10;
            y188 = y188 & x10;
            y187 = y187 - y188;
            y187 = y187 | y186;
            y186 = x10;
            y186 = y186 * -1;
            y186 = y186 + -1;
            y186 = y186 | y185;
            y186 = y186 & y187;
            y186 = y186 >> 31;
            if (y186) goto label__BB16;
            y189 = x11->field1;
            y190 = Delete(x10,y189);
            x11->field1 = y190;
            goto label__BB20;
  label__BB16:
            y191 = x11->field0;
            y192 = y191;
            y192 = y192 - x10;
            y192 = y192 * -1;
            y192 = y192 + -1;
            y193 = x10;
            y194 = x10;
            y193 = y193 | y191;
            y194 = y194 & y191;
            y193 = y193 - y194;
            y193 = y193 | y192;
            y192 = y191;
            y192 = y192 * -1;
            y192 = y192 + -1;
            y192 = y192 | x10;
            y192 = y192 & y193;
            y192 = y192 >> 31;
            if (y192) goto label__BB17;
            y195 = x11->field2;
            y196 = Delete(x10,y195);
            x11->field2 = y196;
            goto label__BB20;
  label__BB17:
            y197 = x11->field1;
            if (y197) goto label__BB25;
            y198 = 1;
            goto label__BB26;
  label__BB18:
            y178 = x11;
            y206 = x11->field1;
            if (y206) goto label__BB19;
            y207 = x11->field2;
            x11 = y207;
            goto label__BB20;
  label__BB19:
            y208 = x11->field2;
            if (y208) goto label__BB20;
            y209 = x11->field1;
            x11 = y209;
            y177 = x11;
            return y177;
  label__BB20:
            y177 = x11;
            return y177;
  label__BB25:
            y198 = 0;
            if (y198) goto label__BB18;
            y199 = x11->field2;
            if (y199) goto label__BB27;
            y200 = 1;
            goto label__BB28;
  label__BB26:
            if (y198) goto label__BB18;
            y199 = x11->field2;
            if (y199) goto label__BB27;
            y200 = 1;
            goto label__BB28;
  label__BB27:
            y200 = 0;
            if (y200) goto label__BB18;
            y201 = x11->field2;
            y178 = FindMin(y201);
            y202 = *y178;
            x11->field0 = y202;
            y203 = x11->field0;
            y204 = x11->field2;
            y205 = Delete(y203,y204);
            x11->field2 = y205;
            goto label__BB20;
  label__BB28:
            if (y200) goto label__BB18;
            y201 = x11->field2;
            y178 = FindMin(y201);
            y202 = *y178;
            x11->field0 = y202;
            y203 = x11->field0;
            y204 = x11->field2;
            y205 = Delete(y203,y204);
            x11->field2 = y205;
            goto label__BB20;
}
int Retrieve(int* x12) {
  int y210;
  int y211;
  label__BB000:
            y211 = *x12;
            y210 = y211;
            return y210;
}
int* Find(int x4,struct2* x5) {
  int* y135;
  int y136;
  int y137;
  int y138;
  int y139;
  struct2* y140;
  int* y141;
  int y142;
  int y143;
  int y144;
  int y145;
  struct2* y146;
  int* y147;
  label__BB000:
            if (x5) goto label__BB1;
            y135 = 0;
            goto label__BB4;
  label__BB1:
            y136 = x5->field0;
            y137 = x4;
            y137 = y137 - y136;
            y137 = y137 * -1;
            y137 = y137 + -1;
            y138 = y136;
            y139 = y136;
            y138 = y138 | x4;
            y139 = y139 & x4;
            y138 = y138 - y139;
            y138 = y138 | y137;
            y137 = x4;
            y137 = y137 * -1;
            y137 = y137 + -1;
            y137 = y137 | y136;
            y137 = y137 & y138;
            y137 = y137 >> 31;
            if (y137) goto label__BB2;
            y140 = x5->field1;
            y141 = Find(x4,y140);
            y135 = y141;
            goto label__BB4;
  label__BB2:
            y142 = x5->field0;
            y143 = y142;
            y143 = y143 - x4;
            y143 = y143 * -1;
            y143 = y143 + -1;
            y144 = x4;
            y145 = x4;
            y144 = y144 | y142;
            y145 = y145 & y142;
            y144 = y144 - y145;
            y144 = y144 | y143;
            y143 = y142;
            y143 = y143 * -1;
            y143 = y143 + -1;
            y143 = y143 | x4;
            y143 = y143 & y144;
            y143 = y143 >> 31;
            if (y143) goto label__BB3;
            y146 = x5->field2;
            y147 = Find(x4,y146);
            y135 = y147;
            goto label__BB4;
  label__BB3:
            y135 = x5;
            return y135;
  label__BB4: return y135;
}
struct2* Insert(int x8,struct2* x9) {
  struct2* y156;
  char* y157;
  int y158;
  char* y159;
  int y160;
  int y161;
  int y162;
  struct2* y163;
  struct2* y164;
  int y165;
  int y166;
  int y167;
  int y168;
  struct2* y169;
  struct2* y170;
  int y171;
  int y172;
  int y173;
  int y174;
  struct2* y175;
  struct2* y176;
  label__BB000:
            if (x9) goto label__BB12;
            x9 = (struct2*) malloc(sizeof(struct2));
            if (x9) goto label__BB11;
            y157 = tree_istr0();
            y158 = prints(y157);
            y159 = tree_istr1();
            y160 = prints(y159);
            y162 = 1;
            y161 = mincexit(y162);
            goto label__BB14;
  label__BB11:
            x9->field0 = x8;
            y163 = 0;
            x9->field2 = y163;
            y164 = x9->field2;
            x9->field1 = y164;
            goto label__BB14;
  label__BB12:
            y165 = x9->field0;
            y166 = x8;
            y166 = y166 - y165;
            y166 = y166 * -1;
            y166 = y166 + -1;
            y167 = y165;
            y168 = y165;
            y167 = y167 | x8;
            y168 = y168 & x8;
            y167 = y167 - y168;
            y167 = y167 | y166;
            y166 = x8;
            y166 = y166 * -1;
            y166 = y166 + -1;
            y166 = y166 | y165;
            y166 = y166 & y167;
            y166 = y166 >> 31;
            if (y166) goto label__BB13;
            y169 = x9->field1;
            y170 = Insert(x8,y169);
            x9->field1 = y170;
            goto label__BB14;
  label__BB13:
            y171 = x9->field0;
            y172 = y171;
            y172 = y172 - x8;
            y172 = y172 * -1;
            y172 = y172 + -1;
            y173 = x8;
            y174 = x8;
            y173 = y173 | y171;
            y174 = y174 & y171;
            y173 = y173 - y174;
            y173 = y173 | y172;
            y172 = y171;
            y172 = y172 * -1;
            y172 = y172 + -1;
            y172 = y172 | x8;
            y172 = y172 & y173;
            y172 = y172 >> 31;
            if (y172) goto label__BB14;
            y175 = x9->field2;
            y176 = Insert(x8,y175);
            x9->field2 = y176;
            y156 = x9;
            return y156;
  label__BB14:
            y156 = x9;
            return y156;
}
struct2* MakeEmpty(struct1* x3) {
  struct2* y129;
  int y130;
  struct1* y131;
  int* y132;
  struct1* y133;
  int* y134;
  label__BB000:
            if (x3) goto label__BB21;
            y130 = 1;
            goto label__BB22;
  label__BB0:
            y129 = 0;
            return y129;
  label__BB21:
            y130 = 0;
            if (y130) goto label__BB0;
            y131 = x3->field1;
            y132 = MakeEmpty(y131);
            y133 = x3->field2;
            y134 = MakeEmpty(y133);
            y129 = 0;
            return y129;
  label__BB22:
            if (y130) goto label__BB0;
            y131 = x3->field1;
            y132 = MakeEmpty(y131);
            y133 = x3->field2;
            y134 = MakeEmpty(y133);
            y129 = 0;
            return y129;
}
int main(int x1,char** x2) {
  int y37;
  struct2* y38;
  int* y39;
  int y40;
  int y41;
  struct1* y42;
  int y43;
  int y44;
  int y45;
  int y46;
  int y47;
  int y48;
  int y49;
  int y50;
  int y51;
  int y52;
  int y53;
  int y54;
  char* y55;
  int y56;
  int y57;
  char* y58;
  int y59;
  int y60;
  int y61;
  int y62;
  int y63;
  int y64;
  int y65;
  int y66;
  int y67;
  int y68;
  int y69;
  int y70;
  int y71;
  int y72;
  int y73;
  int y74;
  int y75;
  char* y76;
  int y77;
  int y78;
  char* y79;
  int y80;
  int y81;
  int y82;
  int y83;
  int y84;
  int y85;
  int y86;
  int y87;
  int y88;
  char* y89;
  int y90;
  int y91;
  char* y92;
  int y93;
  int y94;
  int y95;
  int y96;
  int y97;
  int y98;
  int y99;
  int y100;
  char* y101;
  int y102;
  int* y103;
  int y104;
  int y105;
  char* y106;
  int y107;
  int* y108;
  int y109;
  int y110;
  char* y111;
  int y112;
  label__BB000:
            y41 = 0;
            y42 = 0;
            y38 = MakeEmpty(y42);
            y40 = 0;
            goto label__BB1;
  label__BB0:
            y38 = Insert(y41,y38);
            y40 = y40 + 1;
            y43 = y41;
            y43 = y43 + 7;
            y45 = y43;
            y45 = y45 / 50;
            y45 = y45 * 50;
            y44 = y43;
            y44 = y44 - y45;
            y41 = y44;
            y46 = y40;
            y46 = y46 - 50;
            y47 = y40;
            y49 = y40;
            y47 = y47 | 50;
            y49 = y49 & 50;
            y47 = y47 - y49;
            y48 = y46;
            y50 = y46;
            y48 = y48 | y40;
            y50 = y50 & y40;
            y48 = y48 - y50;
            y47 = y47 & y48;
            y48 = y46;
            y51 = y46;
            y48 = y48 | y47;
            y51 = y51 & y47;
            y48 = y48 - y51;
            y48 = y48 >> 31;
            if (y48) goto label__BB0;
            y40 = 0;
            goto label__BB5;
  label__BB1:
            y46 = y40;
            y46 = y46 - 50;
            y47 = y40;
            y49 = y40;
            y47 = y47 | 50;
            y49 = y49 & 50;
            y47 = y47 - y49;
            y48 = y46;
            y50 = y46;
            y48 = y48 | y40;
            y50 = y50 & y40;
            y48 = y48 - y50;
            y47 = y47 & y48;
            y48 = y46;
            y51 = y46;
            y48 = y48 | y47;
            y51 = y51 & y47;
            y48 = y48 - y51;
            y48 = y48 >> 31;
            if (y48) goto label__BB0;
            y40 = 0;
            goto label__BB5;
  label__BB10:
            y81 = y40;
            y81 = y81 + 2;
            y40 = y81;
            y82 = y40;
            y82 = y82 - 50;
            y83 = y40;
            y85 = y40;
            y83 = y83 | 50;
            y85 = y85 & 50;
            y83 = y83 - y85;
            y84 = y82;
            y86 = y82;
            y84 = y84 | y40;
            y86 = y86 & y40;
            y84 = y84 - y86;
            y83 = y83 & y84;
            y84 = y82;
            y87 = y82;
            y84 = y84 | y83;
            y87 = y87 & y83;
            y84 = y84 - y87;
            y84 = y84 >> 31;
            if (y84) goto label__BB8;
            y40 = 0;
            goto label__BB14;
  label__BB11:
            y82 = y40;
            y82 = y82 - 50;
            y83 = y40;
            y85 = y40;
            y83 = y83 | 50;
            y85 = y85 & 50;
            y83 = y83 - y85;
            y84 = y82;
            y86 = y82;
            y84 = y84 | y40;
            y86 = y86 & y40;
            y84 = y84 - y86;
            y83 = y83 & y84;
            y84 = y82;
            y87 = y82;
            y84 = y84 | y83;
            y87 = y87 & y83;
            y84 = y84 - y87;
            y84 = y84 >> 31;
            if (y84) goto label__BB8;
            y40 = 0;
            goto label__BB14;
  label__BB12:
            y39 = Find(y40,y38);
            if (y39) goto label__BB19;
            y88 = 1;
            goto label__BB20;
  label__BB13:
            y94 = y40;
            y94 = y94 + 2;
            y40 = y94;
            y95 = y40;
            y95 = y95 - 50;
            y96 = y40;
            y98 = y40;
            y96 = y96 | 50;
            y98 = y98 & 50;
            y96 = y96 - y98;
            y97 = y95;
            y99 = y95;
            y97 = y97 | y40;
            y99 = y99 & y40;
            y97 = y97 - y99;
            y96 = y96 & y97;
            y97 = y95;
            y100 = y95;
            y97 = y97 | y96;
            y100 = y100 & y96;
            y97 = y97 - y100;
            y97 = y97 >> 31;
            if (y97) goto label__BB12;
            y101 = testtree_istr6();
            y102 = prints(y101);
            y103 = FindMin(y38);
            y104 = Retrieve(y103);
            y105 = print32(y104);
            y106 = testtree_istr7();
            y107 = prints(y106);
            y108 = FindMax(y38);
            y109 = Retrieve(y108);
            y110 = print32(y109);
            y111 = testtree_istr8();
            y112 = prints(y111);
            y37 = 0;
            return y37;
  label__BB14:
            y95 = y40;
            y95 = y95 - 50;
            y96 = y40;
            y98 = y40;
            y96 = y96 | 50;
            y98 = y98 & 50;
            y96 = y96 - y98;
            y97 = y95;
            y99 = y95;
            y97 = y97 | y40;
            y99 = y99 & y40;
            y97 = y97 - y99;
            y96 = y96 & y97;
            y97 = y95;
            y100 = y95;
            y97 = y97 | y96;
            y100 = y100 & y96;
            y97 = y97 - y100;
            y97 = y97 >> 31;
            if (y97) goto label__BB12;
            y101 = testtree_istr6();
            y102 = prints(y101);
            y103 = FindMin(y38);
            y104 = Retrieve(y103);
            y105 = print32(y104);
            y106 = testtree_istr7();
            y107 = prints(y106);
            y108 = FindMax(y38);
            y109 = Retrieve(y108);
            y110 = print32(y109);
            y111 = testtree_istr8();
            y112 = prints(y111);
            y37 = 0;
            return y37;
  label__BB15:
            y52 = 0;
            if (y52) goto label__BB3;
            y53 = Retrieve(y39);
            y54 = y53 == y40;
            if (y54) goto label__BB4;
            y55 = testtree_istr0();
            y56 = prints(y55);
            y57 = print32(y40);
            y58 = testtree_istr1();
            y59 = prints(y58);
            y40 = y40 + 1;
            y60 = y40;
            y60 = y60 - 50;
            y61 = y40;
            y63 = y40;
            y61 = y61 | 50;
            y63 = y63 & 50;
            y61 = y61 - y63;
            y62 = y60;
            y64 = y60;
            y62 = y62 | y40;
            y64 = y64 & y40;
            y62 = y62 - y64;
            y61 = y61 & y62;
            y62 = y60;
            y65 = y60;
            y62 = y62 | y61;
            y65 = y65 & y61;
            y62 = y62 - y65;
            y62 = y62 >> 31;
            if (y62) goto label__BB2;
            y40 = 0;
            goto label__BB7;
  label__BB16:
            if (y52) goto label__BB3;
            y53 = Retrieve(y39);
            y54 = y53 == y40;
            if (y54) goto label__BB4;
            y55 = testtree_istr0();
            y56 = prints(y55);
            y57 = print32(y40);
            y58 = testtree_istr1();
            y59 = prints(y58);
            y40 = y40 + 1;
            y60 = y40;
            y60 = y60 - 50;
            y61 = y40;
            y63 = y40;
            y61 = y61 | 50;
            y63 = y63 & 50;
            y61 = y61 - y63;
            y62 = y60;
            y64 = y60;
            y62 = y62 | y40;
            y64 = y64 & y40;
            y62 = y62 - y64;
            y61 = y61 & y62;
            y62 = y60;
            y65 = y60;
            y62 = y62 | y61;
            y65 = y65 & y61;
            y62 = y62 - y65;
            y62 = y62 >> 31;
            if (y62) goto label__BB2;
            y40 = 0;
            goto label__BB7;
  label__BB17:
            y73 = 0;
            if (y73) goto label__BB9;
            y74 = Retrieve(y39);
            y75 = y74 == y40;
            if (y75) goto label__BB10;
            y76 = testtree_istr2();
            y77 = prints(y76);
            y78 = print32(y40);
            y79 = testtree_istr3();
            y80 = prints(y79);
            y81 = y40;
            y81 = y81 + 2;
            y40 = y81;
            y82 = y40;
            y82 = y82 - 50;
            y83 = y40;
            y85 = y40;
            y83 = y83 | 50;
            y85 = y85 & 50;
            y83 = y83 - y85;
            y84 = y82;
            y86 = y82;
            y84 = y84 | y40;
            y86 = y86 & y40;
            y84 = y84 - y86;
            y83 = y83 & y84;
            y84 = y82;
            y87 = y82;
            y84 = y84 | y83;
            y87 = y87 & y83;
            y84 = y84 - y87;
            y84 = y84 >> 31;
            if (y84) goto label__BB8;
            y40 = 0;
            goto label__BB14;
  label__BB18:
            if (y73) goto label__BB9;
            y74 = Retrieve(y39);
            y75 = y74 == y40;
            if (y75) goto label__BB10;
            y76 = testtree_istr2();
            y77 = prints(y76);
            y78 = print32(y40);
            y79 = testtree_istr3();
            y80 = prints(y79);
            y81 = y40;
            y81 = y81 + 2;
            y40 = y81;
            y82 = y40;
            y82 = y82 - 50;
            y83 = y40;
            y85 = y40;
            y83 = y83 | 50;
            y85 = y85 & 50;
            y83 = y83 - y85;
            y84 = y82;
            y86 = y82;
            y84 = y84 | y40;
            y86 = y86 & y40;
            y84 = y84 - y86;
            y83 = y83 & y84;
            y84 = y82;
            y87 = y82;
            y84 = y84 | y83;
            y87 = y87 & y83;
            y84 = y84 - y87;
            y84 = y84 >> 31;
            if (y84) goto label__BB8;
            y40 = 0;
            goto label__BB14;
  label__BB19:
            y88 = 0;
            if (y88) goto label__BB13;
            y89 = testtree_istr4();
            y90 = prints(y89);
            y91 = print32(y40);
            y92 = testtree_istr5();
            y93 = prints(y92);
            y94 = y40;
            y94 = y94 + 2;
            y40 = y94;
            y95 = y40;
            y95 = y95 - 50;
            y96 = y40;
            y98 = y40;
            y96 = y96 | 50;
            y98 = y98 & 50;
            y96 = y96 - y98;
            y97 = y95;
            y99 = y95;
            y97 = y97 | y40;
            y99 = y99 & y40;
            y97 = y97 - y99;
            y96 = y96 & y97;
            y97 = y95;
            y100 = y95;
            y97 = y97 | y96;
            y100 = y100 & y96;
            y97 = y97 - y100;
            y97 = y97 >> 31;
            if (y97) goto label__BB12;
            y101 = testtree_istr6();
            y102 = prints(y101);
            y103 = FindMin(y38);
            y104 = Retrieve(y103);
            y105 = print32(y104);
            y106 = testtree_istr7();
            y107 = prints(y106);
            y108 = FindMax(y38);
            y109 = Retrieve(y108);
            y110 = print32(y109);
            y111 = testtree_istr8();
            y112 = prints(y111);
            y37 = 0;
            return y37;
  label__BB2:
            y39 = Find(y40,y38);
            if (y39) goto label__BB15;
            y52 = 1;
            goto label__BB16;
  label__BB20:
            if (y88) goto label__BB13;
            y89 = testtree_istr4();
            y90 = prints(y89);
            y91 = print32(y40);
            y92 = testtree_istr5();
            y93 = prints(y92);
            y94 = y40;
            y94 = y94 + 2;
            y40 = y94;
            y95 = y40;
            y95 = y95 - 50;
            y96 = y40;
            y98 = y40;
            y96 = y96 | 50;
            y98 = y98 & 50;
            y96 = y96 - y98;
            y97 = y95;
            y99 = y95;
            y97 = y97 | y40;
            y99 = y99 & y40;
            y97 = y97 - y99;
            y96 = y96 & y97;
            y97 = y95;
            y100 = y95;
            y97 = y97 | y96;
            y100 = y100 & y96;
            y97 = y97 - y100;
            y97 = y97 >> 31;
            if (y97) goto label__BB12;
            y101 = testtree_istr6();
            y102 = prints(y101);
            y103 = FindMin(y38);
            y104 = Retrieve(y103);
            y105 = print32(y104);
            y106 = testtree_istr7();
            y107 = prints(y106);
            y108 = FindMax(y38);
            y109 = Retrieve(y108);
            y110 = print32(y109);
            y111 = testtree_istr8();
            y112 = prints(y111);
            y37 = 0;
            return y37;
  label__BB3:
            y55 = testtree_istr0();
            y56 = prints(y55);
            y57 = print32(y40);
            y58 = testtree_istr1();
            y59 = prints(y58);
            y40 = y40 + 1;
            y60 = y40;
            y60 = y60 - 50;
            y61 = y40;
            y63 = y40;
            y61 = y61 | 50;
            y63 = y63 & 50;
            y61 = y61 - y63;
            y62 = y60;
            y64 = y60;
            y62 = y62 | y40;
            y64 = y64 & y40;
            y62 = y62 - y64;
            y61 = y61 & y62;
            y62 = y60;
            y65 = y60;
            y62 = y62 | y61;
            y65 = y65 & y61;
            y62 = y62 - y65;
            y62 = y62 >> 31;
            if (y62) goto label__BB2;
            y40 = 0;
            goto label__BB7;
  label__BB4:
            y40 = y40 + 1;
            y60 = y40;
            y60 = y60 - 50;
            y61 = y40;
            y63 = y40;
            y61 = y61 | 50;
            y63 = y63 & 50;
            y61 = y61 - y63;
            y62 = y60;
            y64 = y60;
            y62 = y62 | y40;
            y64 = y64 & y40;
            y62 = y62 - y64;
            y61 = y61 & y62;
            y62 = y60;
            y65 = y60;
            y62 = y62 | y61;
            y65 = y65 & y61;
            y62 = y62 - y65;
            y62 = y62 >> 31;
            if (y62) goto label__BB2;
            y40 = 0;
            goto label__BB7;
  label__BB5:
            y60 = y40;
            y60 = y60 - 50;
            y61 = y40;
            y63 = y40;
            y61 = y61 | 50;
            y63 = y63 & 50;
            y61 = y61 - y63;
            y62 = y60;
            y64 = y60;
            y62 = y62 | y40;
            y64 = y64 & y40;
            y62 = y62 - y64;
            y61 = y61 & y62;
            y62 = y60;
            y65 = y60;
            y62 = y62 | y61;
            y65 = y65 & y61;
            y62 = y62 - y65;
            y62 = y62 >> 31;
            if (y62) goto label__BB2;
            y40 = 0;
            goto label__BB7;
  label__BB6:
            y38 = Delete(y40,y38);
            y66 = y40;
            y66 = y66 + 2;
            y40 = y66;
            y67 = y40;
            y67 = y67 - 50;
            y68 = y40;
            y70 = y40;
            y68 = y68 | 50;
            y70 = y70 & 50;
            y68 = y68 - y70;
            y69 = y67;
            y71 = y67;
            y69 = y69 | y40;
            y71 = y71 & y40;
            y69 = y69 - y71;
            y68 = y68 & y69;
            y69 = y67;
            y72 = y67;
            y69 = y69 | y68;
            y72 = y72 & y68;
            y69 = y69 - y72;
            y69 = y69 >> 31;
            if (y69) goto label__BB6;
            y40 = 1;
            goto label__BB11;
  label__BB7:
            y67 = y40;
            y67 = y67 - 50;
            y68 = y40;
            y70 = y40;
            y68 = y68 | 50;
            y70 = y70 & 50;
            y68 = y68 - y70;
            y69 = y67;
            y71 = y67;
            y69 = y69 | y40;
            y71 = y71 & y40;
            y69 = y69 - y71;
            y68 = y68 & y69;
            y69 = y67;
            y72 = y67;
            y69 = y69 | y68;
            y72 = y72 & y68;
            y69 = y69 - y72;
            y69 = y69 >> 31;
            if (y69) goto label__BB6;
            y40 = 1;
            goto label__BB11;
  label__BB8:
            y39 = Find(y40,y38);
            if (y39) goto label__BB17;
            y73 = 1;
            goto label__BB18;
  label__BB9:
            y76 = testtree_istr2();
            y77 = prints(y76);
            y78 = print32(y40);
            y79 = testtree_istr3();
            y80 = prints(y79);
            y81 = y40;
            y81 = y81 + 2;
            y40 = y81;
            y82 = y40;
            y82 = y82 - 50;
            y83 = y40;
            y85 = y40;
            y83 = y83 | 50;
            y85 = y85 & 50;
            y83 = y83 - y85;
            y84 = y82;
            y86 = y82;
            y84 = y84 | y40;
            y86 = y86 & y40;
            y84 = y84 - y86;
            y83 = y83 & y84;
            y84 = y82;
            y87 = y82;
            y84 = y84 | y83;
            y87 = y87 & y83;
            y84 = y84 - y87;
            y84 = y84 >> 31;
            if (y84) goto label__BB8;
            y40 = 0;
            goto label__BB14;
}
char* testtree_istr8() {
  char* y33;
  int y34;
  char* y35;
  char y36;
  label__BB000:
            y34 = 2;
            y33 = (char*) malloc((sizeof(char)) * y34 * 1);
            y35 = y33;
            y36 = 10;
            y35[0] = y36;
            y35 = y35 + 1;
            y36 = 0;
            y35[0] = y36;
            return y33;
}
char* testtree_istr7() {
  char* y29;
  int y30;
  char* y31;
  char y32;
  label__BB000:
            y30 = 10;
            y29 = (char*) malloc((sizeof(char)) * y30 * 1);
            y31 = y29;
            y32 = 44;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 32;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 77;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 97;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 120;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 32;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 105;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 115;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 32;
            y31[0] = y32;
            y31 = y31 + 1;
            y32 = 0;
            y31[0] = y32;
            return y29;
}
char* testtree_istr6() {
  char* y25;
  int y26;
  char* y27;
  char y28;
  label__BB000:
            y26 = 8;
            y25 = (char*) malloc((sizeof(char)) * y26 * 1);
            y27 = y25;
            y28 = 77;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 105;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 110;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 32;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 105;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 115;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 32;
            y27[0] = y28;
            y27 = y27 + 1;
            y28 = 0;
            y27[0] = y28;
            return y25;
}
char* testtree_istr5() {
  char* y21;
  int y22;
  char* y23;
  char y24;
  label__BB000:
            y22 = 2;
            y21 = (char*) malloc((sizeof(char)) * y22 * 1);
            y23 = y21;
            y24 = 10;
            y23[0] = y24;
            y23 = y23 + 1;
            y24 = 0;
            y23[0] = y24;
            return y21;
}
char* testtree_istr4() {
  char* y17;
  int y18;
  char* y19;
  char y20;
  label__BB000:
            y18 = 10;
            y17 = (char*) malloc((sizeof(char)) * y18 * 1);
            y19 = y17;
            y20 = 69;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 114;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 114;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 111;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 114;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 32;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 97;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 116;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 32;
            y19[0] = y20;
            y19 = y19 + 1;
            y20 = 0;
            y19[0] = y20;
            return y17;
}
char* testtree_istr3() {
  char* y13;
  int y14;
  char* y15;
  char y16;
  label__BB000:
            y14 = 2;
            y13 = (char*) malloc((sizeof(char)) * y14 * 1);
            y15 = y13;
            y16 = 10;
            y15[0] = y16;
            y15 = y15 + 1;
            y16 = 0;
            y15[0] = y16;
            return y13;
}
char* testtree_istr2() {
  char* y9;
  int y10;
  char* y11;
  char y12;
  label__BB000:
            y10 = 10;
            y9 = (char*) malloc((sizeof(char)) * y10 * 1);
            y11 = y9;
            y12 = 69;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 114;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 114;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 111;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 114;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 32;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 97;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 116;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 32;
            y11[0] = y12;
            y11 = y11 + 1;
            y12 = 0;
            y11[0] = y12;
            return y9;
}
char* testtree_istr1() {
  char* y5;
  int y6;
  char* y7;
  char y8;
  label__BB000:
            y6 = 2;
            y5 = (char*) malloc((sizeof(char)) * y6 * 1);
            y7 = y5;
            y8 = 10;
            y7[0] = y8;
            y7 = y7 + 1;
            y8 = 0;
            y7[0] = y8;
            return y5;
}
char* testtree_istr0() {
  char* y1;
  int y2;
  char* y3;
  char y4;
  label__BB000:
            y2 = 10;
            y1 = (char*) malloc((sizeof(char)) * y2 * 1);
            y3 = y1;
            y4 = 69;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 114;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 114;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 111;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 114;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 32;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 97;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 116;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 32;
            y3[0] = y4;
            y3 = y3 + 1;
            y4 = 0;
            y3[0] = y4;
            return y1;
}
