// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <time.h>
#include <ratio>
#include <chrono>
#include <Windows.h>
#include <Psapi.h>
#include <stdio.h>


using namespace std;
using namespace std::chrono;

int main()
{
#pragma comment(lib,"psapi")
 // PROCESS_MEMORY_COUNTERS_EX pmc;
 //int a =  GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
 // SIZE_T virtualMemUsedByMe = pmc.PrivateUsage;

    int x = 0;
    int y = 0;
    int z = 0;


    steady_clock::time_point t1 = steady_clock::now();
    




    while (x < 90000)
    {
      x++;
      y++;
      z++;



      steady_clock::time_point t2 = steady_clock::now();

      duration<double> time_span = duration_cast<duration<double>>(t2 - t1);


      long int* ab;
      long int* ab2;
      long int* ab3;
      long int* ab4;
      long int* ab5;
      long int* ab6;

      //within three minutes, this should use up to 17 gigabytes of ram.
      //make sure to run this as x64, or else you will get a error.

      //This might work diffrently on diffrent computers. But within 20 seconds, it should consume 1 gigabyte of ram. 

      for (long int n = 0; n < 10000; n++)

      {


        string nToString = to_string(n);
        ab = new long int[900];

        ab2 = new long int[900];

       // ab3 = new long int;
        //ab4 = new long int;
        //ab5 = new long int;
        //ab6 = new long int;

        //string aToString = to_string(a);
        //string SizeToString = to_string(virtualMemUsedByMe);
       // cout << "current memory usage is " +  SizeToString << endl;
    
        cout << "Ab is " + nToString  << endl;
       // cout << "size of ab " + sizeof(ab) << endl;

        if (time_span.count() >= 23)
        {
          cout << " it has been 23 seconds, exiting...." << endl;
          exit(0);
        }


      }

      

    
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
