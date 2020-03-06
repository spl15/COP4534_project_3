#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#define MAXCITIES 20

class Matrix
{
    public:
        Matrix(float[MAXCITIES][MAXCITIES], int);
        float findDistance(int[]);
    private:
        float edges[MAXCITIES][MAXCITIES];
        int numOfCities;
};

#endif