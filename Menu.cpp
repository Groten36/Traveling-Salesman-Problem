//
// Created by magda on 05.01.20.
//

#include "Menu.h"
#include <iostream>
#include<fstream>
Menu::Menu(){
    this->menu=99;
    this->matrix = Matrix();
    this->bf=BruteForce();

    this->bb=BranchBound();
    this->sa=SimulatedAnnealing();
    this->ts=TabuSearch();
    this->timer=Timer();

}
void Menu::launch() {
    string file;
    int threads;
    //bb.read(file);
    //ofstream out;
    while(true){
        // std::cout<< sizeof(start);

        std::cout<<"\n1.Stwórz macierz\n";
        std::cout<<"2.Wyświetl macierz\n";
        std::cout<<"3.Generuj losową permutację\n";
        std::cout<<"4.Wyczusc macierz\n";
        std::cout<<"5.Rozwiąż metodą Brute Force\n";
        std::cout<<"5.Rozwiąż metodą Branch and Bound\n";
        std::cout<<"7.Rozwiąż metodą Symulowanego wyżarzania\n";
        std::cout<<"8.Rozwiąz metodą tabu search\n";
        std::cout<<"9.Testy automatyczne\n";
        std::cout<<"8.Rozwiąz metodą tabu search\n";


        std::cout<<"0.Wyjdź";
        std::cin>>menu;
        long time;

        switch(menu){

            case 1:{std::cout<<"Wybierz plik z danymi";std::cin>>file;matrix.read(file);bf.read(file);sa.read(file);ts.read(file); break;}
            case 2:matrix.display();break;
            case 3:matrix.random();break;
            case 4:matrix.clear();break;
            case 5:std::cout<<"Wątki: ";std::cin>>threads;timer.start();bf.solve(threads);timer.stop();std::cout<<" Czas wykonania: "<<timer.time()<< " milisekund";break;
            case 6:std::cout<<"Wątki: ";std::cin>>threads;timer.start();bb.solve(threads);timer.stop();std::cout<<" Czas wykonania: "<<timer.time()<<" milisekund";break;

            case 7:timer.start();sa.solve();timer.stop();std::cout<<" Czas wykonania: "<<timer.time()<<" milisekund";break;
            case 8:timer.start();ts.solve();timer.stop();std::cout<<" Czas wykonania: "<<timer.time()<<" milisekund";break;
            case 9:{
                std::ofstream out("TS21.txt");
                {
                    for(auto i=0;i<3;i++){
                        timer.start();
                        ts.solve();
                        timer.stop();
                        time = timer.time();
                        if (out) {
                            out << ts.minCost<<" "<<time << "\n";
                            out.flush();
                        }
                        else
                            std::cout << "ERROR";
                        // out.close();
                    }
                    out.close();}
                break;}



            case 0:return ;

        }
    }
}