#include <iostream>
using namespace std;

int main (){
  int first_number,second_number,sum;
 cout<< "ENTER TWO DIGITS: ";
 cin>> first_number >> second_number;

 //sum of two numbers in stored in variables in sumOfTwoNumbers
 sum = first_number + second_number;

 //print sum
 cout<< first_number<< "+" << second_number <<"=" << sum;

 return 0;
}