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
        _sleep(2000);
        cout << "???: Ej, kolego, zyjesz?" << endl;
        getch();
        cout << "*Obudziles sie*" << endl;
        getch();
        cout << "???: Szybko, chodz, dopoki nas nie dopadna." << endl;
        getch();
        cout << "Ty: Kto?" << endl;
        getch();
        cout << "???: Papiezaki." << endl;
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
        cout << "# Po jakims czasie zostajecie otoczeni przez papieskich rycerzy." << endl;
        getch();
        cout << "# I tutaj stajesz przed wyborem." << endl;
        getch();
        cout << "# Chcesz uciec wraz z Arteyem?" << endl;
        getch();
        cout << "# Czy moze pozbyc sie papiezakow i nie narazac zycia Arteya?" << endl;
        getch();
        Podroz:
        cout << "\t >> 1. Ucieknij wraz z Arteyem" << endl;
        _sleep(500);
        cout << "\t >> 2. Pozbadz sie papiezakow" << endl;
        _sleep(500);
        cout << "Wprowadz swoj wybor: ";
        cin >> opcjePodrozy;
        system("cls");
        if (opcjePodrozy==1)
            {
            cout << "!!!----------Rozdzial 1: Ucieczka----------!!!" << endl;
            _sleep(2000);
            cout << "# Bierzesz Arteya za reke." << endl;
            getch();
            cout << "# On postanawia sie nie ruszac." << endl;
            getch();
            cout << name << ": Co Ty robisz?" << endl;
            getch();
            cout << "Artey: Jestem wybitnym skrytobojcom wynajetym przez krola." << endl;
            getch();
            cout << "Artey: I nie zamierzam wycofywac sie jak Ty." << endl;
            getch();
            cout << "# Po tym wszystkim co powiedzial postanawiasz mu pomoc." << endl;
            getch();
            }
        else if (opcjePodrozy==2)
            {
            cout << "!!!----------Rozdzial 1: Walka----------!!!" << endl;
            _sleep(2000);
            cout << "# Postanawiasz pozbyc sie papiezakow." << endl;
            getch();
            cout << name << ": Artey, uciekaj! Dam sobie rade z nimi." << endl;
            getch();
            cout << "Artey: Ale..." << endl;
            getch();
            cout << name << ": Zadnych ale! Uciekaj, juz! Przybede do Ciebie jak bedzie po wszystkim." << endl;
            getch();
            cout << "# Artey postanawia Ci pomoc." << endl;
            getch();
            }
        else
            {
            cout << "Nie ma takiej opcji!" << endl;
            goto Podroz;
            }
        cout << "# Wyciaga on sztylet podarowany od krola." << endl;
        getch();
        cout << "# Wyciagasz swoj miecz." << endl;
        getch();
        cout << "# Jeden papiezak zaatakowal Cie z ukrycia przez co zostales ranny." << endl;
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
        cout << "!!!----------Rozdzial 2: Spotkanie----------!!!" << endl;
        _sleep(2000);
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
        cout << "Grindor: Przy okazji, zawolaj naszego blazna Felosa, aby podarowal nam" << endl;
        cout << "rozrywki." << endl;
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
        _sleep(2000);
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
        cout << "Artey: Jest tez dowodca wszystkich rycerzy w zamku." << endl;
        getch();
        cout << name << ": Milo mi pana poznac." << endl;
        getch();
        cout << "Psycho: Mi rowniez. Wiec, " << name << ", dzisiaj jest uroczystosc mianowania Cie na" << endl;
        cout << "rycerza, prawda?" << endl;
        getch();
        cout << name << ": Oj tam od razu uroczystosc." << endl;
        getch();
        cout << "Artey: W Gardenis to jest wielki zaszczyt by byc mianowanym przez samego krola" << endl;
        cout << "Grindora." << endl;
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
                cout << "Grindor: Doskonaly wybor. Czlowiek ktory potrafi poradzic sobie sam z papiezakami" << endl;
                cout << "na pewno nam sie przyda!" << endl;
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
                cout << "Grindor: Nie spodziewalem sie tego. Dwoch skrytobojcow napewno nam sie przyda." << endl;
                cout << "Witamy na pokladzie " << name << "!" << endl;
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
                cout << "Grindor: Tego sie nie spodziewalem po takim wojowniku. Moze jednak masz" << endl;
                cout << "zdolnosci lucznicze. W takim razie, witamy na pokladzie " << name << "!" << endl;
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
        _sleep(2000);
        cout << "# Po wybraniu Ciebie na wojownika wszyscy zaczeli halasowac z radosci." << endl;
        getch();
        if (Profesja==1)
        {
            cout << "# Psycho najbardziej, ze wzgledu na kolejnego dobrego wojownika." << endl;
            getch();
            cout << "# Po calej biesiadzie postanawiasz odpoczac i pogadac z Psychem." << endl;
            getch();
            cout << name << ": Wiec Psycho, widzialem, ze najbardziej sie cieszyles ze wszystkich." << endl;
            getch();
            cout << "Czemu?" << endl;
            getch();
            cout << "Psycho: Szczerze? Po tym wszystkim co zrobiles dla Arteya, widze w Ciebie" << endl;
            cout << "dobrego wojown-" << endl;
            _sleep(5000);
            cout << "*bum* *trask*" << endl;
            getch();
            cout << name << ": Co to bylo?" << endl;
            getch();
            cout << "Psycho: Lepiej chodzmy do krola i wszystko nam powie." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
        }
        else if (Profesja==2)
        {
            cout << "# Artey najbardziej, ze wzgledu ze bedzie mial wspolnika." << endl;
            getch();
            cout << "# Po calej biesiadzie postanawiasz odpoczac i pogadac z Arteyem." << endl;
            getch();
            cout << name << ": Wiec Artey, widzialem, ze najbardziej sie cieszyles ze wszystkich." << endl;
            cout << "Czemu?" << endl;
            getch();
            cout << "Artey: Szczerze? Po paru latach w koncu mam jakiegos wspolnika." << endl;
            getch();
            cout << "Artey: Wszyscy ktorzy dolaczali do Gardenis szli na rycerza albo na lucznika." << endl;
            getch();
            cout << name << ": Ohh.. Przykro mi to slyszec." << endl;
            getch();
            cout << "Artey: Nic sie nie sta-" << endl;
            _sleep(3000);
            cout << "*bum* *trask*" << endl;
            cout << name << ": Co to bylo?" << endl;
            getch();
            cout << "Artey: Nie wiem. Lepiej pojdzmy do krola i sie spytajmy." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system ("cls");
        }
        else if (Profesja==3)
        {
            cout << "# Po calej biesiadzie postanawiasz odpoczac w swoim pokoju." << endl;
            getch();
            cout << "# Lezac, slyszysz wybuchy i krzyki wiesniakow." << endl;
            getch();
            cout << "# Postanawiasz udac sie do krola i sie spytac o co chodzi." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system ("cls");
        }
        cout << "# Wszyscy zgromadzili sie w komnacie krola." << endl;
        getch();
        cout << "Grindor: Drodzy podwladni. Nasz zamek zostal zaatakowany przez armie papiezakow." << endl;
        getch();
        cout << "Grindor: Prosze was, abyscie pomogli \"Gardenis\" i wszystkim tu zgromadzonym." << endl;
        getch();
        cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
        getch();
        system("cls");
        if (Profesja==1)
        {
            cout << "# Razem z Psychem i wszystkimi rycerzami postanawiacie isc szybko do" << endl;
            cout << "koszarow i sie uzbroic." << endl;
            getch();
            cout << "Psycho: Dobra chlopaki, sprawa wyglada tak, to juz jest trzeci najazd na" << endl;
            cout << "\"Gardenis\"." << endl;
            getch();
            cout << "*Trzeci najazd? O panie...*" << endl;
            getch();
            cout << name << ": Czesto papiezaki najedzaja na zamek?" << endl;
            getch();
            cout << "Psycho: Co jakis czas." << endl;
            getch();
            cout << "Psycho: Dobra, szybko wychodzmy i sie przygotujmy do obrony." << endl;
            getch();
        }
        else if (Profesja==2)
        {
            cout << "# Razem z Arteyem biegniecie do swojego pokoju i sie uzbrajacie." << endl;
            getch();
            cout << name << ": Papiezaki czesto atakuja ten zamek?" << endl;
            getch();
            cout << "Artey: Raz na jakis czas. Strat nie ma wiele. Paru rycerzy tylko." << endl;
            getch();
            cout << name << "Hmm. No dobra, a co jest nasza taktyka? Co musimy robic?" << endl;
            getch();
            cout << "Artey: Jak to co? Atakowac od tylu, najlepiej dowodce armii." << endl;
            getch();
            cout << "# Po objasnieniu taktyki idziecie razem tylnym wyjsciem zamku i skradacie sie" << endl;
            cout << "w lasku aby zaatakowac od tylu." << endl;
            getch();
        }
        else if (Profesja==3)
        {
            cout << "# Razem z innymi lucznikami biegniecie do wiez obronnych." << endl;
            getch();
            cout << name << "Wiec... Jaka jest taktyka?" << endl;
            getch();
            cout << "Lucznik: Po prostu ostrzeliwujemy papieskich lucznikow." << endl;
            getch();
            cout << "*Wydaje sie to latwe, ale ciekawe jak z moim celem.*" << endl;
            getch();
        }
        cout << "# I tak oto zaczyna sie pierwsza wojna w twoim zyciu." << endl;
        getch();
        cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
        getch();
        system("cls");
        cout << "!!!----------Rozdzial 5: Wojna----------!!!" << endl;
        _sleep(2000);
        if (Profesja==1)
        {
            cout << "# Po wyjsciu z koszarow zauwazyles cala armie papiezakow." << endl;
            getch();
            cout << "# Armia liczyla ponad 5000 potworow." << endl;
            getch();
            cout << "# Czekajac na pierwszy krok przeciwnikow stales nieruchomy jak skala." << endl;
            getch();
            cout << "Psycho: Spokojnie wszyscy. Musimy czekac tylko na ich ruch." << endl;
            getch();
            cout << "*Taa..*" << endl;
            getch();
            cout << name << ": Tak z ciekawosci, gdzie jest Artey?" << endl;
            getch();
            cout << "Psycho: Pewnie jak zawsze ukrywa sie w lasku." << endl;
            getch();
            cout << name << ": Po co?" << endl;
            getch();
            cout << "Psycho: Tak samo jak my, czeka na ruch przeciwnika, a potem zaatakuje" << endl;
            cout << "glownego dowodce armii." << endl;
            getch();
            cout << name << ": I co to da?" << endl;
            getch();
            cout << "Psycho: Wtedy papiezaki nie wiedza co robic bez rozkazow." << endl;
            getch();
            cout << name << ": Brzmi logicznie." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
        }
        else if (Profesja==2)
        {
            cout << name << ": No to co robimy?" << endl;
            getch();
            cout << "Artey: Czekamy az papiezaki zaatakuja piewsze." << endl;
            getch();
            cout << name << ": Czemu nie zaatakujemy teraz?" << endl;
            getch();
            cout << "Artey: Za duzo papiezakow przy dowodcy. Musimy zaczekac." << endl;
            getch();
            cout << "*Ehh...*" << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
        }
        else if (Profesja==3)
        {
            cout << name << ": Na co czekamy?" << endl;
            getch();
            cout << "Lucznik: Na pierwszy ruch papiezakow." << endl;
            getch();
            cout << name << ": Nie mozemy sami zaatakowac pierwsi i miec to z glowy?" << endl;
            getch();
            cout << "Lucznik: Nie. Rycerze musza byc gotowi do obrony. Jezeli zaatakujemy pierwsi" << endl;
            cout << "to nie damy rady obronic zamku." << endl;
            getch();
            cout << name << ": Ahh.." << endl;
            getch();
            cout << "Lucznik: Tak poza tym, nazywam sie Onid." << endl;
            getch();
            cout << name << ": Milo mi. Nazywam sie " << name << "." << endl;
            getch();
            cout << "Onid: No dobra, lepiej sie tez przygotujmy bo przeczuwam, ze papiezaki zaczna" << endl;
            cout << "atakowac." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
        }
        cout << "# No i w koncu papiezaki zrobily pierwszy krok." << endl;
        getch();
        cout << "# Jezdzcy na rumakach popedzali jak piorun." << endl;
        getch();
        cout << "# Lucznicy ostrzeliwali wieze obronne." << endl;
        getch();
        if (Profesja==1)
        {
            cout << "Psycho: Rycerze! Do obrony!" << endl;
            getch();
            cout << "# Najtwardsi stawili sie na frontowej linii." << endl;
            getch();
            cout << "# Wszystkie papiezaki zaatakowaly na raz na zamek." << endl;
            getch();
            cout << "# Rycerze nawet nie drgneli." << endl;
            getch();
            cout << "# Wraz z Psychem i 200 rycerzami zaatakowaliscie najezdzcow." << endl;
            getch();
            cout << "# Artey czekal na idealna okazje, aby zaatakowac dowodce." << endl;
            getch();
            cout << "# Po okolo 10 minutach papiezaki stracily polowe armii." << endl;
            getch();
            cout << "# To wszystko dzieki doskonalego dowodzenia przez Psycha." << endl;
            getch();
            cout << "# Przy dowodcy papiezakow bylo tylko trzech straznikow." << endl;
            getch();
            cout << "# Artey z latwoscia ich zalatwil." << endl;
            getch();
            cout << "# Dzieki temu papiezaki nie wiedzialy co robic." << endl;
            getch();
            cout << "# Z latwoscia pozbyliscie sie najazdu." << endl;
            getch();
            cout << "!-----------------*Nacisnij dowolny klawisz, aby kontynuowac*-----------------!" << endl;
            getch();
            system("cls");
        }
        getch();
        system("cls");
        cout << "Credits" << endl;
        _sleep(1500);
        cout << "Tworca: Jakub \"pygs\" Wasiniewski" << endl;
        _sleep(1500);
        cout << "Wspoltworca/pomocnik: Ludwik \"offchuck\" Rekowski" << endl;
        _sleep(1500);
        cout << "Wystepujacy:" << endl;
        _sleep(1500);
        cout << "Artey: Marcin Bartoszek" << endl;
        _sleep(1500);
        cout << "Psycho: Dawid Jasinski" << endl;
        _sleep(1500);
        cout << "Grindor: Damian Antkowiak" << endl;
        _sleep(1500);
        cout << "FeloS: Kacper Szatan" << endl;
        _sleep(1500);
        cout << "Onid: Konrad Filipowski" << endl;
        _sleep(1500);
        cout << "Gezet: Krystian Lesniak" << endl;
        _sleep(1500);
        cout << "Godi: Wiktoria Galdusinska" << endl;
        _sleep(1500);
        cout << "KrzysieQ: Krzysiek Kropiewnicki" << endl;
        _sleep(2000);
        cout << "!-----------------*Nacisnij dowolny klawisz, aby zakonczyc*-----------------!";
        getch();
        return 0;
    }

    else if (Menu==2)
    {
        return 0;
    }
    else
    {
        system("cls");
        goto Menu;
    }
}
