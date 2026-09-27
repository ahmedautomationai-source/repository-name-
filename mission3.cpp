#include <iostream>
using namespace std;
int main() { 
    int grade;
   cout << "Enter your grade : ";

      cin >> grade;

   if (grade >=90 ){ cout <<"excellent (A)"<<endl;} 

    else if (grade >=80 ){ cout << "very good (B)"<< endl; } 

    else if (grade>=70){cout<< "good (C)"<< endl; } 

    else if (grade >=50 ){cout <<"passed (D)"<<endl; }

         else {cout << "failed (F)" << endl; }
return 0;

}   