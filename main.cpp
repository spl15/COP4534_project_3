/*
 *      File  : main.cpp
 *      Author: Stephen Lamalie
 *      Course: COP4534
 *      Proj  : Project 03
 */

//#include "brute.hpp"
#include "Genetic.hpp"

void prompt(int*, int*, int*, int*);
void populateDistance(float[][MAXCITIES]);

// so i dont have to type std:: every time
using std::cout;
using std::cin;
using std::endl;


int main()
{
    // delcare user input 
    int numOfCities; // number of cities 
    int tours; // how many tours in a given generation
    int generations; // the number fo generations to run 
    int percentGeneration; // the percent of a generation that will have mutations
    timespec start;
    timespec finish;
    int min;
    long sec;
    double ns;
    double total;


    // the array to hold the adjacency matrix
    float distance[MAXCITIES][MAXCITIES];
    populateDistance(distance);
    
    prompt(&numOfCities, &tours, &generations, &percentGeneration);
    Brute myBrute(numOfCities);
    
    //std::cout << myBrute.factorial(numOfCities) << std::endl;
    clock_gettime(CLOCK_REALTIME, &start);
    myBrute.findShortestRoute(distance);
    clock_gettime(CLOCK_REALTIME, &finish);
    
    sec = (finish.tv_sec - start.tv_sec);
    ns = (finish.tv_nsec - start.tv_nsec) / 1000000000.0;
    min = (int)sec / 60; 
    sec = sec % 60;
    total = sec + ns;
    cout << "and it took " << min << " minutes and " << (total) << " seconds" << endl;
    
    return 0;
}
void populateDistance(float arry[][MAXCITIES])
{
    
    std::ifstream inputTextFile("distances.txt");
    if(inputTextFile.is_open())
    {
        std::string value = "";
        float myValue = 0.0;
            
        for(int i = 0;i < MAXCITIES; i++)
        {
            for(int j = 0; j < MAXCITIES; j++)
            {
                if(i == j)
                {
                    myValue = 0.0;
                }
                else
                {
                    getline(inputTextFile, value);
                    myValue = std::stof(value);
                }
                arry[i][j] = myValue;
            }
        }
        

        inputTextFile.close();
    }
    else
    {
        std::cerr << "Unable to open file"<< std::endl;        
    }
}
void prompt(int* num, int* tour, int* gen, int* percent)
{   
    cout << "Please enter the following values that are needed: " << endl;

    cout << "The number of cities to run ";
    cin >> *num;
    while((*num < 1) || (*num > 20))
    {
        cout << "Must be between 1 and 20 cities, please try again: ";
        cin >> *num; 
    }

    cout << "how many individual tours are in a given generation: ";
    cin >> *tour;

    cout << "how many generations to run: ";
    cin >> *gen;

    cout << "what percent of a generation should be comprised of mutations: ";
    cin >> *percent;
    while((*percent < 0) || (*percent > 100))
    {
        cout << "percent needs to be from (0 - 100), please try again: ";
        cin >> *percent;
    }
}