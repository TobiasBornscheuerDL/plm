// Projekt LügenMäxchen.cpp : Definiert den Einstiegspunkt für die Anwendung.
//
/*
#include "framework.h"
#include "Projekt LuegenMaexchen.h"
#define MAX_LOADSTRING 100

// Globale Variablen:
HINSTANCE hInst;                                // Aktuelle Instanz
WCHAR szTitle[MAX_LOADSTRING];                  // Titelleistentext
WCHAR szWindowClass[MAX_LOADSTRING];            // Der Klassenname des Hauptfensters.

// Vorwärtsdeklarationen der in diesem Codemodul enthaltenen Funktionen:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Hier Code einfügen.

    // Globale Zeichenfolgen initialisieren
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_PROJEKTLUGENMAXCHEN, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Anwendungsinitialisierung ausführen:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_PROJEKTLUGENMAXCHEN));

    MSG msg;

    // Hauptnachrichtenschleife:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  FUNKTION: MyRegisterClass()
//
//  ZWECK: Registriert die Fensterklasse.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_PROJEKTLUGENMAXCHEN));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_PROJEKTLUGENMAXCHEN);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNKTION: InitInstance(HINSTANCE, int)
//
//   ZWECK: Speichert das Instanzenhandle und erstellt das Hauptfenster.
//
//   KOMMENTARE:
//
//        In dieser Funktion wird das Instanzenhandle in einer globalen Variablen gespeichert, und das
//        Hauptprogrammfenster wird erstellt und angezeigt.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Instanzenhandle in der globalen Variablen speichern

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}



//
//  FUNKTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ZWECK: Verarbeitet Meldungen für das Hauptfenster.
//
//  WM_COMMAND  - Verarbeiten des Anwendungsmenüs
//  WM_PAINT    - Darstellen des Hauptfensters
//  WM_DESTROY  - Ausgeben einer Beendenmeldung und zurückkehren
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Menüauswahl analysieren:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Zeichencode, der hdc verwendet, hier einfügen...
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Meldungshandler für Infofeld.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}




*/











 Meine KonsolenAnwendung
#include <iostream>
#include "meinHeader.h"
#include <cstdlib>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

    //Globale Variablen
    int userEingabe = 0; //Eine zweistellige Zahl. Es wird von korrekter Eingabe ausgegangen.
    int ereignisMenge[21]{ 31, 32, 41, 42, 43, 51, 52, 53, 54, 61, 62, 63, 64, 65, 11, 22, 33, 44, 55, 66, 21 }; //Array mit Ereignismenge, nach Wertigkeit sortiert.

    while (userEingabe != 86) //Loop für die kontinuierliche Programmausführung.
    {
        //Eingabe
        cout << "Geben Sie die Ihnen genannte Zahl ein. Geben Sie 86 ein um die Ausfuehrung zu beenden.\n"; //Eingabeaufforderung für userEingabe.
    sprungPunkt: //Einstiegspunkt nach Ausführen de Sprungbefehls. Labelstatement.
        cout << "Zahl: "; //Eingabeaufforderung für userEingabe.
        cin >> userEingabe; //Holen und Speichern der userEingabe.



        //Verarbeitung
        int* zahlExistiertInArray = find(begin(ereignisMenge), end(ereignisMenge), userEingabe); //Warum auch immer muss es so sein. Vergleich von userEingabe mit ArrayElementen. Scheiß Pointer...
        if ((*zahlExistiertInArray != userEingabe || cin.fail()) && userEingabe != 86) //Bei Eingabe eines Datentyps der nicht userEingabe entspricht.
        {
            cin.clear(); //Löscht die Fehlermeldung aus internem cin-Speicher, sodass bei folgenden Eingaben keine falschen Fehlermeldungen angezeigt werden.
            cin.ignore(); //Ignoriert eingegebene Zeichen. Bei einem Fehler werden diese nicht gespeichert und somit Fehler vermieden.
            cout << "Ungueltige Eingabe! Geben Sie eine Zahl ein, die in der Ereignismenge liegt!\n"; //Fehlermeldung an den User.
            goto sprungPunkt; //unkonditioneller Sprung zum Labelstatement. Von der Benutzung eines solchen Befehls wird eigenlich abgeraten, kann eine Menge zerschießen.
        }
        int indexDerUserEingabeImArray = vergleicheUndFindeIndex(userEingabe, ereignisMenge); //Function call, siehe Header.h. 
        double anzahlVonHoeherenIndexen = findeAnzahlvonHoeherenElementen(indexDerUserEingabeImArray, ereignisMenge); //Function call, siehe Header.h. 
        double wahrscheinlichkeit = (anzahlVonHoeherenIndexen / 21) * 100; //Errechnen der Wahrscheinlichkeit eines höheren Wurfes.



        //Ausgabe
        if (userEingabe != 86) //Output bei regulärer Eingabe.
        {
            cout << "Die Wahrscheinlichkeit eine wertigere Kombination zu werfen liegt bei: " << wahrscheinlichkeit << " %." << endl;
            cout << "\n";
        }
        else if (userEingabe == 86) //Output bei Abbrechen.
        {
            cout << "Sie haben die Programmausfuehrung abgebrochen.\n";
        }



    }


    //Erfolgreiches Beenden der Main Funktion.
    return 0;
}
