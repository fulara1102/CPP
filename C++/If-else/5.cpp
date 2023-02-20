/*Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".*/

#include <iostream>

using namespace std;

int main()
{
   char gen,status;
   char f,F,Y,y,N,n,M,m;
   float age;

   cout<<"Enter your age :" ;
   cin>>age;

   cout<<"Enter Sex :" ;
   cin>>gen;

   //cout<<"Enter marital status :" ;
   //cin>>status;

   if (gen== 'f')
       {
       cout<<"she will work only in urban areas" ;
       }

   if (gen== 'm')
       {
       if (age>=20 and age<=40)
       cout<<"He may work anywhere" ;

       else if (age>40 and age<=60)
       cout<<"He will work only in urban areas" ;
       }
   else{
    cout<<"ERROR" ;
    }

    return 0;

}


