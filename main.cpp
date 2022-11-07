#include <iostream>
#include <fstream>
#include <cstring>
#include <random> 
using namespace std;

ofstream fout ("Registration Card.out ");

int Profesor, Elev, clasa[35];

char name[30], city[10], street[10], materie[10], type[10];
int number, PhoneNumber;

int romana[8], matematica[8], informatica[8], fizica[8], engleza[8]; //Note
int grader, gradem, gradei, gradef, gradee; //Numar de note

void registering () { 
    cout << "--- REGISTERING System --- " << endl;
    cout << "Please write down your name " << '\n';
    cin.getline (name, 30);
    cout << endl;

    cout << "Well done! Now we'll need the next details: \n";
    cout << "City: ";
    cin.getline (city, 10);

    cout << "Street: ";
    cin.getline (street, 10);

    cout << "Number: ";
    cin >> number;

    cout << "Phone Number: ";
    cin >> PhoneNumber;

    cout << "Your registration card is ready." << '\n' << '\n';
}

void cardpr () { 
    fout << "-------------------------------------------\n";
    fout << "|****Registration Card*****" << '\n';
    fout << "|-----------------------------------------\n";
    fout << "| Profesor " << '\n';
    fout <<  "| Name: " << name << '\n';
    fout << "| City: " << city <<  " - Street: " << street << " - Number: " << number << '\n';
    fout << "| Phone Number: " << "0" << PhoneNumber << '\n';
    fout << "-------------------------------------------\n";
}

void cardel () { 
    fout << "-------------------------------------------\n";
    fout << "|****Registration Card*****" << '\n';
    fout << "|-----------------------------------------\n";
    fout << "| Elev " << '\n';
    fout <<  "| Name: " << name << '\n';
    fout << "| City: " << city <<  " - Street: " << street << " - Number: " << number << '\n';
    fout << "| Phone Number: " << "0" << PhoneNumber << '\n';
    fout << "-------------------------------------------\n";
}


void intgrades () { // Doar profesori 
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
    cout << "Elev la inceput fiind, te rugam sa iti apreciezi situatia scoalara" << '\n';
    cout << "Numarul Total de note la romana: ";
    cin >> grader;
    for (int i=1; i<=grader; i++)
        cin >> romana[i];

    cout << "Numarul Total de note la matematica: ";
    cin >> gradem;
    for (int i=1; i<=gradem; i++)
        cin >> matematica[i];

    cout << "Numarul Total de note la informatica: ";
    cin >> gradei;
    for(int i=1; i<=gradei; i++)
        cin >> informatica [i];


    cout << "Numarul Total de note la fizica: ";
    cin >> gradef;
    for (int i=1; i<=gradef; i++)
        cin >> fizica[i];

    cout << "Numarul Total de note la engleza: ";
    cin >> gradee;
    for (int i=1; i<=gradee; i++)
        cin >> engleza[i];
}

int r = 1, m = 1, f=1, i=1, e=1;
void addnote () { 
    string materie; 
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
    cout << "La ce materie vrei sa adaugi nota? " << '\n';
    cin >> materie;

    if (materie == "romana") {
        
        cin >> romana[r];
        r++;
    }

    if (materie == "matematica") { 
        cin >> matematica [m];
        m++;
    }

    if (materie == "fizica") {
        cin >> fizica[f];
        f++;
    }

    if (materie == "informatica") {
        cin >> informatica[i];
        i++;

    if (materie == "engleza") {
        cin >> engleza[e];
        e++;
    }

    }
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
}

//////////////////////////////////////////////////WORK FROM HERE////////////////////////////////////////////////
void testing () {
    int nrq, question = 1;
    cout << " Selecteaza numarul de intrebari: ";
    cin >> nrq;
    string q;

    cout << '\n';
    for (int i = 1; i <= nrq; i++) {
        cout << question << ": ";
        cin >> q;
        cout << "Intrebarea " << i << " a fost adaugata cu succes." << '\n';
        question ++;
    }
}

void testresult () {
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
    cout << "La testul dat s-au obtinut urmatoarele note: " << endl;
    int testgrade;
    testgrade = rand () % 2 + 1;
    if (testgrade == 1)
        for (int i=1; i <= 35; i++) {
            cout << "Elev " << i << " nota: "; 
            testgrade = rand () % 10 + 5;
            cout << testgrade;
        }
    else 
        for (int i=1; i <= 35; i++) {
            cout << "Elev " << i << " nota: "; 
            testgrade = rand () % 5 + 1;
            cout << testgrade << '\n';
        }
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
}
//////////////////////////////////////////////////TO HERE///////////////////////////////////////////////////////////

void showmygrade () {
    string materie; 
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
    cout << "La ce materie vrei sa vezi notele " << '\n';
    cin >> materie;

    if (materie == "romana") { 
        cout << "Notele tale la limba romana sunt: ";
        for (int i=1; i<r; i++)
            cout << romana[i] << ' ';
    }

    if (materie == "matematica") {
        cout << "Notele tale la matematica sunt: ";
        for (int i=1; i<m; i++)
            cout << matematica [i] << ' ';
    }

    if (materie == "fizica") {
        cout << "Notele tale la fizica sunt: ";
        for (int i=1; i<f; i++)
            cout << fizica[i] <<' ';
    }

    if (materie == "informatica") {
        cout << "Notele tale la informatica sunt: ";
        for (int j=1; j<i; j++)
            cout << informatica[j] << ' ';
    }

    if (materie == "engleza") {
        cout << "Notele tale la limba engleza sunt: ";
        for (int i=1; i<e; i++)
            cout << engleza[i] << ' ';
    }
    
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
}

void showgrades () {
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
    cout << "Situatia ta scoala este urmatoarea:" << '\n';
    cout << "Romana: ";
    for (int i=1; i<=grader; i++)
        cout << romana[i] << ' ';
    cout << '\n';

    cout << "Matematica: ";
    for (int i=1; i<=gradem; i++)
        cout << matematica[i]<< ' ';
    cout << '\n';

    cout << "Informatica: ";
    for (int i=1; i<=gradei; i++)
        cout << informatica[i] << ' ';
    cout << '\n';

    cout << "Fizica: ";
    for (int i=1; i<=gradef; i++)
        cout << fizica[i] << ' ';
    cout << '\n';

    cout << "Engleza: ";
    for (int i=1; i<=gradee; i++)
        cout << engleza[i] << ' ';
    cout << '\n';
    cout << '\n';
    cout << "-------------------------------------------------------------------------------------------------------------------------------" << '\n';
}

int main (){
    /*
    IDEI:
        -Sistem de teste; - DONE 
        -Sistem de note random de la 1 la 10; - DONE
        -Sistem de clasa a ta daca alegi sa fii profesor - DONE 
        -Orar (?)
        -Anuntarea elevului ca se da un test
        -Te ingregistrezi doar prima data, apoi ramane salvat.
    */
    /*
    BUG LIST: 
        -Rezolva inregistrarea - numele cadrului - DONE 
        -Testare f. testing - DONE 
        -Imbunatateste sistemul random pentru note (x = (x%2) ? 1 : 2) - more like a game stuff - DONE 
        -Rezolvare Sistem Note (Posibil cu foldere)
        -Optimizare sistem practic pentru elevi 
        -Optimizare sistem practic pentru profesori
        -Bug situatia scolara - showgrades () 
    */

/*
   registering ();
    cout << "_________________________" << '\n';
    cout << "Elev / Profesor?" << '\n';
    cout << "_________________________" << '\n';
    string usercheck; cout << '\n';
    cin >> usercheck;

    if (usercheck == "Profesor")
        Profesor = 1;
    else 
        Elev = 1;

    system ("pause");
    if (Profesor == 1)
    {
        cardpr ();
    }

    else 
    {
        cardel ();
    }
*/

    cout << "_________________________" << '\n';
    cout << "Elev / Profesor?" << '\n';
    cout << "_________________________" << '\n';
    string usercheck; cout << '\n';
    cin >> usercheck;

    if (usercheck == "Profesor")
        Profesor = 1;
    else 
        Elev = 1;
    
    string action;
    while (true) {
        cin >> action;

        if (action == "changeuser")
        {
            cout << "_________________________" << '\n';
            cout << "Elev / Profesor?" << '\n';
            cout << "_________________________" << '\n';
            cin >> usercheck;
            if (usercheck == "Profesor")
                Profesor = 1, Elev = 0;
            else 
                Elev = 1, Profesor = 0;
        }
        if (action == "showgrades" )
            showgrades ();

        if (action == "intgrades" && Profesor == 1)
            intgrades ();

        if (action == "clearscreen")
            system ("cls");

        if (action == "addnote" && Profesor == 1)
            addnote ();

        if (action == "testing" && Profesor == 1)
            testing ();

        if (action == "testresult")
            testresult ();

        if (action == "showmygrade")
            showmygrade ();
    }

    return 0;
}