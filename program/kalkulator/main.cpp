#include "include/calc_RG.hpp"
#include "include/calc_MG.hpp"
#include "include/calc_BB.hpp"
#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "KALKULATOR " << std::endl << std::endl;
    do {
        int nrdzial;

        std::cout << "1.Dodawanie" << std::endl;
        std::cout << "2.Odejmowanie" << std::endl;
        std::cout << "3.Mnozenie" << std::endl;
        std::cout << "4.Dzielenie" << std::endl;
        std::cout << "5.Procent" << std::endl;
        std::cout << "6.Sin(x)" << std::endl;
        std::cout << "7.Cos(x)" << std::endl;
        std::cout << "8.Tan(x)" << std::endl;
        std::cout << "9.Cot(x)" << std::endl;
        std::cout << "10.Asin(x)" << std::endl;
        std::cout << "11.Acos(x)" << std::endl;
        std::cout << "12.Atan(x)" << std::endl;
        std::cout << "13.Acot(x)" << std::endl;
        std::cout << "14.sinh(x)" << std::endl;
        std::cout << "15.cosh(x)" << std::endl;
        std::cout << "16.tanh(x)" << std::endl;
        std::cout << "17.coth(x)" << std::endl;
        std::cout << "18.Wartosc bezwzgledna" << std::endl;
        std::cout << "19.modulo" << std::endl;
        std::cout << "20.floor" << std::endl;
        std::cout << "21.Zaokraglenie liczby w gore" << std::endl;
        std::cout << "22.Silnia" << std::endl;
        std::cout << "23.Zamiana na stopnie" << std::endl;
        std::cout << "24.Zamiana na radiany" << std::endl;
        std::cout << "25.Potegowanie" << std::endl;
        std::cout << "26.Pierwiastkowanie" << std::endl;
        std::cout << "27.Logarytm naturalny" << std::endl;
        std::cout << "28.Logarytm dziesietny" << std::endl;
        std::cout << "29.sec" << std::endl;
        std::cout << "30.cosec" << std::endl;
        std::cout << "31.Operacje  na jednomianach" << std::endl;


        std::cin >> nrdzial;


        if (nrdzial < 1 || nrdzial > 31) {
            std::cout << "Niestety wybrales zly zakres" << std::endl;

            return 0;
        }


        switch (nrdzial) {

            case 1 :        // Dodawanie

                int liczba1;
                int liczba2;

                std::cout << "Podaj liczbe 1" << std::endl;
                std::cin >> liczba1;
                std::cout << "Podaj liczbe 2" << std::endl;
                std::cin >> liczba2;

                std::cout << "                  Wartosc jest rowna:" << sum((float) liczba1, (float) liczba2)
                          << std::endl << std::endl;

                break;


            case 2:
                int liczba3;
                int liczba4;

                std::cout << "Podaj liczbe 1" << std::endl;
                std::cin >> liczba3;
                std::cout << "Podaj liczbe 2" << std::endl;
                std::cin >> liczba4;

                std::cout << "                  Wartosc jest rowna:" << subtraction((float) liczba3, (float) liczba4)
                          << std::endl << std::endl;

                break;

            case 3:
                int liczba5;
                int liczba6;

                std::cout << "Podaj liczbe 1" << std::endl;
                std::cin >> liczba5;
                std::cout << "Podaj liczbe 2" << std::endl;
                std::cin >> liczba6;

                std::cout << "                  Wartosc jest rowna:" << multiplication((float) liczba5, (float) liczba6)
                          << std::endl << std::endl;
                break;


            case 4:
                int liczba7;
                int liczba8;

                std::cout << "Podaj liczbe 1" << std::endl;
                std::cin >> liczba7;
                std::cout << "Podaj liczbe 2" << std::endl;
                std::cin >> liczba8;

                std::cout << "                  Wartosc jest rowna:" << division((float) liczba7, (float) liczba8)
                          << std::endl << std::endl;

                break;

            case 5:
                int liczba9;
                int liczba10;

                std::cout << "Podaj ulamek, licznik potem mianownik" << std::endl;
                std::cin >> liczba9;
                std::cin >> liczba10;


                std::cout << "                  Wartosc jest rowna:" << percent((float) liczba9, (float) liczba10)
                          << "%" << std::endl << std::endl;

                break;

            case 6 :

                float liczba11;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba11;


                std::cout << "                  Sin(" << liczba11 << ") =" << sin((float) liczba11) << std::endl
                          << std::endl;

                break;

            case 7 :

                float liczba12;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba12;


                std::cout << "                  Cos(" << liczba12 << ") =" << cos((float) liczba11) << std::endl
                          << std::endl;

                break;

            case 8 :

                float liczba13;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba13;


                std::cout << "                  Tan(" << liczba13 << ") =" << cos((float) liczba13) << std::endl
                          << std::endl;

                break;

            case 9 :

                float liczba14;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba14;


                std::cout << "                  Cot(" << liczba14 << ") =" << cot((float) liczba14) << std::endl
                          << std::endl;

                break;

            case 10 :

                float liczba15;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba15;


                std::cout << "                  Asin(" << liczba15 << ") =" << asin((float) liczba15) << std::endl
                          << std::endl;

                break;

            case 11 :

                float liczba16;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba16;


                std::cout << "                  Acos(" << liczba16 << ") =" << acos((float) liczba16) << std::endl
                          << std::endl;

                break;

            case 12 :

                float liczba17;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba17;


                std::cout << "                  Atan(" << liczba17<< ") =" << atan((float) liczba17) << std::endl
                          << std::endl;

                break;

            case 13 :

                float liczba18;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba18;


                std::cout << "                  Acot(" << liczba18 << ") =" << acot((float) liczba18)<< std::endl
                          << std::endl;

                break;

            case 14 :

                float liczba19;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba19;


                std::cout << "                  Sinh(" << liczba19 << ") =" << sinh((float) liczba19)<< std::endl
                          << std::endl;

                break;

            case 15 :

                float liczba20;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba20;


                std::cout << "                  Cosh(" << liczba20 << ") =" << cosh((float) liczba20)<< std::endl
                          << std::endl;

                break;

            case 16 :

                float liczba21;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba21;


                std::cout << "                  Tanh(" << liczba21 << ") =" << tanh((float) liczba21)<< std::endl
                          << std::endl;

                break;

            case 17 :

                float liczba22;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba22;


                std::cout << "                  Coth(" << liczba22 << ") =" << coth((float) liczba22)<< std::endl
                          << std::endl;

                break;

            case 18 :

                float liczba23;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba23;


                std::cout << "                  Wartosc bezwzgledna liczby(" << liczba23 << ") =" << abs((float) liczba23)<< std::endl
                          << std::endl;

                break;

            case 19 :

                int liczba24;
                int liczba25;

                std::cout << "Podaj  liczbe 1" << std::endl;
                std::cin >> liczba24;
                std::cout <<std::endl<< "Podaj  liczbe 2" << std::endl;
                std::cin >> liczba25;


                std::cout << "                  Reszta dzielenia=" << modulo((int) liczba24, (int) liczba25)<< std::endl
                          << std::endl;

                break;

            case 20 :

                float liczba26;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba26;


                std::cout << "                  Wartosc (" << liczba26 << ") =" << floor((float) liczba26)<< std::endl
                          << std::endl;

                break;

            case 21 :

                float liczba27;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba27;


                std::cout << "                  Zaokraglenie liczby  (" << liczba27 << ") =" << floor((float) liczba27)<< std::endl
                          << std::endl;

                break;

            case 22 :

                float liczba28;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba28;


                std::cout << "                  Silnia  (" << liczba28 << ") =" << factorial( liczba28)<< std::endl
                          << std::endl;

                break;

            case 23 :

                float liczba29;

                std::cout << "Podaj  kąt" << std::endl;
                std::cin >> liczba29;


                std::cout << "                  Zamieniono na stopnie  (" << liczba29 << ") =" << degrees( liczba29)<< std::endl
                          << std::endl;

                break;

            case 24 :

                float liczba30;

                std::cout << "Podaj  kąt" << std::endl;
                std::cin >> liczba30;


                std::cout << "                  Zamieniono na radiany  (" << liczba30 << ") =" << radians( liczba30)<< std::endl
                          << std::endl;

                break;

            case 25 :

                int liczba31;
                float liczba32;

                std::cout << "Podaj  liczbe 1" << std::endl;
                std::cin >> liczba31;
                std::cout <<std::endl<< "Podaj  potege" << std::endl;
                std::cin >> liczba32;


                std::cout << "                  Wynik =" << potega((float) liczba31, (float) liczba32)<< std::endl
                          << std::endl;

                break;

            case 26 :

                int liczba33;
                float liczba34;

                std::cout << "Podaj  stopien pierwiastka" << std::endl;
                std::cin >> liczba33;
                std::cout <<std::endl<< "Podaj  liczbe" << std::endl;
                std::cin >> liczba34;


                std::cout << "                  Wynik =" << pierw((float) liczba33, (float) liczba34)<< std::endl
                          << std::endl;

                break;

            case 27 :

                float liczba35;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba35;


                std::cout << "                  ln(" << liczba35 << ") =" << ln(liczba35)<< std::endl
                          << std::endl;

                break;

            case 28 :

                float liczba36;

                std::cout << "Podaj  liczbe" << std::endl;
                std::cin >> liczba36;


                std::cout << "                  log10(" << liczba36 << ") =" << log_10(liczba36)<< std::endl << std::endl;

                break;

            case 29 :

                float liczba37;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba37;


                std::cout << "                  sec(" << liczba37 << ") =" << sec((float)liczba37)<< std::endl << std::endl;

                break;
                


            case 30 :

                float liczba38;

                std::cout << "Podaj  kat" << std::endl;
                std::cin >> liczba38;


                std::cout << "                  cosec(" << liczba38 << ") =" << cosec((float)liczba38)<< std::endl << std::endl;

                break;

            /*
            case 31 :

                int nrdzial2;

                double index;
                double wsp;

                std::cout << "Podaj index jednomianu" << std::endl;
                std::cin >> index;
                std::cout << "Podaj wspolczynnik" << std::endl;
                std::cin >> wsp;
                Monomial m = Monomial(wsp,index);
                std::cout << "1.Rozniczka" << std::endl;
                std::cout << "2.Calkowanie" << std::endl;
                std::cout << "3.Calkowanie oznaczone" << std::endl;

                std::cin >> nrdzial2;


                if (nrdzial2 < 1 || nrdzial2 > 3) {
                    std::cout << "Niestety wybrales zly zakres" << std::endl;

                    return 0;
                }

                switch (nrdzial2) {

                    case 1 :
                        Monomial m_wyn = dirativeOfMonomial(m);
                        std::cout << m_wyn.get_numeric() << "x^" << m_wyn.get_index()<< std::endl<< std::endl;
                        break;
                    case 2 :
                        Monomial m_wyn2 = integralOfMonomialindefined(m);
                        std::cout << m_wyn2.get_numeric() << "x^" << m_wyn2.get_index()<< std::endl<< std::endl;
                        break;
                    case 3 :
                        double start;
                        double koniec;
                        std::cout << "Podaj lewa granice" << std::endl;
                        std::cin >> start;
                        std::cout << "Podaj prawa granice" << std::endl;
                        std::cin >> wsp;

                        double m_wyn3 = integralOfMonomial(m,start,koniec);
                        std::cout << m_wyn3<< std::endl<< std::endl;
                        break;
                }
                break;
                */
            
            //poniższe są moje ~RG
            /*case 31 : { //exponent
                double x;
                std::cout << "Podaj wykładnik:" << std::endl;
                std::cin >> x;
                std::cout << "e^" << x << " = " << exponent(x) << std::endl << std::endl;
                break;
            }

            case 32 : { //skalmultip
                std::vector<double> vec1, vec2;
                double input, size;
                std::cout<< "Podaj ilość składowych wektorów, a następnie ich wartości dla jednego i drugiego wektora:"<< std::endl;
                std::cin>>size;
                for(int i = 0; i<size; i++){
                    std::cin >> input;
                    vec1.push_back(input);
                }
                for(int i = 0; i<size; i++){
                    std::cin >> input;
                    vec2.push_back(input);
                }
                Vector<double> v1(vec1);
                Vector<double> v2(vec2);
                std::cout<<"[";
                for (const auto& e : vec1) std::cout << e << " ";
                std::cout << "]•[";
                for (const auto& e : vec2) std::cout << e << " ";
                std::cout << "] = " << skalmultip(v1, v2) << std::endl << std::endl;
                break;
            }

            case 33 : {//vecmultip
                std::vector<double> vec1, vec2;
                double input;
                std::cout << "Podaj składowe wektorów:" << std::endl;
                for (int i = 0; i < 3; i++){
                    std::cin>>input;
                    vec1.push_back(input);
                }
                for (int i = 0; i < 3; i++){
                    std::cin>>input;
                    vec2.push_back(input);
                }
                Vector<double> v3(vec1);
                Vector<double> v4(vec2);
                std::cout<<"[";
                for (const auto& e : vec1) std::cout << e << " ";
                std::cout << "]×[";
                for (const auto& e : vec2) std::cout << e << " ";
                std::cout << "] = [";
                Vector<double> v1(vec1);
                Vector<double> v2(vec2);
                Vector<double> res = vecmultip(v1, v2);
                for (const auto& e : res) std::cout << e << " ";
                std::cout << "]" << std::endl << std::endl;
                break;
            }

            case 34 : { //remember
                double x;
                std::cout << "Podaj liczbę do zapamiętania:" << std::endl;
                std::cin >> x;
                remember(Memo, x);
                std::cout << "Zapamiętano liczbę równą " << Memo << std::endl << std::endl;
                break;
            }

            case 35 : { //add or subtract complex
                std::vector<double> vec1, vec2;
                double input;
                std::cout << "Podaj części rzeczywiste i urojone liczb zespolonych:" << std::endl;
                for (int i = 0; i < 2; i++) {
                    std::cin >> input;
                    vec1.push_back(input);
                }
                for (int i = 0; i < 2; i++) {
                    std::cin >> input;
                    vec2.push_back(input);
                }
                Vector<double> v5(vec1);
                Vector<double> v6(vec2);
                Vector<double> v7(add_vectors(v5, v6));
                std::cout << v5[0] << " + " << v5[1] << "i + " << v6[0] << " + " << v6[1] << "i = ";
                std::cout << v7[0] << " + " << v7[1] << "i" << std::endl << std::endl;
                break;
            }

            case 36 : { //integral poly
                std::vector<Monomial> v;
                double numeric, index, size;
                std::cout<< "Podaj rozmiar wielomianu,a następnie kolejne współczynniki i wykładniki:";
                std::cin>>size;
                for(int i = 0; i< size; i++) {
                    std::cin >> numeric;
                    std::cin >> index;
                    Monomial m(numeric, index);
                    v.push_back(m);
                }
                Polynomial poly(v);
                std::cout << "Teraz podaj dolną i górną granicę całkowania:";
                double start, end;
                std::cin >> start;
                std::cin >> end;
                std::cout <<"Ta całka jest równa "<< integralOfPolynomial(poly, start, end) << std::endl << std::endl;
                break;
            }

            case 37 : {  //integral poly indefitited
                std::vector<Monomial> v;
                float numeric, index, size;
                std::cout<< "Podaj rozmiar wielomianu, a następnie jego kolejne współczynniki i wykładniki:";
                std::cin>>size;
                for(int i =0; i<size;i++) {
                    std::cin>>numeric;
                    std::cin >> index;
                    Monomial m(numeric, index);
                    v.push_back(m);
                }
                std::cout<<"∫(";
                Polynomial poly(v);
                for (std::size_t i = 0; i<size; i++) {
                    std::cout << poly[i].get_numeric() << "x^" << poly[i].get_index();
                    if(i != size - 1) std::cout<<" + ";
                }
                std::cout << ")dx = ";
                Polynomial res(integralOfPolynomialIndefinited(poly));
                for (std::size_t i = 0; i<size; i++) {
                    std::cout << res[i].get_numeric() << "x^" << res[i].get_index();
                    if(i != size - 1) std::cout<<" + ";
                }
                std::cout <<" + C"<< std::endl << std::endl;
                break;
            }*/

        }

    } while (1);

        return EXIT_SUCCESS;
    }

