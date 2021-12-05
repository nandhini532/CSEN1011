
/*ALGORITHM TO FIND WHETHER A NUMBER IS PRIME OR COMPOSITE
Step-1:Start
Step-2:Accept a positive integer 'n'(number greater than 2)
Step-3:Initialise 'counter' with value 2
Step-4:Divide 'n' with the 'counter'
Step-5:If the remainder is 0 display that 'n' is composite and stop the algorithm
Step-6:Else increment the 'counter' and repeat from step 4 until the 'counter' value is less than 'n'
Step-7:After completion of all the steps display that a number 'n' is prime
Step-8:stop */



#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? counter;
   ?? n;
   ?? flag;

   raptor_prompt_variable_zzyz ="Accept a positive integer greater than 2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   counter =2;
   flag =false;
   while (!(n % counter==0))
   {
      counter =counter+1;
      if (counter<n)
      {
      }
      else
      {
         cout << "Number is prime" << endl;         flag =true;
      }
   }
   if (flag==true)
   {
   }
   else
   {
      cout << "Number is composite" << endl;   }

   return 0;
}


/*Learnings
1.Learned to find whether a number is prime or composite
2.while loop is used in this program */

