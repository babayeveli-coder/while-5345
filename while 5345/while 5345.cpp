

#include <iostream>
using namespace std;
int main()
{
    //1


    for (int i = 0; i < 128; i++) {
        cout << i << " = " << char(i) << endl;
    }
    return 0;

    //2

    int n;
    cout << "Neçə ulduz istədiyinizi daxil edin: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;

    //3

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;

    //4

    int start, end;
    cout << "Başlanğıc və son aralığı daxil edin: ";
    cin >> start >> end;

    int cüt_cəm = 0, tək_hasil = 1;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cüt_cəm += i;
        }
        else {
            tək_hasil *= i;
        }
    }

    cout << "Cüt rəqəmlərin cəmi: " << cüt_cəm << endl;
    cout << "Tək rəqəmlərin hasilı: " << tək_hasil << endl;

    return 0;


    //5

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;

    //6

    int n;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    int faktorial = 1;
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    cout << n << "! = " << faktorial << endl;
    return 0;

    //7

    int əsas, üst, nəticə = 1;
    cout << "Əsas və üst ədədləri daxil edin: ";
    cin >> əsas >> üst;

    for (int i = 0; i < üst; i++) {
        nəticə *= əsas;
    }

    cout << əsas << "^" << üst << " = " << nəticə << endl;

    return 0;

    //8

    int n;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    int rəqəmsayı = 0, rəqəmcəm = 0;

    while (n != 0) {
        rəqəmcəm += n % 10;
        n /= 10;
        rəqəmsayı++;
    }

    cout << "Rəqəmlərin sayı: " << rəqəmsayı << endl;
    cout << "Rəqəmlərin cəmi: " << rəqəmcəm << endl;

    return 0;

    //9

    int n, ters = 0;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    while (n != 0) {
        ters = ters * 10 + n % 10;
        n /= 10;
    }

    cout << "Əksinə çevrilmiş ədəd: " << ters << endl;

    return 0;

    //10

    int n;
    cout << "Tam ədədi daxil edin: ";
    cin >> n;

    cout << n << "-in qalıqsız bölündüyü rəqəmlər: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;

    //11

    int n;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    bool sadədir = true;

    if (n <= 1) sadədir = false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sadədir = false;
            break;
        }
    }

    if (sadədir) {
        cout << n << " sadə ədəddir." << endl;
    }
    else {
        cout << n << " sadə ədəd deyil." << endl;
    }

    return 0;

    //12

    int n;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    bool ardıcılvar = false;
    int son = n % 10;
    n /= 10;

    while (n != 0) {
        int cari = n % 10;
        if (cari == son) {
            ardıcılvar = true;
            break;
        }
        son = cari;
        n /= 10;
    }

    if (ardıcılvar) {
        cout << "Ədəddə iki ardıcıl rəqəm var." << endl;
    }
    else {
        cout << "Ədəddə iki ardıcıl rəqəm yoxdur." << endl;
    }

    return 0;

    //13

    int n;
    cout << "Ədədi daxil edin: ";
    cin >> n;

    bool artandır = true;
    int son = n % 10;
    n /= 10;

    while (n != 0) {
        int cari = n % 10;
        if (cari > son) {
            artandır = false;
            break;
        }
        son = cari;
        n /= 10;
    }

    if (artandır) {
        cout << "Ədəddə rəqəmlər artan ardıcıllıqla yerləşir." << endl;
    }
    else {
        cout << "Ədəddə rəqəmlər artan ardıcıllıqla yerləşmir." << endl;
    }

    return 0;

    //14

    int min = 1, max = 100, təxmin, cavab;
    cout << "Bir ədəd tutun (1-100 aralığında) və 'Enter' basın." << endl;
    while (true) {
        təxmin = (min + max) / 2;
        cout << təxmin << " ədədinizdir? (1 - çox, 2 - az, 3 - doğru) ";
        cin >> cavab;
        if (cavab == 3) {
            cout << "Ədədi tapdım: " << təxmin << endl;
            break;
        }
        else if (cavab == 1) {
            max = təxmin - 1;
        }
        else if (cavab == 2) {
            min = təxmin + 1;
        }
    }

    return 0;
}


