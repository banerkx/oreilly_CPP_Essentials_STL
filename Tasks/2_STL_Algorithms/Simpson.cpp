/**************************************************************************************************
*
* \file Simpson.cpp
* \brief C++ Training - STL Programming Task
*
* Copyright (C) 2015-2023 Klaus Iglberger - All Rights Reserved
*
* This file is part of the C++ training by Klaus Iglberger. The file may only be used in the
* context of the C++ training or with explicit agreement by Klaus Iglberger.
*
* Task: Implement the empty functions to perform the following operations on the Simpson characters:
*       1. Print all persons to the screen
*       2. Randomize their order ('r')
*       3. Find the youngest person ('y')
*       4. Order them by first name ('f')
*       5. Order them by last name while preserving the order between equal elements ('l')
*       6. Order them by age while preserving the order between equal elements ('a')
*       7. Put all Simpsons first without affecting the general order of persons ('s')
*       8. Compute the total age of all persons ('t')
*       9. Put the last person first, moving all others by one position ('0')
*       10. Determine the fourth oldest person as quickly as possible ('4')
*
**************************************************************************************************/

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <iomanip>
#include <numeric>
#include <random>
#include <string>
#include <vector>

// C++20
//#include <format>
//#include <ranges>


struct Person
{
   std::string firstname;
   std::string lastname;
   int age;
};

std::ostream& operator<<( std::ostream& os, Person const& person )
{
   return os << std::setw(11) << std::left  << person.firstname
             << std::setw(11) << std::left  << person.lastname
             << std::setw(3)  << std::right << person.age;

   // C++20 format solution
   //os << std::format( "{:<11}{:<11}{:>3}", person.firstname, person.lastname, person.age );
   //return os;
}




template< typename Table >
void print( Table const& table )
{
   // TODO: Print all persons to the screen
}

template< typename Table >
void random_order( Table& table )
{
   // TODO: Randomize their order ('r')
}

template< typename Table >
void find_youngest( Table const& table )
{
   // TODO: Find the youngest person ('y')

   //auto const pos = ...;
   //std::cout << "Youngest person = " << pos->firstname << " " << pos->lastname << "\n";
}

template< typename Table >
void order_by_firstname( Table& table )
{
   // TODO: Order them by first name ('f')
}

template< typename Table >
void order_by_lastname( Table& table )
{
   // TODO: Order them by last name while preserving the order between equal elements ('l')
}

template< typename Table >
void order_by_age( Table& table )
{
   // TODO: Order them by age while preserving the order between equal elements ('a')
}

template< typename Table >
void simpsons_first( Table& table )
{
   // TODO: Put all Simpsons first without affecting the general order of persons ('s')
}

template< typename Table >
void compute_total_age( Table const& table )
{
   // TODO: Compute the total age of all persons ('t')

   //int const age = ...;
   //std::cout << "Total age = " << age << "\n";
}

template< typename Table >
void last_to_first( Table& table )
{
   // TODO: Put the last person first, moving all others by one position ('0')
}

template< typename Table >
void fourth_oldest( Table& table )
{
   // TODO: Determine the fourth oldest person as quickly as possible ('4')
   //       Note that you are allowed to change the order of persons.
}




int main()
{
   std::vector<Person> table =
      { Person{ "Homer",      "Simpson",    38 }
      , Person{ "Marge",      "Simpson",    34 }
      , Person{ "Bart",       "Simpson",    10 }
      , Person{ "Lisa",       "Simpson",     8 }
      , Person{ "Maggie",     "Simpson",     1 }
      , Person{ "Hans",       "Moleman",    33 }
      , Person{ "Ralph",      "Wiggum",      8 }
      , Person{ "Milhouse",   "Van Houten", 10 }
      , Person{ "Ned",        "Flanders",   60 }
      , Person{ "Jeff",       "Albertson",  45 }
      , Person{ "Montgomery", "Burns",     104 } };

   char command;

   while( std::cout << "Enter command: " && std::cin >> command )
   {
      switch( command )
      {
      case 'r':
         random_order( table );
         break;

      case 'y':
         find_youngest( table );
         break;

      case 'f':
         order_by_firstname( table );
         break;

      case 'l':
         order_by_lastname( table );
         break;

      case 'a':
         order_by_age( table );
         break;

      case 's':
         simpsons_first( table );
         break;

      case 't':
         compute_total_age( table );
         break;

      case '0':
         last_to_first( table );
         break;

      case '4':
         fourth_oldest( table );
         break;

      default:
         return EXIT_SUCCESS;
      }

      print( table );
   }

   return EXIT_SUCCESS;
}
