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
    Genetic::inSpaceA = 1;
}
void Genetic::mutate(int myArray[], int num)
{
    int temp = myArray[0];
    myArray[0] = myArray[num-2];
    myArray[num-2] = temp;

    temp = myArray[1];
    myArray[1] = myArray[num-1];
    myArray[num-1] = temp;

    temp = myArray[2];
    myArray[2] = myArray[num-3];
    myArray[num-3] = temp;
}
