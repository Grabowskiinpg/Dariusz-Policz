//
// Created by Bartosz on 06.05.2019.
//

#include "calc_BB.hpp"



float pierw(int stopien_pierw , float liczba_podpierw ){

    if(liczba_podpierw<0){
        liczba_podpierw=fabs(liczba_podpierw);

        std::cout << -1*exp(log(liczba_podpierw)/stopien_pierw) << std::endl;

        return -1*exp(log(liczba_podpierw)/stopien_pierw);
    }

    else{
        std::cout << exp(log(liczba_podpierw)/stopien_pierw) << std::endl;

        return exp(log(liczba_podpierw)/stopien_pierw);
    }
}
