//
// Created by Bartosz on 06.05.2019.
//

#ifndef PROGRAM_CAL_BB_HPP
#define PROGRAM_CAL_BB_HPP
#include <math.h>
#include <iostream>



template<typename T>
T potega(T podstawa , T pot )       // Potęgowanie , pamiętać, że każda liczba podniesiona do potęgi 0 daje wynik 1
{
    return pow(podstawa,pot);
}


float pierw(int stopien_pierw , float liczba_podpierw ) ;



/*float log(float l)                // Liczenie logarytmu naturalnego , należy pamiętać by x>0
{
    return std::log ;
}*/ //dałem Ci w komentarz to (Michał), bo zblokowałeś możliwość testów przez zły kod, który wyrzucał błąd

#endif //PROGRAM_CAL_BB_HPP
