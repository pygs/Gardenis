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
    _sleep(250);
    cout << "\t \t2. Wyjdz" << endl;
    cin >> Menu;
    if (Menu==1)
    {
        system("cls");
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
        char name[50];
        cout << "# Wpisz swoje imie: ";
        cin >> name;
        cout << "Artey: Ok, " << name << ", milo mi Cie poznac." << endl;
        getch();
        cout << name << ": Mi rowniez." << endl;
        getch();
        cout << "Artey: To jak? Wracamy?" << endl;
        getch();
        cout << name << ": Mhm." << endl;
        getch();
        cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
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
        Podroz:
        cout << "\t >> 1. Ucieknij wraz z Arteyem" << endl;
        _sleep(500);
        cout << "\t >> 2. Pozbadz sie goblinow" << endl;
        _sleep(500);
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
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
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
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
            }
        else
            {
            cout << "Nie ma takiej opcji!" << endl;
            goto Podroz;
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
        cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
        getch();
        system("cls");
        cout << "!!!----------Rozdzial 3: Miano rycerza----------!!!" << endl;
        int Profesja;
        int takNie;
        r3:
        getch();
        cout << "*Nastepny dzien*" << endl;
        getch();
        cout << "# Postanawiasz sie przejsc po zamku." << endl;
        getch();
        cout << "Artey: Dzien dobry " << name << "." << endl;
        getch();
        cout << name << ": Dzien dobry Artey. Wszystko w porzadku?" << endl;
        getch();
        cout << "Artey: Taa. Jeszcze troche posiedzialem z krolem i porozmawialismy o Tobie." << endl;
        getch();
        cout << name << ": O mnie?" << endl;
        getch();
        cout << "Artey: Tak, zastanawialismy sie kim chcialbys byc." << endl;
        getch();
        cout << name << ": Hmm. To zalezy tez od krola co mi zaoferuje." << endl;
        getch();
        cout << "Artey: Wszystko sie okaze wieczorem." << endl;
        getch();
        cout << "???: Artey, a to kto?" << endl;
        getch();
        cout << "Artey: Och, " << name << " poznaj Psycha, naczelna prawa reka krola Grindora." << endl;
        getch();
        cout << name << ": Milo mi pana poznac." << endl;
        getch();
        cout << "Psycho: Mi rowniez. Wiec, " << name << ", dzisiaj jest uroczystosc mianowania Cie na      rycerza, prawda?" << endl;
        getch();
        cout << name << ": Oj tam od razu uroczystosc." << endl;
        getch();
        cout << "Artey: W Gardenis to jest wielki zaszczyt by byc mianowanym przez samego krola  Grindora." << endl;
        getch();
        cout << "Psycho: Taka prawda." << endl;
        getch();
        cout << name << ": Jak mowil Artey, wszystko sie okaze wieczorem." << endl;
        getch();
        system("cls");
        cout << "# Nastaje wieczor." << endl;
        getch();
        cout << "# Cala komnata krolewska zapelniona mieszczanami." << endl;
        getch();
        cout << "# Nastaje cisza. Wchodzi krol Grindor." << endl;
        getch();
        cout << "Grindor: A wiec, " << name << ", kim chcialbys zostac dla naszego zamku?" << endl;
        getch();
        system("cls");
        Profesja:
        cout << "# Masz do wyboru 3 profesje: " << endl;
        _sleep(500);
        cout << "\t >> 1. Rycerz" << endl;
        _sleep(500);
        cout << "\t >> 2. Skrytobojca" << endl;
        _sleep(500);
        cout << "\t >> 3. Lucznik" << endl;
        _sleep(500);
        cout << "# Wprowadz swoj wybor: ";
        cin >> Profesja;
        if (Profesja==1)
        {
            cout << name << ": Wybieram rycerza." << endl;
            getch();
            cout << "Grindor: Czy aby na pewno?" << endl;
            getch();
            takNie1:
            cout << "\t >> 1. Tak" << endl;
            _sleep(500);
            cout << "\t >> 2. Nie" << endl;
            _sleep(500);
            cout << "# Wprowadz swoj wybor: ";
            cin >> takNie;
            if (takNie==1)
            {   cout << name << ": Tak. To moja ostateczna dezycja." << endl;
                getch();
                cout << "Grindor: Doskonaly wybor. Czlowiek ktory potrafi poradzic sobie sam z goblinami na pewno nam sie przyda!" << endl;
                getch();
                cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
                getch();
                system("cls");
            }
            else if (takNie==2)
            {
                goto Profesja;
            }
            else
            {
                goto takNie1;
            }
        }
        else if (Profesja==2)
        {
            cout << name << ": Wybieram skrytobojce." << endl;
            getch();
            cout << "Grindor: Czy aby na pewno?" << endl;
            getch();
            takNie2:
            cout << "\t >> 1. Tak" << endl;
            _sleep(500);
            cout << "\t >> 2. Nie" << endl;
            _sleep(500);
            cout << "# Wprowadz swoj wybor: ";
            cin >> takNie;
            if (takNie==1)
            {
                cout << name << ": Tak. To moja ostateczna decyzja." << endl;
                getch();
                cout << "Grindor: Nie spodziewalem sie tego. Ale to twoj wybor. Witamy na pokladzie " << name << "!" << endl;
                getch();
                cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
                getch();
                system("cls");
            }
            else if(takNie==2)
            {
                goto Profesja;
            }
            else
            {
                goto takNie2;
            }
        }
        else if (Profesja==3)
        {
            cout << name << ": Wybieram lucznika." << endl;
            getch();
            cout << "Grindor: Czy aby na pewno?" << endl;
            getch();
            takNie3:
            cout << "\t >> 1. Tak" << endl;
            _sleep(500);
            cout << "\t >> 2. Nie" << endl;
            _sleep(500);
            cout << "# Wprowadz swoj wybor: ";
            cin >> takNie;
            if (takNie==1)
            {
                cout << name << ": Tak. To moja ostateczna decyzja." << endl;
                getch();
                cout << "Grindor: Tego sie nie spodziewalem po takim wojowniku. Moze jednak masz         zdolnosci lucznicze. W takim razie, witamy na pokladzie " << name << "!" << endl;
                getch();
                cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
                getch();
                system("cls");
            }
            else if(takNie==2)
            {
                goto Profesja;
            }
            else
            {
                goto takNie3;
            }
        }
        else
        {
            goto Profesja;
        }
        cout << "!!!----------Rozdzial 4: Najazd----------!!!" << endl;
        cout << "Dalsza czesc pozniej :f" << endl;
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
