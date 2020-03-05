/*
 *      File  : Brute.hpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */
#ifndef BRUTE_HPP
#define BRUTE_HPP

#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#define MAXCITIES 20

class Brute
{
    public:
        Brute(int);//float[MAXCITIES][MAXCITIES], int);
        //float distance[MAXCITIES][MAXCITIES];
        //void printTest();
        void findShortestRoute(float[][MAXCITIES]);
        float findDistance(int[], float[][MAXCITIES]);
        void perm1(); 
        long factorial(long);
        void swap(int, int);
    private:
        int route[MAXCITIES];
        int numToTest;
};

#endif