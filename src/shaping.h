// This file was generated from ArabicShaping.txt from the Unicode Character Database
// TODO(s) write a script that does this automatically, instead of a series of Edits

enum joiningType {
	R = 1,
	L = 2,
	D = 3,
	C = 7,
	U = 0
};

typedef struct {
	wchar_t isolated;
	wchar_t final;
	wchar_t medial;
	wchar_t initial;
} arGlyph;

#define joinTableOffset L'؀'

arGlyph arConv[] = {
	[0x0627 - joinTableOffset] = {0xFE8D, 0xFE8E, 0xFE8E, 0xFE8D},
	[0x0628 - joinTableOffset] = {0xFE8F, 0xFE90, 0xFE92, 0xFE91},
	[0x062A - joinTableOffset] = {0xFE95, 0xFE96, 0xFE98, 0xFE97},
	[0x062B - joinTableOffset] = {0xFE99, 0xFE9A, 0xFE9C, 0xFE9B},
	[0x062C - joinTableOffset] = {0xFE9D, 0xFE9E, 0xFEA0, 0xFE9F},
	[0x062D - joinTableOffset] = {0xFEA1, 0xFEA2, 0xFEA4, 0xFEA3},
	[0x062E - joinTableOffset] = {0xFEA5, 0xFEA6, 0xFEA8, 0xFEA7},
	[0x062F - joinTableOffset] = {0xFEA9, 0xFEAA, 0xFEAA, 0xFEA9},
	[0x0630 - joinTableOffset] = {0xFEAB, 0xFEAC, 0xFEAC, 0xFEAB},
	[0x0631 - joinTableOffset] = {0xFEAD, 0xFEAE, 0xFEAE, 0xFEAD},
	[0x0632 - joinTableOffset] = {0xFEAF, 0xFEB0, 0xFEB0, 0xFEAF},
	[0x0633 - joinTableOffset] = {0xFEB1, 0xFEB2, 0xFEB4, 0xFEB3},
	[0x0634 - joinTableOffset] = {0xFEB5, 0xFEB6, 0xFEB8, 0xFEB7},
	[0x0635 - joinTableOffset] = {0xFEB9, 0xFEBA, 0xFEBC, 0xFEBB},
	[0x0636 - joinTableOffset] = {0xFEBD, 0xFEBE, 0xFEC0, 0xFEBF},
	[0x0637 - joinTableOffset] = {0xFEC1, 0xFEC2, 0xFEC4, 0xFEC3},
	[0x0638 - joinTableOffset] = {0xFEC5, 0xFEC6, 0xFEC8, 0xFEC7},
	[0x0639 - joinTableOffset] = {0xFEC9, 0xFECA, 0xFECC, 0xFECB},
	[0x063A - joinTableOffset] = {0xFECD, 0xFECE, 0xFED0, 0xFECF},
	[0x0641 - joinTableOffset] = {0xFED1, 0xFED2, 0xFED4, 0xFED3},
	[0x0642 - joinTableOffset] = {0xFED5, 0xFED6, 0xFED8, 0xFED7},
	[0x0643 - joinTableOffset] = {0xFED9, 0xFEDA, 0xFEDC, 0xFEDB},
	[0x0644 - joinTableOffset] = {0xFEDD, 0xFEDE, 0xFEE0, 0xFEDF},
	[0x0645 - joinTableOffset] = {0xFEE1, 0xFEE2, 0xFEE4, 0xFEE3},
	[0x0646 - joinTableOffset] = {0xFEE5, 0xFEE6, 0xFEE8, 0xFEE7},
	[0x0647 - joinTableOffset] = {0xFEE9, 0xFEEA, 0xFEEC, 0xFEEB},
	[0x0648 - joinTableOffset] = {0xFEED, 0xFEEE, 0xFEEE, 0xFEED},
	[0x064A - joinTableOffset] = {0xFEF1, 0xFEF2, 0xFEF4, 0xFEF3},
	[0x0622 - joinTableOffset] = {0xFE81, 0xFE82, 0xFE82, 0xFE81},
	[0x0629 - joinTableOffset] = {0xFE93, 0xFE94, 0xFE94, 0xFE93},
	[0x0649 - joinTableOffset] = {0xFEEF, 0xFEF0, 0xFEF0, 0xFEEF},
};

enum joiningType joinTable[] = {
	[0x0600 - joinTableOffset] = U,
	[0x0601 - joinTableOffset] = U,
	[0x0602 - joinTableOffset] = U,
	[0x0603 - joinTableOffset] = U,
	[0x0604 - joinTableOffset] = U,
	[0x0608 - joinTableOffset] = U,
	[0x060B - joinTableOffset] = U,
	[0x0620 - joinTableOffset] = D,
	[0x0621 - joinTableOffset] = U,
	[0x0622 - joinTableOffset] = R,
	[0x0623 - joinTableOffset] = R,
	[0x0624 - joinTableOffset] = R,
	[0x0625 - joinTableOffset] = R,
	[0x0626 - joinTableOffset] = D,
	[0x0627 - joinTableOffset] = R,
	[0x0628 - joinTableOffset] = D,
	[0x0629 - joinTableOffset] = R,
	[0x062A - joinTableOffset] = D,
	[0x062B - joinTableOffset] = D,
	[0x062C - joinTableOffset] = D,
	[0x062D - joinTableOffset] = D,
	[0x062E - joinTableOffset] = D,
	[0x062F - joinTableOffset] = R,
	[0x0630 - joinTableOffset] = R,
	[0x0631 - joinTableOffset] = R,
	[0x0632 - joinTableOffset] = R,
	[0x0633 - joinTableOffset] = D,
	[0x0634 - joinTableOffset] = D,
	[0x0635 - joinTableOffset] = D,
	[0x0636 - joinTableOffset] = D,
	[0x0637 - joinTableOffset] = D,
	[0x0638 - joinTableOffset] = D,
	[0x0639 - joinTableOffset] = D,
	[0x063A - joinTableOffset] = D,
	[0x063B - joinTableOffset] = D,
	[0x063C - joinTableOffset] = D,
	[0x063D - joinTableOffset] = D,
	[0x063E - joinTableOffset] = D,
	[0x063F - joinTableOffset] = D,
	[0x0640 - joinTableOffset] = C,
	[0x0641 - joinTableOffset] = D,
	[0x0642 - joinTableOffset] = D,
	[0x0643 - joinTableOffset] = D,
	[0x0644 - joinTableOffset] = D,
	[0x0645 - joinTableOffset] = D,
	[0x0646 - joinTableOffset] = D,
	[0x0647 - joinTableOffset] = D,
	[0x0648 - joinTableOffset] = R,
	[0x0649 - joinTableOffset] = D,
	[0x064A - joinTableOffset] = D,
	[0x066E - joinTableOffset] = D,
	[0x066F - joinTableOffset] = D,
	[0x0671 - joinTableOffset] = R,
	[0x0672 - joinTableOffset] = R,
	[0x0673 - joinTableOffset] = R,
	[0x0674 - joinTableOffset] = U,
	[0x0675 - joinTableOffset] = R,
	[0x0676 - joinTableOffset] = R,
	[0x0677 - joinTableOffset] = R,
	[0x0678 - joinTableOffset] = D,
	[0x0679 - joinTableOffset] = D,
	[0x067A - joinTableOffset] = D,
	[0x067B - joinTableOffset] = D,
	[0x067C - joinTableOffset] = D,
	[0x067D - joinTableOffset] = D,
	[0x067E - joinTableOffset] = D,
	[0x067F - joinTableOffset] = D,
	[0x0680 - joinTableOffset] = D,
	[0x0681 - joinTableOffset] = D,
	[0x0682 - joinTableOffset] = D,
	[0x0683 - joinTableOffset] = D,
	[0x0684 - joinTableOffset] = D,
	[0x0685 - joinTableOffset] = D,
	[0x0686 - joinTableOffset] = D,
	[0x0687 - joinTableOffset] = D,
	[0x0688 - joinTableOffset] = R,
	[0x0689 - joinTableOffset] = R,
	[0x068A - joinTableOffset] = R,
	[0x068B - joinTableOffset] = R,
	[0x068C - joinTableOffset] = R,
	[0x068D - joinTableOffset] = R,
	[0x068E - joinTableOffset] = R,
	[0x068F - joinTableOffset] = R,
	[0x0690 - joinTableOffset] = R,
	[0x0691 - joinTableOffset] = R,
	[0x0692 - joinTableOffset] = R,
	[0x0693 - joinTableOffset] = R,
	[0x0694 - joinTableOffset] = R,
	[0x0695 - joinTableOffset] = R,
	[0x0696 - joinTableOffset] = R,
	[0x0697 - joinTableOffset] = R,
	[0x0698 - joinTableOffset] = R,
	[0x0699 - joinTableOffset] = R,
	[0x069A - joinTableOffset] = D,
	[0x069B - joinTableOffset] = D,
	[0x069C - joinTableOffset] = D,
	[0x069D - joinTableOffset] = D,
	[0x069E - joinTableOffset] = D,
	[0x069F - joinTableOffset] = D,
	[0x06A0 - joinTableOffset] = D,
	[0x06A1 - joinTableOffset] = D,
	[0x06A2 - joinTableOffset] = D,
	[0x06A3 - joinTableOffset] = D,
	[0x06A4 - joinTableOffset] = D,
	[0x06A5 - joinTableOffset] = D,
	[0x06A6 - joinTableOffset] = D,
	[0x06A7 - joinTableOffset] = D,
	[0x06A8 - joinTableOffset] = D,
	[0x06A9 - joinTableOffset] = D,
	[0x06AA - joinTableOffset] = D,
	[0x06AB - joinTableOffset] = D,
	[0x06AC - joinTableOffset] = D,
	[0x06AD - joinTableOffset] = D,
	[0x06AE - joinTableOffset] = D,
	[0x06AF - joinTableOffset] = D,
	[0x06B0 - joinTableOffset] = D,
	[0x06B1 - joinTableOffset] = D,
	[0x06B2 - joinTableOffset] = D,
	[0x06B3 - joinTableOffset] = D,
	[0x06B4 - joinTableOffset] = D,
	[0x06B5 - joinTableOffset] = D,
	[0x06B6 - joinTableOffset] = D,
	[0x06B7 - joinTableOffset] = D,
	[0x06B8 - joinTableOffset] = D,
	[0x06B9 - joinTableOffset] = D,
	[0x06BA - joinTableOffset] = D,
	[0x06BB - joinTableOffset] = D,
	[0x06BC - joinTableOffset] = D,
	[0x06BD - joinTableOffset] = D,
	[0x06BE - joinTableOffset] = D,
	[0x06BF - joinTableOffset] = D,
	[0x06C0 - joinTableOffset] = R,
	[0x06C1 - joinTableOffset] = D,
	[0x06C2 - joinTableOffset] = D,
	[0x06C3 - joinTableOffset] = R,
	[0x06C4 - joinTableOffset] = R,
	[0x06C5 - joinTableOffset] = R,
	[0x06C6 - joinTableOffset] = R,
	[0x06C7 - joinTableOffset] = R,
	[0x06C8 - joinTableOffset] = R,
	[0x06C9 - joinTableOffset] = R,
	[0x06CA - joinTableOffset] = R,
	[0x06CB - joinTableOffset] = R,
	[0x06CC - joinTableOffset] = D,
	[0x06CD - joinTableOffset] = R,
	[0x06CE - joinTableOffset] = D,
	[0x06CF - joinTableOffset] = R,
	[0x06D0 - joinTableOffset] = D,
	[0x06D1 - joinTableOffset] = D,
	[0x06D2 - joinTableOffset] = R,
	[0x06D3 - joinTableOffset] = R,
	[0x06D5 - joinTableOffset] = R,
	[0x06DD - joinTableOffset] = U,
	[0x06EE - joinTableOffset] = R,
	[0x06EF - joinTableOffset] = R,
	[0x06FA - joinTableOffset] = D,
	[0x06FB - joinTableOffset] = D,
	[0x06FC - joinTableOffset] = D,
	[0x06FF - joinTableOffset] = D,
};
