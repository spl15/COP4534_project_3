/*
 *      File  : Brute.hpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */
#ifndef BRUTE_HPP
#define BRUTE_HPP

#include "Matrix.hpp"

class Brute
{
    public:
        Brute(int);//float[MAXCITIES][MAXCITIES], int);
        //float distance[MAXCITIES][MAXCITIES];
        //void printTest();
        void findShortestRoute(Matrix);
        void perm1(); 
        long factorial(long);
        void swap(int, int);
    private:
        int route[MAXCITIES];
        int numToTest;
};

#endif