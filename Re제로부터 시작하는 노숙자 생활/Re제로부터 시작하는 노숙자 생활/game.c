#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

<<<<<<< HEAD:Reì œë¡œë¶€í„° ì‹œì‘í•˜ëŠ” ë…¸ìˆ™ì ìƒí™œ/Reì œë¡œë¶€í„° ì‹œì‘í•˜ëŠ” ë…¸ìˆ™ì ìƒí™œ/game.c
=======
//¾ÈµÈ´Ù°í ÇØ¼­ ÀÏ´Ü ÇØº¸´ÂÁß ÀÔ´Ï´ç
#define MAX_PROBABILITY 100.0f              // ¼º°øÈ®·ü ÃÖ´ëÄ¡
#define MAX_FILE_PATH_LENGTH 20             // ÆÄÀÏ °æ·ÎÀÇ ÃÖ´ë ±æÀÌ Á¤ÀÇ

// ÆÄÀÏ °æ·Î ¹è¿­ Á¤ÀÇ
char FILE_PATH[][MAX_FILE_PATH_LENGTH] = { "resultdata1.txt", "resultdata2.txt", "resultdata3.txt" };

void saveToFile(int level, const char* house, int wallet, int index);

int main(void)
{
>>>>>>> d9b195837b214ea4111c509f5b231203d71e2372:Reì œë¡œë¶€í„° ì‹œì‘í•˜ëŠ” ë…¸ìˆ™ì ìƒí™œ/Reì œë¡œë¶€í„° ì‹œì‘í•˜ëŠ” ë…¸ìˆ™ì ìƒí™œ/main.c
    int isTry = 0;                          // °­È­¸¦ ÇÒ °ÍÀÎÁö ¼±ÅÃ
    int level = 0;                          // ÇöÀç ¹«±âÀÇ ·¹º§
    time_t retTime = 0;                     // ´ë±â½Ã°£ ÀÓ½ÃÀúÀå
    int randNum = 0;                        // ·£´ı°ªÀ» ÀúÀå
    int Num = 100;                          // È®·ü ¼ıÀÚ
    int furnitureNum = 0;                   // °¡±¸ ¹øÈ£
    int furnitureBuy = 0;
    int buyMoney = 0;                       //°¡±¸ °¡°İ
    int buy = 0;                            // Áı ±¸¸Å
    int sell = 0;                           // Áı ÆÈ¶§
    int wallet = 50000;                     // ÇöÀç °¡Áö°í ÀÖ´Â ±İ¾×
    char* house[] = { "¼­¿ï¿ª ³ë¼÷","¹İÁöÇÏ¿ø·ë","¹ú·¹ ³ª¿À´Â ¿ø·ë", "Á¼Àº ¿ø·ë","Àû´çÇÑ ¿ø·ë","³ĞÀº ¿ø·ë","¹ú·¹ °¡²û ³ª¿À´Â Åõ·ë","Ãş°£¼ÒÀ½ Áö¸®´Â Åõ·ë","º¯±â Àß ¸·È÷´Â Åõ·ë","Àû´çÇÑ Åõ·ë","Â¼´Â Åõ·ë","°Á ¾ÆÆÄÆ®","±×³É ÁÁÀº ¾ÆÆÄÆ®","¸ÚÀÖ´Â ¾ÆÆÄÆ®","È£È­·Î¿î ¾ÆÆÄÆ®","¸¶´çÀÖ´Â ´Üµ¶ÁÖÅÃ","½Ã±×´Ï¿¤" };
    char* furniture[] = { "²É¹«´Ì º®Áö", "³ë¶õ»ö ¹Ù´Ú", "È²±İº¯±â", "¸»ÇÏ´ÂÀÇÀÚ","¼Ö·Î¹è°Ô", "¾Ë·Ï´Ş·Ï¿ÊÀå" };
    
    int main(void)
{
        maingame();
}

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
    return 0;
}

int Store()
{
    system("@cls||clear");
    printf("     °¡Áø µ· : %d ¿ø\n", wallet);
    printf("     ÇöÀç Áı : %s\n\n", house[level]);
    printf("        ÀÎÅ×¸®¾î »óÁ¡\n");
    printf("       < ¿À´ÃÀÇ ¾ÆÀÌÅÛ  >\n");
    printf("-------------------------------\n");
    BuyMoney();
    printf("     1.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     2.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     3.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     4.%s    (- %d ¿ø)\n", furniture[furnitureNum], buyMoney);
    printf("     5.°ÔÀÓÀ¸·Î µ¹¾Æ°¡±â \n ");
    printf("-------------------------------\n");
    printf("        ÀÔ·Â : ");
    scanf_s("%d", &furnitureBuy);

    if(furnitureBuy == 5)
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
{
    srand((int)time(NULL));                 // ·£´ı ½Ãµå°ª ¼³Á¤

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
        default: Num = 100; buy = 2000; sell = 0;
            break;
        }
        // È­¸é Á¤¸®
        system("@cls||clear");
        printf("     °¡Áø µ· : %d ¿ø\n", wallet);
        printf("     ÇöÀç Áı : %s\n", house[level]);
        printf(" ÁıÀ» °­È­ ÇÏ½Ã°Ú½À´Ï±î ? \n\n");
        printf("   < ¼º°øÈ®·ü : %d %% >\n", Num);
        printf("-------------------------------\n");
        printf("     1.Áı ±¸¸Å      (- %d ¿ø)\n", buy);
        printf("     2.°ÅÁö·Î »ì±â  (°ÔÀÓÁ¾·á)\n");
        printf("     3.Áı ÆÇ¸Å      (+ %d ¿ø)\n", sell);
        printf("     4.°¡±¸ ±¸¸Å     \n");
        printf("     5.ÀúÀåÇÏ±â     (Ã³À½ºÎÅÍ´Ù½Ã)\n");
        printf("-------------------------------\n");
        printf("        ÀÔ·Â : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
        case 1:        // °­È­¿¡ µµÀü ÇÒ °æ¿ì
            randNum = rand() % 100 + 1;

            // ÃßÃâÇÑ ·£´ı °ªÀÌ ¼º°øÈ®·ü º¸´Ù ÀÛÀ¸¸é ¼º°ø
            if (randNum < Num) {
                // ¼º°øÈ­¸é Ãâ·Â
                wallet -= buy;
                printf("\n\nÁö°© : %d ¿ø\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                level++;
            }
            else
            {
                // ½ÇÆĞÈ­¸é Ãâ·Â
                wallet -= buy;
                printf("\n\nÁö°© : %d ¿ø\n", wallet);
                printf("         ¾Æ ¸ÁÇß³×...\n");
                printf("Áı '%s' À» ÀÒ¾ú½À´Ï´Ù.\n", house[level]);
                level = 0;
            }
            break;
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

        case 4:
            Store();

        }
        // ÁøÇà»óÈ² È®ÀÎÀÌ ¿ëÀÌ ÇÏµµ·Ï ´ë±â
        printf("\n°è¼ÓÇÏ·Á¸é ¾Æ¹« Å°³ª ´©¸£½Ê½Ã¿À.\n");
        _getch();
    }
    return 0;
}