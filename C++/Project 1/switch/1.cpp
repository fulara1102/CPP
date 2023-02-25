/*Using switch statement Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<iostream>
using namespace std;
int main()
{
   // variables
   int score;
   char grade;

   // take score
   cout << "Enter score(0-100): ";
   cin >> score;

   // check score is valid or not
   // score is valid if it belongs to 0-100
   if(score<0 || score>100) 
   {
     cout << "Invalid Score" << endl;
     return 0; // stop execution
   }

   // find grade using switch-case
   switch(score/10)
   {
     case 10:
     case 9:
       grade = 'A';
       break;
     case 8:
       grade = 'B';
       break;
     case 7:
       grade = 'C';
       break;
     case 6:
       grade = 'D';
       break;
     case 5:
       grade = 'E';
       break;
     default:
       grade = 'F';
   }

   // display grade
   cout << "Grade = " << grade << endl; 

   return 0;
}