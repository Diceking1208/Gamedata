#include "Re.h"

extern int level;
void UIChange()
{
	switch (level)
	{
		case 0: level0();
			break;
		case 1: level1();
			break;
		case 2: level2();
			break;
		case 3: level3();
			break;
		case 4: level4();
			break;
		case 5: level5();
			break;
		case 6: level6();
			break;
		case 7: level7();
			break;
		case 8: level8();
			break;
		case 9: level9();
			break;
		case 10: level10();
			break;
		case 11: level11();
			break;
		case 12: level12();
			break;
		case 13: level13();
			break;
		case 14: level14();
			break;
		case 15: level15();
			break;
		case 16: level16();
			break;
		default:
			printf("");
			break;
	}
}