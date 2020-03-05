/*
 *      File  : Genetic.hpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */

#ifndef GENETIC_HPP
#define GENETIC_HPP

#include "Brute.hpp"

class Genetic
{
    public:
        Genetic(int,int,int,int);
        void runGenerations();
        float findDistance(int[], float[][MAXCITIES]); 
    private:
        int numofGenerations;
        int numOfTours;
        int numOfCities;
        int percentGeneration;
        int tour[MAXCITIES];

};


#endif