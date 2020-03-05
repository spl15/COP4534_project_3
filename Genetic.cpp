/*
 *      File  : Genetic.cpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */
#include "Genetic.hpp"

Genetic::Genetic(int numCities, int numGenerations, int numTours, int percent)
{
    Genetic::numOfCities = numCities;
    Genetic::numOfTours = numTours;
    Genetic::numofGenerations = numGenerations;
    Genetic::percentGeneration = percent;
}
