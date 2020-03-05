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
float Genetic::findDistance(int route[], float distances[][MAXCITIES])
{
    float temp = distances[0][route[0]];
    
    
    for(int i = 0;i < (numToTest - 1);i++)
    {
        temp = temp + distances[route[i]][route[i+1]];
    }
    temp = temp + distances[route[numToTest - 1]][route[0]];
    

    return temp;
}
int* mutate(int myArray[], int num)
{
   int temp[num];



    return temp;
}
