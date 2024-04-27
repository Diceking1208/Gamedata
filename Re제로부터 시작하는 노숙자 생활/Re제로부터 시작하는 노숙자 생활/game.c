#define _CRT_SECURE_NO_WARNINGS  // sprintf_s ï¿½Ô¼ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Ï±ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
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
                    
char* house[] = { "ï¿½ï¿½ï¿½ï¿ª ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","Â¼ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½","ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®","ï¿½×³ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®","ï¿½ï¿½ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®","È£È­ï¿½Î¿ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®","ï¿½ï¿½ï¿½ï¿½ï¿½Ö´ï¿½ ï¿½Üµï¿½ï¿½ï¿½ï¿½ï¿½","ï¿½Ã±×´Ï¿ï¿½" };
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ï¿½Ò¶ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ï·ï¿½ï¿½ï¿½ ï¿½Ì·ï¿½ï¿½ï¿½ ï¿½ï¿½
=======
<<<<<<< HEAD
int buyMoney = 0;                       //°¡±¸ °¡°Ý
=======
#include <conio.h>
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
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ç´ï¿½ ï¿½ï¿½ï¿½ï¿½



int buyMoney = 0;
int buy = 0;
int sell = 0;
int wallet = 50000;
char* house[] = { "ï¿½ï¿½ï¿½ï¿ª ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "Â¼ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½", "ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®", "ï¿½×³ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®", "ï¿½ï¿½ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®", "È£È­ï¿½Î¿ï¿½ ï¿½ï¿½ï¿½ï¿½Æ®", "ï¿½ï¿½ï¿½ï¿½ï¿½Ö´ï¿½ ï¿½Üµï¿½ï¿½ï¿½ï¿½ï¿½", "ï¿½Ã±×´Ï¿ï¿½" };
bool tnf = true; //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
bool sellHome = false;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½




void PostUser()
{
    char command[2048];
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"ï¿½Ã·ï¿½ï¿½Ì¾ï¿½ID\\\":\\\"%d\\\",\\\"ï¿½ï¿½ï¿½ï¿½ï¿½Ï½ï¿½\\\":\\\"%dï¿½ï¿½ %dï¿½ï¿½\\\",\\\"ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\\\":%d,\\\"ï¿½ï¿½ï¿½ï¿½Ü°ï¿½\\\":%d,\\\"ï¿½ï¿½ï¿½ï¿½ï¿½Ü°ï¿½\\\":%d,\\\"ï¿½ï¿½ï¿½ï¿½\\\":\\\"%d\\\",\\\"ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\\\":%s,\\\"ï¿½ï¿½ï¿½Å°ï¿½ï¿½ï¿½\\\":\\\"%d\\\",\\\"ï¿½ï¿½ï¿½ï¿½\\\":%d,\\\"ï¿½ï¿½ï¿½Ç¸ï¿½\\\":%s,\\\"ï¿½Ã°ï¿½\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycby-ZPjp6MIQKeZ6Ao46uFZKZAOU9NqnvuWkw6yrnvbp2mQqy_42skd0nwDC2Mm0MDOBgg/exec",
        userid, local_time->tm_mon + 1, local_time->tm_mday + 1, wallet, nowlevel , futurelevel, choice, tnf ? "true" : "false", furnitureNum, sell + buyMoney, sellHome ? "true" : "false", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    system(command);
}

int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));

    login();
    while (Isgame==1)
<<<<<<< HEAD
=======
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
int logintime = 20240425;
int nowtime = 2009;
bool tnf = true;





int main(void)
{
    srand((int)time(NULL));                 // ·£´ý ½Ãµå°ª ¼³Á¤

    //login();
    while (Isgame==1)
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
    {
        // È­ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
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
                    sell += (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                    break;
                case 2:
                    sell += (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                    break;
                case 3:
                    sell += (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                    break;
                case 4:
                    sell += (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                    break;
                default:
                    break;}
            }else sell += 10000; break;// ï¿½Ì°ï¿½ swtich ï¿½Ô¼ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½î¼­ ï¿½Ö¾ï¿½ï¿½Âµï¿½ ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ì¤ï¿½
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else  sell += 20000; break;
        case 3:  Num = 87; buy = 8000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        }else  sell += 25000; break;
        case 4:  Num = 85; buy = 10000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 30000; break;
        case 5:  Num = 83; buy = 12000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 35000; break;
        case 6:  Num = 80; buy = 14000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
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
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        }else sell += 45000; break;
        case 8:  Num = 75; buy = 18000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 50000; break;
        case 9:  Num = 73; buy = 20000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 55000; break;
        case 10: Num = 70; buy = 22000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 60000; break;
        case 11: Num = 68; buy = 24000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 65000; break;
        case 12: Num = 65; buy = 26000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        }else sell += 70000; break;
        case 13: Num = 63; buy = 28000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 75000; break;
        case 14: Num = 60; buy = 30000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 80000; break;
        case 15: Num = 58; buy = 33000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 85000; break;
        case 16: Num = 55; buy = 36000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 5200 ï¿½ï¿½
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 9700 ï¿½ï¿½
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // È²ï¿½Ýºï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 128000 ï¿½ï¿½
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ 34000 ï¿½ï¿½
                break;
            default:
                break;
            }
        } else sell += 90000; break;
        default: Num = 100; buy = 2000; sell += 0;     break;
        }
           
        maingame();
        printf("\nï¿½ï¿½ï¿½ï¿½Ï·ï¿½ï¿½ï¿½ ï¿½Æ¹ï¿½ Å°ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ê½Ã¿ï¿½.\n");
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
    printf("'%d'ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ÅµÇ¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n", furnitureNum + 1);
}

<<<<<<< HEAD


=======
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
void Store()
{
<<<<<<< HEAD
    system("@cls||clear");
    printf("     ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ : %d ï¿½ï¿½\n", wallet);
    printf("     ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ : %s\n\n", house[level]);
    printf("        ï¿½ï¿½ï¿½×¸ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½\n");
    printf("       < ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½  >\n");
=======
   system("@cls||clear");
    printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    printf("     ÇöÀç Áý : %s\n\n", house[level]);
    printf("        ÀÎÅ×¸®¾î »óÁ¡\n");
    printf("       < ¿À´ÃÀÇ ¾ÆÀÌÅÛ  >\n");
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
    printf("-------------------------------\n");
<<<<<<< HEAD

   
    for (int i = 0; i < MAX_FURNITURE; ++i) {
        if (furnitureAvailable[i]) {
            switch (i) {
            case 0:
                printf("     1.ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½     (- 5200 ï¿½ï¿½) \n");
                break;
            case 1:
                printf("     2.ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½     (- 9700 ï¿½ï¿½)\n");
                break;
            case 2:
                printf("     3.È²ï¿½Ýºï¿½ï¿½ï¿½     (- 128,000 ï¿½ï¿½)\n");
                break;
            case 3:
                printf("     4.ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½  (- 34,000 ï¿½ï¿½)\n");
                break;
            }
        }
        else {
            switch (i) {
            case 0:
                printf("     1.ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½     (ï¿½Ç¸Å¿Ï·ï¿½)\n");
                break;
            case 1:
                printf("     2.ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½     (ï¿½Ç¸Å¿Ï·ï¿½)\n");
                break;
            case 2:
                printf("     3.È²ï¿½Ýºï¿½ï¿½ï¿½     (ï¿½Ç¸Å¿Ï·ï¿½)\n");
                break;
            case 3:
                printf("     4.ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½  (ï¿½Ç¸Å¿Ï·ï¿½)\n");
                break;
            }
        }
    }

<<<<<<< HEAD
    printf("     6.ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ°ï¿½ï¿½ï¿½ \n ");
=======
    printf("     6.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
=======
    printf("     1.²É¹«´Ì º®Áö     (- 5200 ¿ø) \n");
    printf("     2.³ë¶õ»ö ¹Ù´Ú     (- 9700 ¿ø)\n");
    printf("     3.È²±Ýº¯±â     (- 128,000 ¿ø)\n");
    printf("     4.¾Ë·Ï´Þ·Ï¿ÊÀå  (- 34,000 ¿ø)\n");
    printf("     5.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
    printf("-------------------------------\n");
    printf("        ï¿½Ô·ï¿½ : ");
    scanf_s("%d", &furnitureBuy);

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5

    switch (furnitureBuy)
    {
    case 1:
        if (furnitureAvailable[0]) {
            wallet -= 5200;
            printf("ï¿½É¹ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
            SellFurniture(0); // Ã¹ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ ï¿½Ï·ï¿½
           
        }
        else {
            printf("ï¿½Ì¹ï¿½ ï¿½Ç¸Åµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ô´Ï´ï¿½.\n");
        }
        break;
    case 2:
        if (furnitureAvailable[1]) {
            wallet -= 9700;
            printf("ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ù´ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
            SellFurniture(1); // ï¿½ï¿½ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ ï¿½Ï·ï¿½
        }
        else {
            printf("ï¿½Ì¹ï¿½ ï¿½Ç¸Åµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ô´Ï´ï¿½.\n");
        }
        break;
    case 3:
        if (furnitureAvailable[2]) { //3ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½
            wallet -= 128000;
            printf("È²ï¿½Ýºï¿½ï¿½â¸¦ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
            SellFurniture(2); // ï¿½ï¿½ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ ï¿½Ï·ï¿½
        }
        else {
            printf("ï¿½Ì¹ï¿½ ï¿½Ç¸Åµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ô´Ï´ï¿½.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            wallet -= 34000;
            printf("ï¿½Ë·Ï´Þ·Ï¿ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï¿ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n");
            SellFurniture(3); // ï¿½ï¿½ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸ï¿½ ï¿½Ï·ï¿½
        }
        else {
            printf("ï¿½Ì¹ï¿½ ï¿½Ç¸Åµï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ô´Ï´ï¿½.\n");
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
    printf("     ÇöÀç Áý : %s\n\n", house[level]);
    printf("          ÇöÁúÇÏ¼À\n");
    printf("       < °áÁ¦ ¾ÆÀÌÅÛ  >\n");
    printf("-------------------------------\n");
    printf("       °áÁ¦±Ý¾×      °ÔÀÓ¸Ó´Ï \n");
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
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
        system("@cls||clear");
        printf("     ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ : %d ï¿½ï¿½\n", wallet);
        printf("     ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ : %s\n", house[level]);
        printf(" ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È­ ï¿½Ï½Ã°Ú½ï¿½ï¿½Ï±ï¿½ ? \n\n");
        printf("   < ï¿½ï¿½ï¿½ï¿½È®ï¿½ï¿½ : %d %% >\n", Num);
        printf("-------------------------------\n");
<<<<<<< HEAD
        printf("     1.ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½      (- %d ï¿½ï¿½)\n",buy);
        printf("     2.ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½  (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½)\n");
        printf("     3.ï¿½ï¿½ ï¿½Ç¸ï¿½      (+ %d ï¿½ï¿½)\n",sell);
        printf("     4.ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½     \n");
        printf("     5.ï¿½ï¿½ï¿½ï¿½ï¿½Ï±ï¿½     (Ã³ï¿½ï¿½ï¿½ï¿½ï¿½Í´Ù½ï¿½)\n");
=======
<<<<<<< HEAD
        printf("     1.Áý ±¸¸Å      (- %d ¿ø)\n",buy);
        printf("     2.°ÅÁö·Î »ì±â  (°ÔÀÓÁ¾·á)\n");
        printf("     3.Áý ÆÇ¸Å      (+ %d ¿ø)\n",sell);
=======
        printf("     1.Áý ±¸¸Å      (- %d ¿ø)\n", buy);
        printf("     2.ÇöÁúÇÏ±â      \n");
        printf("     3.Áý ÆÇ¸Å      (+ %d ¿ø)\n", sell);
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
        printf("     4.°¡±¸ ±¸¸Å     \n");
        printf("     5.ÀúÀåÇÏ±â     (Ã³À½ºÎÅÍ´Ù½Ã)\n");
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
        printf("-------------------------------\n");
        printf("        ï¿½Ô·ï¿½ : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
<<<<<<< HEAD
            case 1:        // ï¿½ï¿½È­ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½
                randNum = rand() % 100 + 1;
                choice = 1;
=======
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
>>>>>>> ce736913c6c021b816953a837d82823a848a13e5

            // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½È®ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ï¿½ï¿½ï¿½ï¿½È­ï¿½ï¿½ ï¿½ï¿½ï¿½
                wallet -= buy;
                printf("\n\nï¿½ï¿½ï¿½ï¿½ : %d ï¿½ï¿½\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                nowlevel = level+1;
                futurelevel = level + 2;
                level++;
            }
            else
            {
                sellHome = false;
                tnf = false;
                // ï¿½ï¿½ï¿½ï¿½È­ï¿½ï¿½ ï¿½ï¿½ï¿½
                wallet -= buy;
                printf("\n\nï¿½ï¿½ï¿½ï¿½ : %d ï¿½ï¿½\n", wallet);
                printf("         ï¿½ï¿½ ï¿½ï¿½ï¿½ß³ï¿½...\n");
                printf("ï¿½ï¿½ '%s' ï¿½ï¿½ ï¿½Ò¾ï¿½ï¿½ï¿½ï¿½Ï´ï¿½.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
                level = 0;
                
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;
                }
            }
            break;
<<<<<<< HEAD
            
=======
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

>>>>>>> ce736913c6c021b816953a837d82823a848a13e5
            case 2:
                choice = 2;
                // ï¿½ï¿½ï¿½â¸¦ ï¿½ï¿½ ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Î±×·ï¿½ ï¿½ï¿½ï¿½ï¿½
                printf("\n         ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½~\n");
                Isgame = 0;
                return -1;
                break;

            case 3:
                choice = 3;
                sellHome = true;
                nowlevel = level + 1;      //ï¿½Ø´ï¿½ ï¿½Ü°ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
                futurelevel = level + 2;
                tnf = false;               //ï¿½ï¿½ ï¿½Ç¸Å½ï¿½ ï¿½ï¿½È­ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ falseï¿½ï¿½ ï¿½ï¿½.
                wallet += sell;
                printf("\n\nï¿½ï¿½ï¿½ï¿½ : %d ï¿½ï¿½\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[level - 1]);
                level = 0;
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;// ï¿½ï¿½ï¿½È¸ï¿½ ï¿½Ù½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ç¸Å°ï¿½ï¿½ï¿½ï¿½Ï°ï¿½
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
    printf("            ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½\n", wallet);
    printf("---------------------------------------\n\n");
    printf("       idï¿½ï¿½ ï¿½Ð¹ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Ï¼ï¿½ï¿½ï¿½. \n");
    printf("         ï¿½ï¿½ï¿½ï¿½ï¿½Ú¸ï¿½ï¿½ : 1234  \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input=0;
        case 1234:
            wallet = 999999999;
            printf(" ï¿½Ý¾ï¿½ï¿½ï¿½ 999,999,999ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ÛµË´Ï´ï¿½. \n");
            printf(" ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Ï¼ï¿½ï¿½ï¿½ :  ");
            scanf_s("%d", &input);
            level = input;
            break;
        default: level = 0;
         break;
    }
    return 0;

<<<<<<< HEAD

=======
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
>>>>>>> d24779e7d09145769ca74b887a96e921976ec463
