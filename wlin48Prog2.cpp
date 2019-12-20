/* ------------------------------------------------
 prog2memory.cpp

 Program #2: Memory game of guessing which X or O changed.
 Class: CS 141
 Author: Emily Lin
 Lab: Tues 1pm
 System:  C++ Mac Xcode
 -----------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
using namespace std;



void displayHeader();
void drawBoard();
void assignBoardElement();
int generateOddParity(int &boardTotal, char &convertIntToChar);
void checkOddParity();
char readHelperInput(char &helperInput1, char &helperInput2);
int regenerateBoard(int &boardTotal);
void changeBoard(char &helperInput1, char &helperInput2);
void readPlayerInput(char &helperInput1, char &helperInput2, char playerInput1,
                     char playerInput2);


char p0, p1, p2, p3, p4, p5,
     p6, p7, p8, p9, p10, p11,
     p12, p13, p14, p15, p16, p17,
     p18, p19, p20, p21, p22, p23,
     p24, p25, p26, p27, p28, p29,
     p30, p31, p32, p33, p34, p35;





//In this function, will print out the header
void displayHeader()
{
   cout << "Author: Emily Lin" << endl;
   cout << "Lab: Tues 1pm" << endl;
   cout << "Program #2, Memory Game" << endl << endl;

   cout << "Welcome to the memory game!" << endl << endl;
   cout << "Look away from the board and have a helper enter r" << endl;
   cout << "to randomize the board until they have a random board" << endl;
   cout << "that they like.  Then you glance at it and try to" << endl;
   cout << "imprint it in your mind and look away.  Your helper" << endl;
   cout << "will then select a single piece to be flipped by" << endl;
   cout << "choosing its row and column.  The changed board is then" << endl;
   cout << "displayed. You then must try to guess which one it was." << endl;
   cout << "Enter x to exit the program." << endl << endl;
}





//In this function, will assign each board element
void assignBoardElement()
{
   //Assign 36 element to a random value. If the value is odd, assign it ot X. If the value
   //is even, assign it to O
   p0 = rand() % 2;
   if(p0 != 0)
      p0 = 'X';
   else
      p0 = 'O';


   p1 = rand() % 2;
   if(p1 != 0)
      p1 = 'X';
   else
      p1 = 'O';


   p2 = rand() % 2;
   if(p2 != 0)
      p2 = 'X';
   else
      p2 = 'O';


   p3 = rand() % 2;
   if(p3 != 0)
      p3 = 'X';
   else
      p3 = 'O';


   p4 = rand() % 2;
   if(p4 != 0)
      p4 = 'X';
   else
      p4 = 'O';


   p5 = rand() % 2;
   if(p5 != 0)
      p5 = 'X';
   else
      p5 = 'O';


   p6 = rand() % 2;
   if(p6 != 0)
      p6 = 'X';
   else
      p6 = 'O';


   p7 = rand() % 2;
   if(p7 != 0)
      p7 = 'X';
   else
      p7 = 'O';


   p8 = rand() % 2;
   if(p8 != 0)
      p8 = 'X';
   else
      p8 = 'O';


   p9 = rand() % 2;
   if(p9 != 0)
      p9 = 'X';
   else
      p9 = 'O';


   p10 = rand() % 2;
   if(p10 != 0)
      p10 = 'X';
   else
      p10 = 'O';


   p11 = rand() % 2;
   if(p11 != 0)
      p11 = 'X';
   else
      p11 = 'O';


   p12 = rand() % 2;
   if(p12 != 0)
      p12 = 'X';
   else
      p12 = 'O';


   p13 = rand() % 2;
   if(p13 != 0)
      p13 = 'X';
   else
      p13 = 'O';


   p14 = rand() % 2;
   if(p14 != 0)
      p14 = 'X';
   else
      p14 = 'O';


   p15 = rand() % 2;
   if(p15 != 0)
      p15 = 'X';
   else
      p15 = 'O';


   p16 = rand() % 2;
   if(p16 != 0)
      p16 = 'X';
   else
      p16 = 'O';


   p17 = rand() % 2;
   if(p17 != 0)
      p17 = 'X';
   else
      p17 = 'O';


   p18 = rand() % 2;
   if(p18 != 0)
      p18 = 'X';
   else
      p18 = 'O';


   p19 = rand() % 2;
   if(p19 != 0)
      p19 = 'X';
   else
      p19 = 'O';


   p20 = rand() % 2;
   if(p20 != 0)
      p20 = 'X';
   else
      p20 = 'O';


   p21 = rand() % 2;
   if(p21 != 0)
      p21 = 'X';
   else
      p21 = 'O';


   p22 = rand() % 2;
   if(p22 != 0)
      p22 = 'X';
   else
      p22 = 'O';


   p23 = rand() % 2;
   if(p23 != 0)
      p23 = 'X';
   else
      p23 = 'O';


   p24 = rand() % 2;
   if(p24 != 0)
      p24 = 'X';
   else
      p24 = 'O';


   p25 = rand() % 2;
   if(p25 != 0)
      p25 = 'X';
   else
      p25 = 'O';


   p26 = rand() % 2;
   if(p26 != 0)
      p26 = 'X';
   else
      p26 = 'O';


   p27 = rand() % 2;
   if(p27 != 0)
      p27 = 'X';
   else
      p27 = 'O';


   p28 = rand() % 2;
   if(p28 != 0)
      p28 = 'X';
   else
      p28 = 'O';


   p29 = rand() % 2;
   if(p29 != 0)
      p29 = 'X';
   else
      p29 = 'O';


   p30 = rand() % 2;
   if(p30 != 0)
      p30 = 'X';
   else
      p30 = 'O';


   p31 = rand() % 2;
   if(p31 != 0)
      p31 = 'X';
   else
      p31 = 'O';


   p32 = rand() % 2;
   if(p32 != 0)
      p32 = 'X';
   else
      p32 = 'O';


   p33 = rand() % 2;
   if(p33 != 0)
      p33 = 'X';
   else
      p33 = 'O';
   
   
   p34 = rand() % 2;
   if(p34 != 0)
      p34 = 'X';
   else
      p34 = 'O';
   
   
   p35 = rand() % 2;
   if(p35 != 0)
      p35 = 'X';
   else
      p35 = 'O';
}





//In this function, will print out the board
void drawBoard()
{
   cout << setw(15) << "1 2 3 4 5 6" << endl;
   cout << setw(17) << "- - - - - - - -" << endl;
   cout << "A | " << p0  << " " << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " | A" << endl;
   cout << "B | " << p6 << " " << p7 << " " << p8 << " " << p9 << " " << p10 << " " << p11 << " | B" << endl;
   cout << "C | " << p12 << " " << p13 << " " << p14 << " " << p15 << " " << p16 << " " << p17 << " | C" << endl;
   cout << "D | " << p18 << " " << p19 << " " << p20 << " " << p21 << " " << p22 << " " << p23 << " | D" << endl;
   cout << "E | " << p24 << " " << p25 << " " << p26 << " " << p27 << " " << p28 << " " << p29 << " | E" << endl;
   cout << "F | " << p30 << " " << p31 << " " << p32 << " " << p33 << " " << p34 << " " << p35 << " | F" << endl;
   cout << setw(17) << "- - - - - - - -" << endl;
}





//In this function, will check each row and each column to see whether it meet the odd parity
//or not
int generateOddParity(int &boardTotal)
{
   //Add up each row's value and divide it to 2. If each row have odd number of X, the remainder
   //should be 1
   int rowA = (p0 + p1 + p2 + p3 + p4 + p5) % 2;
   int rowB = (p6 + p7 + p8 + p9 + p10 + p11) % 2;
   int rowC = (p12 + p13 + p14 + p15 + p16 + p17) % 2;
   int rowD = (p18 + p19 + p20 + p21 + p22 + p23) % 2;
   int rowE = (p24 + p25 + p26 + p27 + p28 + p29) % 2;
   int rowF = (p30 + p31 + p32 + p33 + p34 + p35) % 2;

   //Add up each column value and divide it to 2. If each coulmn have odd number of X,
   //the remainder should be 1

   int column1 = (p0 + p6 + p12 + p18 + p24 + p30) % 2;
   int column2 = (p1 + p7 + p13 + p19 + p25 + p31) % 2;
   int column3 = (p2 + p8 + p14 + p20 + p26 + p32) % 2;
   int column4 = (p3 + p9 + p15 + p21 + p27 + p33) % 2;
   int column5 = (p4 + p10 + p16 + p22 + p28 + p34) % 2;
   int column6 = (p5 + p11 + p17 + p23 + p29 + p35) % 2;

   //Add up each row. If each row have odd number of X. The total should be 6
   int rowTotal = rowA + rowB + rowC + rowD + rowE + rowF;

   //Add up each coulmn. If each column have odd number of X. The total should be 6
   int columnTotal = column1 + column2 + column3 + column4 + column5 + column6;

   //Add up row total and column total. If every row and every cloumn have odd number of X
   //the board total should be 12
   boardTotal = rowTotal + columnTotal;

   return boardTotal;
}





//In this function, will keep generate board until it meet the odd parity
void checkOddParity(int &boardTotal, char &convertIntToChar)
{
   //Create an infinite loop until it meet the odd parity
   while(true)
   {
      assignBoardElement();
      generateOddParity(boardTotal);

      //If the condition is meet, draw the board. Otherwise, keep generate the board
      if(boardTotal == 12)
      {
         drawBoard();
         break;
      }
      else
      {
         continue;
      }
   }

   //Convert integer into character
   convertIntToChar = boardTotal;
}





//In this function, will read the helper input
char readHelperInput(char &helperInput1, char &helperInput2)
{
   //Ask helper to enter r to generate new board or enter value to change one board element
   //Fisrst to read in the first helper character
   cout << "Enter r to randomize to board, or row and column to change a value -> ";
   cin >> helperInput1;


   //if user want to change one board element, read in the second character
   if(helperInput1 != 'r' && helperInput1 != 'x')
   {
      cin >> helperInput2;
   }

   return helperInput1, helperInput2;
}





//In this function, will regenerate the board for helper
char regenerateBoard(char &helperInput1, char &helperInput2, char &convertIntToChar)
{
   int boardTotal;

   //Helper enter r, so regenerate the board
   while(helperInput1 == 'r')
   {
      checkOddParity(boardTotal, convertIntToChar);

      cout << "Enter r to randomize to board, or row and column to change a value -> ";
      cin >> helperInput1;

      //If helper's first character is not r or x, read in the second character
      if(helperInput1 != 'r' && helperInput1 != 'x')
      {
         cin >> helperInput2;
      }
   }
   return 0;
}





//In this function, we change the element correspond to helper input
void changeBoard(char &helperInput1, char &helperInput2)
{
   //If helper enter A and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'A' || helperInput1 == 'a')
   {
      switch(helperInput2)
      {
         case '1':
            if(p0 == 'X')
            {
               p0 = 'O';
            }
            else
            {
               p0 = 'X';
            }
            break;

         case '2':
            if(p1 == 'X')
            {
               p1 = 'O';
            }
            else
            {
               p1 = 'X';
            }
            break;

         case '3':
            if(p2 == 'X')
            {
               p2 = 'O';
            }
            else
            {
               p2 = 'X';
            }
            break;

         case '4':
            if(p3 == 'X')
            {
               p3 = 'O';
            }
            else
            {
               p3 = 'X';
            }
            break;

         case '5':
            if(p4 == 'X')
            {
               p4 = 'O';
            }
            else
            {
               p4 = 'X';
            }
            break;

         case '6':
            if(p5 == 'X')
            {
               p5 = 'O';
            }
            else
            {
               p5 = 'X';
            }
            break;
      }
   }


   //If helper enter B and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'B' || helperInput1 == 'b')
   {
      switch(helperInput2)
      {
         case '1':
            if(p6 == 'X')
            {
               p6 = 'O';
            }
            else
            {
               p6 = 'X';
            }
            break;

         case '2':
            if(p7 == 'X')
            {
               p7 = 'O';
            }
            else
            {
               p7 = 'X';
            }
            break;

         case '3':
            if(p8 == 'X')
            {
               p8 = 'O';
            }
            else
            {
               p8 = 'X';
            }
            break;

         case '4':
            if(p9 == 'X')
            {
               p9 = 'O';
            }
            else
            {
               p9 = 'X';
            }
            break;

         case '5':
            if(p10 == 'X')
            {
               p10 = 'O';
            }
            else
            {
               p10 = 'X';
            }
            break;

         case '6':
            if(p11 == 'X')
            {
               p11 = 'O';
            }
            else
            {
               p11 = 'X';
            }
            break;
      }
   }


   //If helper enter C and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'C' || helperInput1 == 'c')
   {
      switch(helperInput2)
      {
         case '1':
            if(p12 == 'X')
            {
               p12 = 'O';
            }
            else
            {
               p12 = 'X';
            }
            break;

         case '2':
            if(p13 == 'X')
            {
               p13 = 'O';
            }
            else
            {
               p13 = 'X';
            }
            break;

         case '3':
            if(p14 == 'X')
            {
               p14 = 'O';
            }
            else
            {
               p14 = 'X';
            }
            break;

         case '4':
            if(p15 == 'X')
            {
               p15 = 'O';
            }
            else
            {
               p15 = 'X';
            }
            break;

         case '5':
            if(p16 == 'X')
            {
               p16 = 'O';
            }
            else
            {
               p16 = 'X';
            }
            break;

         case '6':
            if(p17 == 'X')
            {
               p17 = 'O';
            }
            else
            {
               p17 = 'X';
            }
            break;
      }
   }


   //If helper enter D and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'D' || helperInput1 == 'd')
   {
      switch(helperInput2)
      {
         case '1':
            if(p18 == 'X')
            {
               p18 = 'O';
            }
            else
            {
               p18 = 'X';
            }
            break;

         case '2':
            if(p19 == 'X')
            {
               p19 = 'O';
            }
            else
            {
               p19 = 'X';
            }
            break;

         case '3':
            if(p20 == 'X')
            {
               p20 = 'O';
            }
            else
            {
               p20 = 'X';
            }
            break;

         case '4':
            if(p21 == 'X')
            {
               p21 = 'O';
            }
            else
            {
               p21 = 'X';
            }
            break;

         case '5':
            if(p22 == 'X')
            {
               p22 = 'O';
            }
            else
            {
               p22 = 'X';
            }
            break;

         case '6':
            if(p23 == 'X')
            {
               p23 = 'O';
            }
            else
            {
               p23 = 'X';
            }
            break;
      }
   }


   //If helper enter E and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'E' || helperInput1 == 'e')
   {
      switch(helperInput2)
      {
         case '1':
            if(p24 == 'X')
            {
               p24 = 'O';
            }
            else
            {
               p24 = 'X';
            }
            break;

         case '2':
            if(p25 == 'X')
            {
               p25 = 'O';
            }
            else
            {
               p25 = 'X';
            }
            break;

         case '3':
            if(p26 == 'X')
            {
               p26 = 'O';
            }
            else
            {
               p26 = 'X';
            }
            break;

         case '4':
            if(p27 == 'X')
            {
               p27 = 'O';
            }
            else
            {
               p27 = 'X';
            }
            break;

         case '5':
            if(p28 == 'X')
            {
               p28 = 'O';
            }
            else
            {
               p28 = 'X';
            }
            break;

         case '6':
            if(p29 == 'X')
            {
               p29 = 'O';
            }
            else
            {
               p29 = 'X';
            }
            break;
      }
   }


   //If helper enter F and follow with a number, we change the element. If the element was O,
   //change into X. If the element was X, change into O
   if(helperInput1 == 'F' || helperInput1 == 'f')
   {
      switch(helperInput2)
      {
         case '1':
            if(p30 == 'X')
            {
               p30 = 'O';
            }
            else
            {
               p30 = 'X';
            }
            break;

         case '2':
            if(p31 == 'X')
            {
               p31 = 'O';
            }
            else
            {
               p31 = 'X';
            }
            break;

         case '3':
            if(p32 == 'X')
            {
               p32 = 'O';
            }
            else
            {
               p32 = 'X';
            }
            break;

         case '4':
            if(p33 == 'X')
            {
               p33 = 'O';
            }
            else
            {
               p33 = 'X';
            }
            break;

         case '5':
            if(p34 == 'X')
            {
               p34 = 'O';
            }
            else
            {
               p34 = 'X';
            }
            break;

         case '6':
            if(p35 == 'X')
            {
               p35 = 'O';
            }
            else
            {
               p35 = 'X';
            }
            break;
      }
   }
}





//In this function, we read in player's input and check whether is the same as helper's input
void readPlayerInput(char &helperInput1, char &helperInput2, char playerInput1,
                     char playerInput2)
{
   //If helper input is not x or r, we ask player which element did helper change
   if(helperInput1 != 'x' && helperInput1 != 'r')
   {
      cout << "What piece do you think it was? -> ";
      cin >> playerInput1 >> playerInput2;

      //Check whether the player input is the same as helper input

      //Print out correspond information to the player if they guess right
      if(helperInput1 == playerInput1 && helperInput2 == playerInput2)
      {
         cout << endl << endl << "*** Congratulations, you did it! ***" << endl << endl;
         cout << "Thank you for playing.  Exiting..." << endl;
      }
      else
      {
         //Print out correspond information to the player if they guess wrong
         cout << endl << "Sorry, it was " << helperInput1 << helperInput2
              << ". Better luck next time." << endl << endl;
         cout << "Thank you for playing.  Exiting..." << endl;
      }
   }
}





int main()
{
   //Generate random value
   srand (time(NULL));

   char helperInput1 = ' ';
   char helperInput2 = ' ';

   char playerInput1 = ' ';
   char playerInput2 = ' ';

   int boardTotal;
   char converIntTochar;


   displayHeader();
   checkOddParity(boardTotal, converIntTochar);
   readHelperInput(helperInput1, helperInput2);
   regenerateBoard(helperInput1, helperInput2, converIntTochar);
   changeBoard(helperInput1, helperInput2);

   cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

   drawBoard();

   cout << endl;

   readPlayerInput(helperInput1, helperInput2, playerInput1, playerInput2);
}








