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
        void runGenerations(Matrix);
        void perm(int,int,int,int,int);
        void mutate(int[],int);
    private:
        int numofGenerations;
        int numOfTours;
        int numOfCities;
        int percentGeneration;
        int tour[MAXCITIES];
        int workspaceA[MAXCITIES][MAXCITIES + 1];
        int workspabeB[MAXCITIES][MAXCITIES + 1];
        int inSpaceA;

};


#endif