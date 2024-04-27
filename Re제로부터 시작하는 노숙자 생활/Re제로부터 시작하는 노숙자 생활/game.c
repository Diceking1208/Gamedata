#define _CRT_SECURE_NO_WARNINGS  // sprintf_s ÇÔ¼ö¸¦ »ç¿ëÇÏ±â À§ÇØ °æ°í ¹«½Ã
#include <stdio.h>
#include <stdlib.h>
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
int buyMoney = 0;                       //°¡±¸ °¡°Ý
=======
#include <conio.h>
<<<<<<< HEAD
#include <stdbool.h>

int userid=0;
int Isgame = 1;
int isTry = 0;                          // °­È­¸¦ ÇÒ °ÍÀÎÁö ¼±ÅÃ
int level = 0;                          // ÇöÀç ¹«±âÀÇ ·¹º§
int randNum = 0;                        // ·£´ý°ªÀ» ÀúÀå
int Num = 100;                          // È®·ü ¼ýÀÚ
int furnitureNum = 0;                   // °¡±¸ ¹øÈ£
int furnitureBuy = 0;
int buyMoney = 0;                       //°¡±¸ °¡°Ý
int CashBuy = 0;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
int buy = 0;                            // Áý ±¸¸Å
int sell = 0;                           // Áý ÆÈ¶§
int wallet = 50000;                     // ÇöÀç °¡Áö°í ÀÖ´Â ±Ý¾×
char* house[] = { "¼­¿ï¿ª ³ë¼÷","¹ÝÁöÇÏ¿ø·ë","¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë","Àû´çÇÑ ¿ø·ë","³ÐÀº ¿ø·ë","¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë","Ãþ°£¼ÒÀ½ Áö¸®´Â Åõ·ë","º¯±â Àß ¸·È÷´Â Åõ·ë","Àû´çÇÑ Åõ·ë","Â¼´Â Åõ·ë","°Á ¾ÆÆÄÆ®","±×³É ÁÁÀº ¾ÆÆÄÆ®","¸ÚÀÖ´Â ¾ÆÆÄÆ®","È£È­·Î¿î ¾ÆÆÄÆ®","¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ","½Ã±×´Ï¿¤" };
<<<<<<< HEAD
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// °¡±¸ ÆÇ¸ÅÇÒ¶§´Â Áý°ª º¯µ¿ÇÏ°Ô ÇÏ·Á°í ÀÌ·¸°Ô ÇÔ
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// °¡±¸ ÆÇ¸Å °¡´É ÆÇ´Ü ¿©ºÎ



=======
int buyMoney = 0;
int buy = 0;
int sell = 0;
int wallet = 50000;
char* house[] = { "¼­¿ï¿ª ³ë¼÷", "¹ÝÁöÇÏ¿ø·ë", "¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë", "Àû´çÇÑ ¿ø·ë", "³ÐÀº ¿ø·ë", "¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë", "Ãþ°£¼ÒÀ½ Áö¸®´Â Åõ·ë", "º¯±â Àß ¸·È÷´Â Åõ·ë", "Àû´çÇÑ Åõ·ë", "Â¼´Â Åõ·ë", "°Á ¾ÆÆÄÆ®", "±×³É ÁÁÀº ¾ÆÆÄÆ®", "¸ÚÀÖ´Â ¾ÆÆÄÆ®", "È£È­·Î¿î ¾ÆÆÄÆ®", "¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ", "½Ã±×´Ï¿¤" };
bool tnf = true; //¼º°ø¿©ºÎ
bool sellHome = false;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //¼±ÅÃÁö ÀúÀå


//µ¥ÀÌÅÍ ·Î±×¿¡ µé¾î°¡´Â º¯¼ö
/*
userid           À¯Àú ÇÐ¹ø
local_time °ü·Ã  ³¯Â¥,½Ã°£
wallet           ¼ÒÁö±Ý
nowlevel         ÇöÀç ´Ü°è
futurelevel      µµÀü ´Ü°è
tnf              °­È­ ¼º°ø¿©ºÎ
furnitureNum     ±¸¸ÅÇÑ °¡±¸
sell + buyMoney  ÇöÀç Áý°ª
sellHome         Áý ÆÇ¸Å ¿©ºÎ
*/

void PostUser()
{
    char command[2048];
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"ÇÃ·¹ÀÌ¾îID\\\":\\\"%d\\\",\\\"Á¢¼ÓÀÏ½Ã\\\":\\\"%d¿ù %dÀÏ\\\",\\\"¼ÒÁö±Ý\\\":%d,\\\"ÇöÀç´Ü°è\\\":%d,\\\"µµÀü´Ü°è\\\":%d,\\\"¼±ÅÃ\\\":\\\"%d\\\",\\\"¼º°ø¿©ºÎ\\\":%s,\\\"±¸¸Å°¡±¸\\\":\\\"%d\\\",\\\"Áý°ª\\\":%d,\\\"ÁýÆÇ¸Å\\\":%s,\\\"½Ã°£\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycby-ZPjp6MIQKeZ6Ao46uFZKZAOU9NqnvuWkw6yrnvbp2mQqy_42skd0nwDC2Mm0MDOBgg/exec",
        userid, local_time->tm_mon + 1, local_time->tm_mday + 1, wallet, nowlevel , futurelevel, choice, tnf ? "true" : "false", furnitureNum, sell + buyMoney, sellHome ? "true" : "false", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    system(command);
}
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52

int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));

<<<<<<< HEAD
    //login();
    while (Isgame == 1)
=======
    login();
    while (Isgame==1)
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
int logintime = 20240425;
int nowtime = 2009;
bool tnf = true;




=======
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)

    int isTry = 0;                          // °­È­¸¦ ÇÒ °ÍÀÎÁö ¼±ÅÃ
    int level = 0;                          // ÇöÀç ¹«±âÀÇ ·¹º§
    int randNum = 0;                        // ·£´ý°ªÀ» ÀúÀå
    int Num = 100;                          // È®·ü ¼ýÀÚ
    int furnitureNum = 0;                   // °¡±¸ ¹øÈ£
    int furnitureBuy = 0;
    int buyMoney = 0;                       //°¡±¸ °¡°Ý
    int buy = 0;                            // Áý ±¸¸Å
    int sell = 0;                           // Áý ÆÈ¶§
    int wallet = 50000;                     // ÇöÀç °¡Áö°í ÀÖ´Â ±Ý¾×
    char* house[] = { "¼­¿ï¿ª ³ë¼÷","¹ÝÁöÇÏ¿ø·ë","¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë","Àû´çÇÑ ¿ø·ë","³ÐÀº ¿ø·ë","¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë","Ãþ°£¼ÒÀ½ Áö¸®´Â Åõ·ë","º¯±â Àß ¸·È÷´Â Åõ·ë","Àû´çÇÑ Åõ·ë","Â¼´Â Åõ·ë","°Á ¾ÆÆÄÆ®","±×³É ÁÁÀº ¾ÆÆÄÆ®","¸ÚÀÖ´Â ¾ÆÆÄÆ®","È£È­·Î¿î ¾ÆÆÄÆ®","¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ","½Ã±×´Ï¿¤" };
    char* furniture[] = { "²É¹«´Ì º®Áö", "³ë¶õ»ö ¹Ù´Ú", "È²±Ýº¯±â", "¸»ÇÏ´ÂÀÇÀÚ","¼Ö·Î¹è°Ô", "¾Ë·Ï´Þ·Ï¿ÊÀå" };
    
int main(void)
{
     maingame();
}

<<<<<<< HEAD
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
                    sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                    break;
                case 2:
                    sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                    break;
                case 3:
                    sell += (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                    break;
                case 4:
                    sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                    break;
                default:
                    break;}
            }else sell += 10000; break;// ÀÌ°Å swtich ÇÔ¼ö µû·Î ¸¸µé¾î¼­ ³Ö¾ú´Âµ¥ °è¼Ó ¿À·ù³ª¼­ ÀÏÀÏÈ÷ ³ÖÀ½ ¤Ì¤Ì
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else  sell += 20000; break;
        case 3:  Num = 87; buy = 8000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else  sell += 25000; break;
        case 4:  Num = 85; buy = 10000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 30000; break;
        case 5:  Num = 83; buy = 12000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 35000; break;
        case 6:  Num = 80; buy = 14000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
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
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else sell += 45000; break;
        case 8:  Num = 75; buy = 18000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 50000; break;
        case 9:  Num = 73; buy = 20000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 55000; break;
        case 10: Num = 70; buy = 22000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 60000; break;
        case 11: Num = 68; buy = 24000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 65000; break;
        case 12: Num = 65; buy = 26000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        }else sell += 70000; break;
        case 13: Num = 63; buy = 28000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 75000; break;
        case 14: Num = 60; buy = 30000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 80000; break;
        case 15: Num = 58; buy = 33000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
                break;
            default:
                break;
            }
        } else sell += 85000; break;
        case 16: Num = 55; buy = 36000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ²É¹«´Ì º®ÁöÀÇ °¡°ÝÀº 5200 ¿ø
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ³ë¶õ»ö ¹Ù´ÚÀÇ °¡°ÝÀº 9700 ¿ø
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²±Ýº¯±âÀÇ °¡°ÝÀº 128000 ¿ø
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ¾Ë·Ï´Þ·Ï¿ÊÀåÀÇ °¡°ÝÀº 34000 ¿ø
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
=======
int BuyMoney()
{
    furnitureNum = rand() % 6;
    if (furniture[furnitureNum] = 0)
    {buyMoney = 5500;}
    else if (furniture[furnitureNum] = 0)
    {buyMoney = 25500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 32500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 4500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 9300;}
    else if (furniture[furnitureNum] = 0)
    {buyMoney = 7000;}
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
    return 0;
}
void SellFurniture(int furnitureNum)
{
    furnitureAvailable[furnitureNum] = false;
    printf("'%d'¹ø °¡±¸°¡ ÆÇ¸ÅµÇ¾ú½À´Ï´Ù.\n", furnitureNum + 1);
}

<<<<<<< HEAD
<<<<<<< HEAD


=======
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
void Store()
=======
int Store()
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
{
    system("@cls||clear");
    printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    printf("     ÇöÀç Áý : %s\n\n", house[level]);
    printf("        ÀÎÅ×¸®¾î »óÁ¡\n");
    printf("       < ¿À´ÃÀÇ ¾ÆÀÌÅÛ  >\n");
    printf("-------------------------------\n");
<<<<<<< HEAD
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
                printf("     3.È²±Ýº¯±â     (- 128,000 ¿ø)\n");
                break;
            case 3:
                printf("     4.¾Ë·Ï´Þ·Ï¿ÊÀå  (- 34,000 ¿ø)\n");
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
                printf("     3.È²±Ýº¯±â     (ÆÇ¸Å¿Ï·á)\n");
                break;
            case 3:
                printf("     4.¾Ë·Ï´Þ·Ï¿ÊÀå  (ÆÇ¸Å¿Ï·á)\n");
                break;
            }
        }
    }

    printf("     6.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
=======
    printf("     1.²É¹«´Ì º®Áö     (- 5200 ¿ø) \n");
    printf("     2.³ë¶õ»ö ¹Ù´Ú     (- 9700 ¿ø)\n");
    printf("     3.È²±Ýº¯±â     (- 128,000 ¿ø)\n");
    printf("     4.¾Ë·Ï´Þ·Ï¿ÊÀå  (- 34,000 ¿ø)\n");
=======
    BuyMoney();
    printf("     1.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     2.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     3.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     4.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
    printf("     5.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    printf("-------------------------------\n");
    printf("        ÀÔ·Â : ");
    scanf_s("%d", &furnitureBuy);

<<<<<<< HEAD
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
            printf("È²±Ýº¯±â¸¦ ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
            SellFurniture(2); // ¼¼ ¹øÂ° °¡±¸ ÆÇ¸Å ¿Ï·á
        }
        else {
            printf("ÀÌ¹Ì ÆÇ¸ÅµÈ °¡±¸ÀÔ´Ï´Ù.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            wallet -= 34000;
            printf("¾Ë·Ï´Þ·Ï¿ÊÀåÀ» ±¸¸ÅÇÏ¿´½À´Ï´Ù.\n");
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
=======
    if(furnitureBuy == 5)
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
    {
        maingame();
    }
    else if (furnitureBuy == 1 || furnitureBuy == 2 || furnitureBuy == 3 || furnitureBuy == 4)
    {
        wallet -= buyMoney;
        printf("%s ±¸¸Å°¡ ¿Ï·á µÇ¾ú½À´Ï´Ù.", furniture[furnitureBuy]);
        printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    }
    return 0;
}


int maingame()
<<<<<<< HEAD
{       
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
{
    srand((int)time(NULL));                 // ·£´ý ½Ãµå°ª ¼³Á¤

    while (1)
    {
        // È­¸é Á¤¸®
        system("@cls||clear");
        switch (level)
        {
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
        // È­¸é Á¤¸®
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
        system("@cls||clear");
        printf("     °¡Áø µ· : %d ¿ø\n", wallet);
        printf("     ÇöÀç Áý : %s\n", house[level]);
        printf(" ÁýÀ» °­È­ ÇÏ½Ã°Ú½À´Ï±î ? \n\n");
        printf("   < ¼º°øÈ®·ü : %d %% >\n", Num);
        printf("-------------------------------\n");
<<<<<<< HEAD
        printf("     1.Áý ±¸¸Å      (- %d ¿ø)\n",buy);
        printf("     2.°ÅÁö·Î »ì±â  (°ÔÀÓÁ¾·á)\n");
        printf("     3.Áý ÆÇ¸Å      (+ %d ¿ø)\n",sell);
=======
        printf("     1.Áý ±¸¸Å      (- %d ¿ø)\n", buy);
        printf("     2.°ÅÁö·Î »ì±â  (°ÔÀÓÁ¾·á)\n");
        printf("     3.Áý ÆÇ¸Å      (+ %d ¿ø)\n", sell);
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
<<<<<<< HEAD
        case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
            randNum = rand() % 100 + 1;
=======
            case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
                randNum = rand() % 100 + 1;
                choice = 1;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
            case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
                randNum = rand() % 100 + 1;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
        case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
            randNum = rand() % 100 + 1;
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)

            // ÃßÃâÇÑ ·£´ý °ªÀÌ ¼º°øÈ®·ü º¸´Ù ÀÛÀ¸¸é ¼º°ø
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ¼º°øÈ­¸é Ãâ·Â
                wallet -= buy;
                printf("\n\nÁö°© : %d ¿ø\n\n", wallet);
                printf("\033[0;32m************* SUCCESS *************\n\033[0m");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
<<<<<<< HEAD
                printf("************* SUCCESS *************\n");
                nowlevel = level+1;
                futurelevel = level + 2;
=======
                printf("\033[0;32m************* SUCCESS *************\n\033[0m");
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
                level++;
            }
            else
            {
<<<<<<< HEAD
=======
                sellHome = false;
                tnf = false;
                // ½ÇÆÐÈ­¸é Ãâ·Â
                wallet -= buy;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
<<<<<<< HEAD
                printf("         ¾Æ ¸ÁÇß³×...\n");
                printf("Áý '%s' À» ÀÒ¾ú½À´Ï´Ù.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
=======
                printf("         \033[0;31m¾Æ ¸ÁÇß³×...\n\033[0m");
                printf("Áý \033[0;31m'%s' \033[0mÀ» ÀÒ¾ú½À´Ï´Ù.\n", house[level]);
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
                level = 0;
                
<<<<<<< HEAD
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;
                }
            }
            break;
<<<<<<< HEAD
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
                choice = 2;
                // Æ÷±â¸¦ ÇÒ °æ¿ì ÇÁ·Î±×·¥ Á¾·á
                printf("\n         ¾î ³ª°¡~\n");
                Isgame = 0;
                return -1;
                break;

            case 3:
                choice = 3;
                sellHome = true;
                nowlevel = level + 1;      //ÇØ´ç ´Ü°è ·¹º§ ÀúÀå
                futurelevel = level + 2;
                tnf = false;               //Áý ÆÇ¸Å½Ã °­È­¼º°øÀº false°¡ µÊ.
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                wallet += sell;
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[level - 1]);
                level = 0;
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;// ÁýÆÈ¸é ´Ù½Ã °¡±¸ ÆÇ¸Å°¡´ÉÇÏ°Ô
                }
                sell = 0;
                break;
                
            case 4:
                choice = 4;
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
    printf("       id´Â ÇÐ¹øÀ» ÀÔ·ÂÇÏ¼¼¿ä. \n");
    printf("         °³¹ßÀÚ¸ðµå : 1234  \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input=0;
        case 1234:
            wallet = 999999999;
            printf(" ±Ý¾×Àº 999,999,999¿øÀ¸·Î ½ÃÀÛµË´Ï´Ù. \n");
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
=======
        case 2:
            // Æ÷±â¸¦ ÇÒ °æ¿ì ÇÁ·Î±×·¥ Á¾·á
            printf("\n         ¾î ³ª°¡~\n");
            return -1;
        case 3:
            wallet += sell;
            printf("\n\nÁö°© : %d ¿ø\n", wallet);
            printf("  %s  ->  %s    \n\n", house[level], house[0]);
            level = 0;
            break;
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)

        case 4:
            Store();
        }
<<<<<<< HEAD
}

>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
        // ÁøÇà»óÈ² È®ÀÎÀÌ ¿ëÀÌ ÇÏµµ·Ï ´ë±â
        printf("\n°è¼ÓÇÏ·Á¸é ¾Æ¹« Å°³ª ´©¸£½Ê½Ã¿À.\n");
        _getch();
    }
    return 0;
}
>>>>>>> parent of 0db0fee (í˜„ì§ˆ ì¶”ê°€)
