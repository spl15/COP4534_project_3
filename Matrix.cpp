/*
 *      File  : Matrix.cpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */

#include "Matrix.hpp"

Matrix::Matrix(float distance[MAXCITIES][MAXCITIES], int numCities)
{
    for(int i = 0;i < MAXCITIES;i++)
    {
        for(int j = 0;j < MAXCITIES;j++)
        {
            Matrix::edges[i][j] = distance[i][j];
        }
    }
    Matrix::numOfCities = numCities -1;
}
float Matrix::findDistance(int myArray[])
{

    float temp = Matrix::edges[0][myArray[0]];
    
    for(int i = 0;i < (Matrix::numOfCities - 1);i++)
    {
        temp = temp + Matrix::edges[myArray[i]][myArray[i+1]];
    }

    temp = temp + Matrix::edges[myArray[Matrix::numOfCities - 1]][myArray[0]];
    

    return temp;
}