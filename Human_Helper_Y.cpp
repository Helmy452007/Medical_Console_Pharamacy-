#include<iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "=====================================\n";
    cout << "                  Hi             \n";
    cout << "=====================================\n\n";

    cout << "1- (   ﺺﻐﻣ )\n";
    cout << "2- ( ﺱﺍﺮﻟﺍ ﻉﺍﺪﺻ )\n";
    cout << "3- (  ﺓﺪﻌﻤﻟﺍ ﻢﻟﺍ ﻊﻴﺟﺮﺗ) \n";
    cout << "4- ( ﻝﺎﻬﺳ ﺍ ) \n";
    cout << "5- (  ﻢﺴﺠﻟﺍ ﻲﻓ ﺮﻴﺴﻜﺗ + ﺓﺭﺍﺮﺣ ) \n";
    cout << "6- (  ﺪﻳﺪﺷ ﻝﺎﻌﺳ ) \n";
    cout << "7- (  ﺢﺷﺭ + ﺩﺮﺑ ) \n";
    cout << "8- (  ﻖﻠﺤﻟﺍ ﻲﻓ ﻢﻟﺍ + ﺢﺷﺭ + ﺩﺮﺑ ) \n";
    cout << "9- ( ﻙﺎﺴﻣﺍ)\n";
    cout << "10- ( ﻥﺎﻨﺳ ﺍ ﻢﻟﺍ )\n";
    cout << "11- ( ﺓﺪﻌﻤﻟﺍ ﻲﻓ ﻥﺎﻗﺮﺣ ) \n";
    cout << "0- ( Exit / خروج )\n"; // إضافة خيار للخروج

    while (true)
    {
        int i;
        cout << " Choice Number (Enter 0 to exit): \n";
        cin >> i;

        if (i == 0)
            break; // لو دخل 0 البرنامج يقفل

        int x;
        cout << "Enter Your Age: " ;
        cin >> x;

        if (i == 1 && x >= 15)
        {
            cout << " Use (one tablet) \nSpasmopyralgin-M \n (one Tablet) \nSpasmofree  \nSpasmofree + Ketolac(AMP) \n";
        }
        else if (i == 1 && x <= 15)
        {
            cout << " Use (one Tablet)\nSpasmofree \n";
        }

        if (i == 2 && x >= 15)
        {
            cout << " Use\nPanadol Migrin \nAmigraine \n (one Tablet) \nDoliprane \nPandol advance  \n";
        }
        else if (i == 2 && x <= 15)
        {
            cout << " Use (one Tablet)\nPanadol advance \n";
        }

        if (i == 3 && x >= 15)
        {
            cout << " Use \nOndalenz 8 mg (FiLm) \nDanset 8 mg or Emerest 8 mg + (Gastrotodine or Antodine)(AMP)\n";
            cout << " When You Travel , Use (Two Tablet) \nDramenex  \n";
        }
        else if (i == 3 && x <= 15)
        {
            cout << " Use Ondalenz 4 mg (FiLm) \nDanset 4 mg or Emerest 4 mg + (1)(Gastrotodine or Antodine)(AMP) \n";
            cout << " When You Travel , Use (one Tablet) \nDramenex  \n";
        }

        if (i == 4 && x >= 15)
        {
            cout << " Use (one Capsule) \nAntinal \nStreptoQin  \n";
        }
        else if (i == 4 && x <= 15)
        {
            cout << " Use (one Capsule) \nAntinal \nStreptoQin  \n";
        }

        if (i == 5 && x >= 15)
        {
            cout << " Use (one Tablet) \nDoliprane \n(Two Tablet) \nPandol advance \n";
        }
        else if (i == 5 && x <= 15)
        {
            cout << " Use (one Tablet)\nPanadol advance \n";
        }

        if (i == 6)
        {
            int e;
            cout << "is it cough with phlegm or a dry cough , Enter 1 for phlegm and 2 for dry cough: ";
            cin >> e;
            if (e == 1 && x >= 15)
                cout << " Use (SYRUP)\nivyPront\nivyzad\nivylaity\nOplex\nBronchicum\nTussiStop\nTusskan\nUltrasolve\n";
            else if (e == 2 && x >= 15)
                cout << " Use\nNotussil\nBronchophane\n";
            else if (e == 1 && x <= 15)
                cout << " Use (SYRUP) \nivyPront\nivyzad\nivylaity\nOplex\nBronchicum\nTussiStop\nUltrasolve\n";
            else if (e == 2 && x <= 15)
                cout << " Use\nNotussil\n Bronchophane\n";
        }

        if (i == 7)
        {
            string s;
            cout << " Do you have High Blood Pressure and diabetes ? (yes or no): ";
            cin >> s;
            if (s == "no" && x >= 15)
                cout << " Use (one Tablet)\nDecancit + Congestal\n(one Tablet)\nPanadol Acute + Clerest\nLevcet\nLevohistam\n";
            else if (s == "yes" && x >= 15)
                cout << " Use (oneTablet)\nDolipran\n(Two Tablet)\nPanadol advance\n";
            else if (s == "no" && x <= 15)
                cout << " Use\nLevohistam(SYRUP)\nApidone(SYRUP)\n";
        }
        if (i == 8)
        {
            string q;
            cout << " Do you have High Blood Pressure and diabetes (yes or no): ";
            cin >> q;
            if (q == "no" && x >= 15)
                cout << " Use Decancit\nCongestal\n(Emulsification)Bradozine\n";
            else if (q == "yes" && x >= 15)
                cout << " Use (oneTablet)\nDolipran\n(Two Tablet)\nPanadol advance\n(Emulsification) Bradozine\n";
            else if (q == "no" && x <= 15)
                cout << " Use\nLevohistam or Apidone and maxilase\n";
        }

        if (i == 9)
        {
            if (x >= 15)
                cout << " Use (Two Tablet)\nPurgaton\nMinalax\nDuphalac\nPicolax\n";
            else
                cout << " Use \nDuphalac(SYRUP)\nPicolax(Drop)\n";
        }

        if (i == 10)
        {
            if (x >= 15)
                cout << " Use (one Tablet)\nBi_Profenid or Bi_Alkofan >> Stomach Pain\nBrufen(600,400) \nCataflam 50 mg\nKetolac(AMP)\n";
            else
                cout << " Use\nCataflam 25 mg\nBrufen(200)\n";
        }

        if (i == 11)
        {
            if (x >= 15)
                cout << " Use\nRani(Sachets)\nGaviscone(SYRUP,Sachets)\nmaalox(Sachets,SYRUP)\nDownprazole 40 mg (Sachets)\n Zurcal 40 mg\nOmez 40 mg\nomez 20 mg\n";
            else
                cout << " Use omez 20 mg\n";
        }

        cout << "\n-------------------------------------\n";
    } // نهاية الـ while

    return 0;
} // نهاية الـ main
