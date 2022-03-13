#include <iostream>
#include <cmath>


int main(){
   using namespace std;
   string multi;
   multi = "";
   int p1;
   int p2;
   int comp1;
   cout << "Are you playing against a friend? yes or no: "; cin >> multi;
   while(!(multi != "no") && !(multi != "yes"))
   {
      cout << "Please enter yes or no: "; cin >> multi;
   }
   cout << multi;
}