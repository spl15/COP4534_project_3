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
        void perm(int,int,int,int,int);
        int* mutate(int[]);
        int numofGenerations;
        int numOfTours;
        int numOfCities;
        int percentGeneration;
        int tour[MAXCITIES];
        int workspaceA[][MAXCITIES + 11];
        int workspabeB[][MAXCITIES + 1];
        int inSpaceA;

};


#endif