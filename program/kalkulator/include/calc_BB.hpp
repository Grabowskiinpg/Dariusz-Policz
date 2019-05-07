//
// Created by Bartosz on 06.05.2019.
//

#ifndef PROGRAM_CAL_BB_HPP
#define PROGRAM_CAL_BB_HPP
#include <math.h>
#include <iostream>



template<typename T>
T potega(T a , T b )       // Potęgowanie , pamiętać, że każda liczba podniesiona do potęgi 0 daje wynik 1
{
    return pow(a,b);
}

template<typename T>
T pierwiastek(T a1 , T b1){
    T c1 = 1/b1 ;

    return pow(a1, c1) ;
}




/*float log(float l)                // Liczenie logarytmu naturalnego , należy pamiętać by x>0
{
    return std::log ;
}*/ //dałem Ci w komentarz to (Michał), bo zblokowałeś możliwość testów przez zły kod, który wyrzucał błąd

#endif //PROGRAM_CAL_BB_HPP
