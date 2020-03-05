/*
 *      File  : brute.cpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */

#include "Brute.hpp"

Brute::Brute(int len)//float myarray[MAXCITIES][MAXCITIES], int len)
{
    Brute::numToTest = len -1;
    //route = new int[numToTest];

    for(int i = 0; i < numToTest;i++)
    {
        route[i] = i + 1;
    }
    /*
    for(int i = 0; i < MAXCITIES; i++)
    {
        for(int j = 0; j < MAXCITIES; j++)
        {
            distance[i][j] = myarray[i][j];
        }
    }
    */
}
void Brute::swap(int x, int y)
{
    int temp;
    temp = this->route[x];
    this->route[x] = this->route[y];
    this->route[y] = temp;
}
float Brute::findDistance(int myArray[], float distances[][MAXCITIES])
{
    float temp = distances[0][myArray[0]];
    
    
    for(int i = 0;i < (numToTest - 1);i++)
    {
        temp = temp + distances[myArray[i]][myArray[i+1]];
    }
    temp = temp + distances[myArray[numToTest - 1]][myArray[0]];
    

    return temp;
}/*
void brute::perm1()
{
    int n,m,k,p,q,i;
    n = factorial(numToTest);
    printTest();
    for(i = 1;i < n;i++)
    {
        m = numToTest - 2;
        while(test[m] > test[m+1])
        {
            m = m - 1;
        }
        k = numToTest - 1;
        while(test[m] > test[k])
        {
            k = k - 1;
        }
        swap(m,k);
        p = m + 1;
        q = numToTest - 1;
        while(p < q)
        {
            swap(p,q);
            p++;
            q--;
        }
        printTest();
    }
}
void brute::printTest()
{
    for(int i = 0; i < numToTest ;i++)
    {   
        std::cout << route[i];
    }
    std::cout << std::endl;
}*/
long Brute::factorial(long x)
{
    if(x == 0)
    {
        return 1;
    }
    else
    {
        //int total = 1;
        //for(int i = 1; i <= x;i++)
        //{
         //   total *= i;
        //}
        return x * factorial(x-1);//total;
    }
}
void Brute::findShortestRoute(float distances[][MAXCITIES])
{
    float temp;
    int m,k,p,q,i,j,h;
    long n;
    n = factorial(numToTest);
    float min;
    int winner[numToTest];
    for(i = 0;i < numToTest;i++)
    {
        winner[i] = route[i];
    }
    min = findDistance(winner, distances);
   int count = 1;
   std::cout << n << std::endl;
   //std::cout << factorial(numToTest) << std::endl;/*
    for(i = 1;i < n;i++)
    {
        ++count;
        m = numToTest - 2;
        while(route[m] > route[m+1])
        {
            m = m - 1;
        }
        k = numToTest - 1;
        while(route[m] > route[k])
        {
            k = k - 1;
        }
        swap(m,k);
        p = m + 1;
        q = numToTest - 1;
        while(p < q)
        {
            swap(p,q);
            p++;
            q--;
        }
        temp = findDistance(route, distances);
        if(temp < min)
        {
            for(j = 0;j < numToTest;j++)
            {
                 winner[j] = route[j];
            }
            min = findDistance(winner, distances);
        }
    }
    std::cout << count << std::endl;
    std::cout << "Shortest route is: ";
    std::cout << "0" << ",";
    for(h = 0;h < numToTest;h++)
    {
        std::cout << winner[h] << ","; 
    }
    std::cout << "0" << std::endl;
    std::cout << "With a weigth of: " << min << std::endl; 
}