#pragma once

//Eine Fuktion, mit 2 Parametern (eine Zahl und ein Array). Es wird die Zahl mit jedem Arrayelement verglichen und dessen Index ausgegeben, wenn sie gleich sind.
int vergleicheUndFindeIndex(int zahl, int array[])
{
    for (int i = 0; i <= 21; i++)
    {
        if (zahl == array[i])
        {
            return i;
        }
    }
}

//Errechnen der Elemente mit einem gr��eren Index als indexDerUserEingabeImArray. Input sind Index der UserEingabe (durch vergleicheUndFindeIndex berechnet) und
//das Array mit den m�glichen W�rfen. Gibt Anzahl von Elementen mit h�herem Index als der InputZahl aus.
int findeAnzahlvonHoeherenElementen(int indexUserEingabe, int array[])
{
    int zaehler = 0;
    for (int i = indexUserEingabe; i < 21; i++)
    {
        zaehler++;

    }
    return zaehler;
}

