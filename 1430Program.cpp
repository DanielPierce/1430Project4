//------------------------------------------------------------------------
//
// Name:    
//
// Course:  CS 1430, Section 7, Fall 2016
//
// Purpose: 
//
// Input:   
//
// Output:  
//------------------------------------------------------------------------
// 
// TODO1: Right-click to the right of the last dash above, select 
//   Guidelines, and then select Add Guideline.  This will place a 
//   Guideline at the end of column 74.  Do not go past it!
//   You can also change the color of the Guideline by right-clicking.
// TODO2: To reformat, click Edit -> Advanced -> Format Document.
//   This will clean up the formatting if you have issues.
//   Then recheck to make sure line lengths are inside the Guidelines.
// The above TODO's assume templates were properly installed as per
// Step 4 of the Visual_Studio_2015_Installation document at:
//     K:\Academic\CSSE\Software\VisualStudo2015_Installation

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Main - Danny
// Add - John
// Delete - Danny
// Print - John
// Sort N - Danny
// Sort S - John
// Raise - Danny
// Average - John
// Find - Danny


const int MAX_EMPLOYEES = 5;
const int NAME_SPACING = 20;

int Find(const string names[], int num, string name);
bool Delete(string names[], int salaries[], int num, string name);
bool SalarySort(string names[], int salaries[], int num);
bool GiveRaise(int salaries[], int num, int raiseAmount);


int main()
{
   char command;
   string nameParam;
   int salaryParam;
   char sortParam;
   string names[MAX_EMPLOYEES];
   int salaries[MAX_EMPLOYEES];
   int num = 0;
   cout << fixed << showpoint << setprecision(2) << endl;
   cin >> command;
   while (cin)
   {
      if (command == 'A')
      {
         //add
      }

      else if (command == 'D')
      {
         cin >> nameParam;
         if (Delete(names, salaries, num, nameParam))
            cout << nameParam << " removed from the company." << endl;
         else
            cout << nameParam << " not removed. Doesn't exist in the"
            << " company." << endl;
      }

      else if (command == 'P')
      {
         //print
      }

      else if (command == 'S')
      {
         cin >> sortParam;
         if (sortParam == 'N')
            int a; // placeholder - delete and replace wit actual code
            //sort by name
         else
            if (SalarySort(names, salaries, num))
               int a;

      }

      else if (command == 'R')
      {
         cin >> salaryParam;
         if (GiveRaise(salaries, num, salaryParam))
            cout << "A raise of " << salaryParam << "was given to all"
            << endl;
         else
            cout << "Couldn't give raise, no employees";

      }

      else if (command == 'V')
      {
         //average
      }

      else
         cout << "Bad command!" << endl;
      cin >> command;
   }

   return 0;
}

int Find(const string names[], int num, string name)
{
   int index = -1;
   for (int i = 0; i < num; i++)
      if (names[i] == name)
      {
         index = i;
      }
   return index;
}

bool Delete(string names[], int salaries[], int num, string name)
{
   int index = Find(names, num, name);
   if (index >= 0)
   {
      names[index] = names[num - 1];
      salaries[index] = salaries[num - 1];
      num -= 1;
      return true;
   }
   else
      return false;
}


//fix later
bool SalarySort(string names[], int salaries[], int num)
{
   int min = 0;
   for (int i = 1; i < num; i++)
      if (salaries[i] < salaries[min])
         min = salaries[i];
   return true;
}

bool GiveRaise(int salaries[], int num, int raiseAmount)
{
   if (num > 0)
   {
      for (int i = 0; i < num; i++)
         salaries[i] += raiseAmount;
      return true;
   }
   return false;
}