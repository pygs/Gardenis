#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    Menu:
    cout << "   ___              _            _     " << endl;
    _sleep(250);
    cout << "  / _ \\__ _ _ __ __| | ___ _ __ (_)___ " << endl;
    _sleep(250);
    cout << " / /_\\/ _` | '__/ _` |/ _ \\ '_ \\| / __|" << endl;
    _sleep(250);
    cout << "/ /_\\\\ (_| | | | (_| |  __/ | | | \\__ \\ " << endl;
    _sleep(250);
    cout << "\\____/\\__,_|_|  \\__,_|\\___|_| |_|_|___/" << endl;
    _sleep(250);
    int Menu;
    cout << "\t \t1. Nowa gra" << endl;
    cout << "\t \t2. Wyjdz" << endl;
    cin >> Menu;
    if (Menu==1)
    {
        cout << "!!!----------Prolog----------!!!" << endl;
        getch();
        cout << "???: Ej, kolego, zyjesz?" << endl;
        getch();
        cout << "*Obudziles sie*" << endl;
        getch();
        cout << "???: Szybko, chodz, dopoki nas nie dopadna." << endl;
        getch();
        cout << "Ty: Kto?" << endl;
        getch();
        cout << "???: Gobliny." << endl;
        getch();
        cout << "???: Lepiej sie pospiesz. Przy okazji, nazywam sie Artey. A Ty?" << endl;
        getch();
        char name[50];
        cin >> name;
        cout << "Artey: Ok, " << name << ", milo mi Cie poznac." << endl;
        getch();
        cout << name << ": Mi rowniez." << endl;
        getch();
        cout << "Artey: To jak? Wracamy?" << endl;
        getch();
        cout << name << ": Mhm." << endl;
        getch();
        cout << "Nacisnij dowolny klawisz, aby kontynuowac" << endl;
        getch();
        system("cls");
            int opcjePodrozy;
            cout << "# Po jakims czasie zostajecie otoczeni przez goblinich rycerzy." << endl;
            getch();
            cout << "Artey: " << name << "! Uciekajmy, szybko!" << endl;
            getch();
            cout << "# I tutaj stajesz przed wyborem." << endl;
            getch();
            cout << "# Chcesz uciec wraz z Arteyem?" << endl;
            getch();
            cout << "# Czy moze pozbyc sie goblinow i nie narazac zycia Arteya?" << endl;
            getch();
            asd1:
            cout << "\t >> 1. Ucieknij wraz z Arteyem" << endl;
            cout << "\t >> 2. Pozbadz sie goblinow" << endl;
            cout << "Wprowadz swoj wybor: ";
            cin >> opcjePodrozy;
            system("cls");
            if (opcjePodrozy==1)
                {
                cout << "!!!----------Rozdzial 1: Ucieczka----------!!!" << endl;
                getch();
                cout << "# Bierzesz Arteya za reke i szybko uciekacie." << endl;
                getch();
                cout << name << ": Dawaj!" << endl;
                getch();
                cout << "# Po godzinie biegniecia docieracie do zamku gdzie mieszka Artey." << endl;
                getch();
                cout << "# Okazuje sie, ze jest wynajetym przez krola skrytobojca." << endl;
                getch();
                cout << "Nacisnij dowolny klawisz, aby kontynuowac" << endl;
                getch();
                system("cls");
                }
            else if (opcjePodrozy==2)
                {
                cout << "!!!----------Rozdzial 1: Walka----------!!!" << endl;
                getch();
                cout << "# Postanawiasz pozbyc sie goblinow." << endl;
                getch();
                cout << name << ": Artey, uciekaj! Dam sobie rade z nimi." << endl;
                getch();
                cout << "Artey: Ale..." << endl;
                getch();
                cout << name << ": Zadnych ale! Uciekaj, juz! Przybede do Ciebie jak bedzie po wszystkim." << endl;
                getch();
                cout << "# Artey postanawia Ci pomoc." << endl;
                getch();
                cout << "# Wyciaga on sztylet podarowany od krola." << endl;
                getch();
                cout << "# Wyciagasz swoj miecz." << endl;
                getch();
                cout << "# Jeden goblin zaatakowal Cie z ukrycia przez co zostales ranny." << endl;
                getch();
                cout << "# Gdy bylo po wszystkim, Artey wzial Cie do medyka." << endl;
                getch();
                cout << "# Szybko Cie opatrzyl i wrociles do zdrowia." << endl;
                getch();
                cout << "# Artey opowiada Ci o tym kim jest i dla kogo sluzy." << endl;
                getch();
                cout << "Nacisnij dowolny klawisz, aby kontynuowac" << endl;
                getch();
                system("cls");
                }
            else
                {
                cout << "Nie ma takiej opcji!" << endl;
                goto asd1;
                }
        cout << "!!!----------Rozdzial 2: Spotkanie----------!!!" << endl;
        getch();
        cout << "Artey: To co, moze poznam Cie z naszym krolem?" << endl;
        getch();
        cout << name << ": Chetnie." << endl;
        getch();
        cout << "# Wraz z Arteyem podazacie do komnaty krola." << endl;
        getch();
        cout << "# Wchodzicie i zauwazasz jego ekscelencje." << endl;
        getch();
        cout << "# Uklaniasz sie przed krolem." << endl;
        getch();
        cout << name << ": O witam szanowna ekscelencjo, nazywam sie " << name << "." << endl;
        getch();
        cout << "Krol: Kto smie przeszkadzac mi w takim momencie?" << endl;
        getch();
        cout << "Artey: Krolu Grindorze, to jest czlowiek ktory uratowal moje zycie." << endl;
        getch();
        cout << "Grindor: Zaprawde powiadasz? W takim razie witamy w zamku \"Gardenis\"!" << endl;
        getch();
        cout << "Grindor: Slugo! Przynies nam uczte." << endl;
        getch();
        cout << "Grindor: Przy okazji, zawolaj naszego blazna Felosa, aby podarowal nam rozrywki." << endl;
        getch();
        cout << "# Po obfitej uczcie postanawiasz sie przespac." << endl;
        getch();
        cout << "# Niedlugo krol Grindor da ci mozliwosc pracy w zamku." << endl;
        getch();
        cout << "Nacisnij dowolny klawisz, aby kontynuowac" << endl;
        getch();
        system("cls");
        cout << "!!!----------Rozdzial 3: Miano rycerza----------!!!" << endl;
        getch();
        cout << "Dalsza czesc gry za jakis czas :f" << endl;
        getch();
        return 0;
    }
    if (Menu==2)
    {
        return 0;
    }
    else
    {
        system("cls");
        goto Menu;
    }
}
