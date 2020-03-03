/*
 *      File  : brute.hpp
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

class brute
{
    public:
        brute(float[MAXCITIES][MAXCITIES], int);
        //brute(const brute &bp);
	//brute& operator = (const brute &bp);
	//~brute();
       	int numToTest;
        float distance[MAXCITIES][MAXCITIES];
        void printTest();
        void findShortestRoute();
        float findDistance(int[]);
        void perm1(); 
        int factorial(int);
        void swap(int, int);
        int route[MAXCITIES];
};

#endif
