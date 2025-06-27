#include<stdio.h>


// Public Means Class k bahar bhi access

class Student {
  // By Def is Private
  public:
  string name;
  int r_no , age;
  string grade;
};

int main(){
  Student S1;
  S1.name = "Vinod";
  S1.age = 10;
  S1.r_no = 10;
  S1.grage = "A";
 
  Student S2;
  S2.name = "Mani";
  S2.age = 10;
  S2.r_no = 10;
  S2.grage = "A";

  
}
