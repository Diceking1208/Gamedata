#define _CRT_SECURE_NO_WARNINGS  // sprintf_s ÇÔ¼ö¸¦ »ç¿ëÇÏ±â À§ÇØ °æ°í ¹«½Ã
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
<<<<<<< HEAD
#include <stdbool.h>
#define MAX_FURNITURE 4

int userid = 0;
int Isgame = 1;
int isTry = 0;
int level = 0;
int randNum = 0;
int Num = 100;
int furnitureNum = 0;
int furnitureBuy = 0;
<<<<<<< HEAD
int buyMoney = 0;                       //°¡±¸ °¡°İ
=======
#include <conio.h>
#include <stdbool.h>

int userid=0;
int Isgame = 1;
int isTry = 0;                          // °­È­¸¦ ÇÒ °ÍÀÎÁö ¼±ÅÃ
int level = 0;                          // ÇöÀç ¹«±âÀÇ ·¹º§
int randNum = 0;                        // ·£´ı°ªÀ» ÀúÀå
int Num = 100;                          // È®·ü ¼ıÀÚ
int furnitureNum = 0;                   // °¡±¸ ¹øÈ£
int furnitureBuy = 0;
int buyMoney = 0;                       //°¡±¸ °¡°İ
int CashBuy = 0;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
int buy = 0;                            // Áı ±¸¸Å
int sell = 0;                           // Áı ÆÈ¶§
int wallet = 50000;                     // ÇöÀç °¡Áö°í ÀÖ´Â ±İ¾×
char* house[] = { "¼­¿ï¿ª ³ë¼÷","¹İÁöÇÏ¿ø·ë","¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë","Àû´çÇÑ ¿ø·ë","³ĞÀº ¿ø·ë","¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë","Ãş°£¼ÒÀ½ Áö¸®´Â Åõ·ë","º¯±â Àß ¸·È÷´Â Åõ·ë","Àû´çÇÑ Åõ·ë","Â¼´Â Åõ·ë","°Á ¾ÆÆÄÆ®","±×³É ÁÁÀº ¾ÆÆÄÆ®","¸ÚÀÖ´Â ¾ÆÆÄÆ®","È£È­·Î¿î ¾ÆÆÄÆ®","¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ","½Ã±×´Ï¿¤" };
<<<<<<< HEAD
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// °¡±¸ ÆÇ¸ÅÇÒ¶§´Â Áı°ª º¯µ¿ÇÏ°Ô ÇÏ·Á°í ÀÌ·¸°Ô ÇÔ
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// °¡±¸ ÆÇ¸Å °¡´É ÆÇ´Ü ¿©ºÎ



=======
int buyMoney = 0;
int buy = 0;
int sell = 0;
int wallet = 50000;
char* house[] = { "¼­¿ï¿ª ³ë¼÷", "¹İÁöÇÏ¿ø·ë", "¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë", "Àû´çÇÑ ¿ø·ë", "³ĞÀº ¿ø·ë", "¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë", "Ãş°£¼ÒÀ½ Áö¸®´Â Åõ·ë", "º¯±â Àß ¸·È÷´Â Åõ·ë", "Àû´çÇÑ Åõ·ë", "Â¼´Â Åõ·ë", "°Á ¾ÆÆÄÆ®", "±×³É ÁÁÀº ¾ÆÆÄÆ®", "¸ÚÀÖ´Â ¾ÆÆÄÆ®", "È£È­·Î¿î ¾ÆÆÄÆ®", "¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ", "½Ã±×´Ï¿¤" };
bool tnf = true; //¼º°ø¿©ºÎ
bool sellHome = false;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;

//µ¥ÀÌÅÍ ·Î±×¿¡ µé¾î°¡´Â º¯¼ö
/*
userid           À¯Àú ÇĞ¹ø
local_time °ü·Ã  ³¯Â¥,½Ã°£
wallet           ¼ÒÁö±İ
nowlevel         ÇöÀç ´Ü°è
futurelevel      µµÀü ´Ü°è
tnf              °­È­ ¼º°ø¿©ºÎ
furnitureNum     ±¸¸ÅÇÑ °¡±¸
sell + buyMoney  ÇöÀç Áı°ª
sellHome         Áı ÆÇ¸Å ¿©ºÎ
*/

void PostUser()
{
    char command[2048];
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"ÇÃ·¹ÀÌ¾îID\\\":\\\"%d\\\",\\\"Á¢¼ÓÀÏ½Ã\\\":\\\"%d¿ù %dÀÏ\\\",\\\"¼ÒÁö±İ\\\":%d,\\\"ÇöÀç´Ü°è\\\":%d,\\\"µµÀü´Ü°è\\\":%d,\\\"¼º°ø¿©ºÎ\\\":%s,\\\"±¸¸Å°¡±¸\\\":\\\"%d\\\",\\\"Áı°ª\\\":%d,\\\"ÁıÆÇ¸Å\\\":%s,\\\"½Ã°£\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycbwQWUR_J5-boWCHJEFM48HQylhTUNfXdDgNFMs_mMaIIn3aodDP-nnAyJuQPXX5bNEI8g/exec",
        userid, local_time->tm_mon + 1, local_time->tm_mday + 1, wallet, nowlevel , futurelevel, tnf ? "true" : "false", furnitureNum, sell + buyMoney, sellHome ? "true" : "false", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    system(command);
}
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52

int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));

<<<<<<< HEAD
<<<<<<< HEAD
    //login();
    while (Isgame == 1)
=======
=======

>>>>>>> parent of 9eab5b8 (ê²Œì„ë°ì´í„°ëª… ìˆ˜ì •, ì„ íƒì§€ ì¶”ê°€ ë“±)
    login();
    while (Isgame==1)
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
int logintime = 20240425;
int nowtime = 2009;
bool tnf = true;





int main(void)
{
    srand((int)time(NULL));                 // ·£´ı ½Ãµå°ª ¼³Á¤

    //login();
    while (Isgame==1)
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    {
        // È­¸é Á¤¸®
        system("@cls||clear");
        switch (level)
        {
<<<<<<< HEAD
        case 0:  Num = 100; buy = 2000;  sell = 0;  break;
        case 1:  Num = 95; buy = 4000;
            if (furnitureBuy) {
                switch (furnitureBuy)
                {
                case 1:
                    sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                    break;
                case 2:
                    sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                    break;
                case 3:
                    sell += (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                    break;
                case 4:
                    sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                    break;
                default:
                    break;}
            }else sell += 10000; break;// ÀÌ°Å swtich ÇÔ¼ö µû·Î ¸¸µé¾î¼­ ³Ö¾ú´Âµ¥ °è¼Ó ¿À·ù³ª¼­ ÀÏÀÏÈ÷ ³ÖÀ½ ¤Ì¤Ì
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else  sell += 20000; break;
        case 3:  Num = 87; buy = 8000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else  sell += 25000; break;
        case 4:  Num = 85; buy = 10000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 30000; break;
        case 5:  Num = 83; buy = 12000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 35000; break;
        case 6:  Num = 80; buy = 14000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }
            else sell += 40000; break;
        case 7:  Num = 77; buy = 16000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else sell += 45000; break;
        case 8:  Num = 75; buy = 18000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 50000; break;
        case 9:  Num = 73; buy = 20000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 55000; break;
        case 10: Num = 70; buy = 22000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 60000; break;
        case 11: Num = 68; buy = 24000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 65000; break;
        case 12: Num = 65; buy = 26000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else sell += 70000; break;
        case 13: Num = 63; buy = 28000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 75000; break;
        case 14: Num = 60; buy = 30000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 80000; break;
        case 15: Num = 58; buy = 33000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 85000; break;
        case 16: Num = 55; buy = 36000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°İÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°İÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±İº¯±âÀÇ °¡°İÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Ş·Ï¿ÊÀåÀÇ °¡°İÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 90000; break;
        default: Num = 100; buy = 2000; sell += 0;     break;
        }
           
        maingame();
        printf("\n°è¼ÓÇÏ·Á¸é ¾Æ¹« Å°³ª ´©¸£½Ê½Ã¿À.\n");
        _getch();
=======
            case 0:  Num = 100; buy = 2000;  sell = 0;  break;
            case 1:  Num = 95; buy = 4000;  sell = 10000; break;
            case 2:  Num = 90; buy = 6000;  sell = 20000; break;
            case 3:  Num = 87; buy = 8000;  sell = 25000; break;
            case 4:  Num = 85; buy = 10000; sell = 30000; break;
            case 5:  Num = 83; buy = 12000; sell = 35000; break;
            case 6:  Num = 80; buy = 14000; sell = 40000; break;
            case 7:  Num = 77; buy = 16000; sell = 45000; break;
            case 8:  Num = 75; buy = 18000; sell = 50000; break;
            case 9:  Num = 73; buy = 20000; sell = 55000; break;
            case 10: Num = 70; buy = 22000; sell = 60000; break;
            case 11: Num = 68; buy = 24000; sell = 65000; break;
            case 12: Num = 65; buy = 26000; sell = 70000; break;
            case 13: Num = 63; buy = 28000; sell = 75000; break;
            case 14: Num = 60; buy = 30000; sell = 80000; break;
            case 15: Num = 58; buy = 33000; sell = 85000; break;
            case 16: Num = 55; buy = 36000; sell = 90000; break;
            default: Num = 100; buy = 2000; sell = 0;     break;
        }
        
         maingame();
         printf("\n°è¼ÓÇÏ·Á¸é ¾Æ¹« Å°³ª ´©¸£½Ê½Ã¿À.\n");
         _getch();
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    }
    return 0;
}
void SellFurniture(int furnitureNum)
{
    furnitureAvailable[furnitureNum] = false;
    printf("'%d'¹ø °¡±¸°¡ ÆÇ¸ÅµÇ¾ú½À´Ï´Ù.\n", furnitureNum + 1);
}

<<<<<<< HEAD


=======
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
void Store()
{
   system("@cls||clear");
    printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    printf("     ÇöÀç Áı : %s\n\n", house[level]);
    printf("        ÀÎÅ×¸®¾î »óÁ¡\n");
    printf("       < ¿À´ÃÀÇ ¾ÆÀÌÅÛ  >\n");
    printf("-------------------------------\n");
<<<<<<< HEAD

   
    for (int i = 0; i < MAX_FURNITURE; ++i) {
        if (furnitureAvailable[i]) {
            switch (i) {
            case 0:
                printf("     1.²É¹«´Ì º®Áö     (- 5200 ¿ø) \n");
                break;
            case 1:
                printf("     2.³ë¶õ»ö ¹Ù´Ú     (- 9700 ¿ø)\n");
                break;
            case 2:
                printf("     3.È²±İº¯±â     (- 128,000 ¿ø)\n");
                break;
            case 3:
                printf("     4.¾Ë·Ï´Ş·Ï¿ÊÀå  (- 34,000 ¿ø)\n");
                break;
            }
        }
        else {
            switch (i) {
            case 0:
                printf("     1.²É¹«´Ì º®Áö     (ÆÇ¸Å¿Ï·á)\n");
                break;
            case 1:
                printf("     2.³ë¶õ»ö ¹Ù´Ú     (ÆÇ¸Å¿Ï·á)\n");
                break;
            case 2:
                printf("     3.È²±İº¯±â     (ÆÇ¸Å¿Ï·á)\n");
                break;
            case 3:
                printf("     4.¾Ë·Ï´Ş·Ï¿ÊÀå  (ÆÇ¸Å¿Ï·á)\n");
                break;
            }
        }
    }

    printf("     6.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
=======
    printf("     1.²É¹«´Ì º®Áö     (- 5200 ¿ø) \n");
    printf("     2.³ë¶õ»ö ¹Ù´Ú     (- 9700 ¿ø)\n");
    printf("     3.È²±İº¯±â     (- 128,000 ¿ø)\n");
    printf("     4.¾Ë·Ï´Ş·Ï¿ÊÀå  (- 34,000 ¿ø)\n");
    printf("     5.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    printf("-------------------------------\n");
    printf("        ÀÔ·Â : ");
    scanf_s("%d", &furnitureBuy);

<<<<<<< HEAD
<<<<<<< HEAD
=======

>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
    switch (furnitureBuy)
    {
    case 1:
        if (furnitureAvailable[0]) {
            wallet -= 5200;
            printf("²É¹«´Ì º®Áö¸¦ ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
            SellFurniture(0); // Ã¹ ¹øÂ° °¡±¸ ÆÇ¸Å ¿Ï·á
           
        }
        else {
            printf("ÀÌ¹Ì ÆÇ¸ÅµÈ °¡±¸ÀÔ´Ï´Ù.\n");
        }
        break;
    case 2:
        if (furnitureAvailable[1]) {
            wallet -= 9700;
            printf("³ë¶õ»ö ¹Ù´ÚÀ» ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
            SellFurniture(1); // µÎ ¹øÂ° °¡±¸ ÆÇ¸Å ¿Ï·á
        }
        else {
            printf("ÀÌ¹Ì ÆÇ¸ÅµÈ °¡±¸ÀÔ´Ï´Ù.\n");
        }
        break;
    case 3:
        if (furnitureAvailable[2]) { //3¹øÂ° °¡±¸ ÆÇ¸Å
            wallet -= 128000;
            printf("È²±İº¯±â¸¦ ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
            SellFurniture(2); // ¼¼ ¹øÂ° °¡±¸ ÆÇ¸Å ¿Ï·á
        }
        else {
            printf("ÀÌ¹Ì ÆÇ¸ÅµÈ °¡±¸ÀÔ´Ï´Ù.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            wallet -= 34000;
            printf("¾Ë·Ï´Ş·Ï¿ÊÀåÀ» ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
            SellFurniture(3); // ³× ¹øÂ° °¡±¸ ÆÇ¸Å ¿Ï·á
        }
        else {
            printf("ÀÌ¹Ì ÆÇ¸ÅµÈ °¡±¸ÀÔ´Ï´Ù.\n");
        }
        break;
    case 5:
        break;
    default:
        maingame();
        break;
    }
}
int maingame()
{       
<<<<<<< HEAD
        
=======
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
    
    switch (furnitureBuy)
    {
        case 1:
            wallet -= 5200;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 2:
            wallet -= 9700;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 3:
            wallet -= 128000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 4:
            wallet -= 34000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 5:
            break;
        default:
            maingame();
            break;
    }
    return 0;
}

void Cash()
{
    system("@cls||clear");
    printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    printf("     ÇöÀç Áı : %s\n\n", house[level]);
    printf("          ÇöÁúÇÏ¼À\n");
    printf("       < °áÁ¦ ¾ÆÀÌÅÛ  >\n");
    printf("-------------------------------\n");
    printf("       °áÁ¦±İ¾×      °ÔÀÓ¸Ó´Ï \n");
    printf("     1. 4,900¿ø    (+ 5,000 ¿ø) \n");
    printf("     2. 9,900¿ø    (+ 10,000 ¿ø)\n");
    printf("     3. 14,000¿ø   (+ 12,800 ¿ø)\n");
    printf("     4. 35,000¿ø   (+ 32,500 ¿ø)\n");
    printf("     5. 65,000¿ø   (+ 65,000 ¿ø)\n ");
    printf("    6. 99,000¿ø   (+ 100,000¿ø)\n ");
    printf("    7.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
    printf("-------------------------------\n");
    printf("        ÀÔ·Â : ");
    scanf_s("%d", &CashBuy);

    switch (CashBuy)
    {
        case 1:
            wallet += 5000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 2:
            wallet += 10000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 3:
            wallet += 12800;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 4:
            wallet += 32500;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 5:
            wallet += 65000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 6:
            wallet += 100000;
            printf("±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.");
            printf("     °¡Áø µ· : %d ¿ø\n", wallet);
            break;
        case 7:
            break;
        default:
            maingame();
            break;
    }
    return 0;
}


int maingame()
{       
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
        system("@cls||clear");
        printf("     °¡Áø µ· : %d ¿ø\n", wallet);
        printf("     ÇöÀç Áı : %s\n", house[level]);
        printf(" ÁıÀ» °­È­ ÇÏ½Ã°Ú½À´Ï±î ? \n\n");
        printf("   < ¼º°øÈ®·ü : %d %% >\n", Num);
        printf("-------------------------------\n");
<<<<<<< HEAD
        printf("     1.Áı ±¸¸Å      (- %d ¿ø)\n",buy);
        printf("     2.°ÅÁö·Î »ì±â  (°ÔÀÓÁ¾·á)\n");
        printf("     3.Áı ÆÇ¸Å      (+ %d ¿ø)\n",sell);
=======
        printf("     1.Áı ±¸¸Å      (- %d ¿ø)\n", buy);
        printf("     2.ÇöÁúÇÏ±â      \n");
        printf("     3.Áı ÆÇ¸Å      (+ %d ¿ø)\n", sell);
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
        printf("     4.°¡±¸ ±¸¸Å     \n");
        printf("     5.ÀúÀåÇÏ±â     (Ã³À½ºÎÅÍ´Ù½Ã)\n");
        printf("-------------------------------\n");
        printf("        ÀÔ·Â : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
<<<<<<< HEAD
<<<<<<< HEAD
        case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
            randNum = rand() % 100 + 1;
=======
            case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
                randNum = rand() % 100 + 1;
<<<<<<< HEAD
                choice = 1;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
            case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
                randNum = rand() % 100 + 1;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
>>>>>>> parent of 9eab5b8 (ê²Œì„ë°ì´í„°ëª… ìˆ˜ì •, ì„ íƒì§€ ì¶”ê°€ ë“±)

            // ÃßÃâÇÑ ·£´ı °ªÀÌ ¼º°øÈ®·ü º¸´Ù ÀÛÀ¸¸é ¼º°ø
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ¼º°øÈ­¸é Ãâ·Â
                wallet -= buy;
                printf("\n\nÁö°© : %d ¿ø\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                nowlevel = level+1;
                futurelevel = level + 2;
                level++;
            }
            else
            {
<<<<<<< HEAD
=======
                sellHome = false;
                tnf = false;
                // ½ÇÆĞÈ­¸é Ãâ·Â
                wallet -= buy;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
                printf("         ¾Æ ¸ÁÇß³×...\n");
                printf("Áı '%s' À» ÀÒ¾ú½À´Ï´Ù.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
                level = 0;
                
<<<<<<< HEAD
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;
                }
            }
            break;
<<<<<<< HEAD

        case 2:
            // Æ÷±â¸¦ ÇÒ °æ¿ì ÇÁ·Î±×·¥ Á¾·á
            printf("\n         ¾î ³ª°¡~\n");
            Isgame = 0;
            return -1;
            break;

        case 3:
                //wallet += sell;
=======
            }
            break;

            case 2:
                // Æ÷±â¸¦ ÇÒ °æ¿ì ÇÁ·Î±×·¥ Á¾·á
                printf("\n         ¾î ³ª°¡~\n");
                Isgame = 0;
                return -1;
                break;

            case 3:
                sellHome = true;
                nowlevel = level + 1;      //ÇØ´ç ´Ü°è ·¹º§ ÀúÀå
                futurelevel = level + 2;
                tnf = false;               //Áı ÆÇ¸Å½Ã °­È­¼º°øÀº false°¡ µÊ.
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                wallet += sell;
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[level - 1]);
                level = 0;
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;// ÁıÆÈ¸é ´Ù½Ã °¡±¸ ÆÇ¸Å°¡´ÉÇÏ°Ô
                }
                sell = 0;
                break;
                
            case 4:
                Store();
                break;
        }
        PostUser();
}


int login()
{
    system("@cls||clear");
    printf("            ·Î ±× ÀÎ\n", wallet);
    printf("---------------------------------------\n\n");
    printf("       id´Â ÇĞ¹øÀ» ÀÔ·ÂÇÏ¼¼¿ä. \n");
    printf("         °³¹ßÀÚ¸ğµå : 1234  \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input=0;
        case 1234:
            wallet = 999999999;
            printf(" ±İ¾×Àº 999,999,999¿øÀ¸·Î ½ÃÀÛµË´Ï´Ù. \n");
            printf(" ½ÃÀÛÇÒ ·¹º§À» ÀÔ·ÂÇÏ¼¼¿ä :  ");
            scanf_s("%d", &input);
            level = input;
            break;
        default: level = 0;
         break;
    }
    return 0;

}
=======

            case 2:
                Cash();
                break;

            case 3:
                wallet += sell;
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[0]);
                level = 0;
                break;

            case 4:
                Store();
                break;
        }
}

>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
