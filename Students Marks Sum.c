#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
  int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
    int n=number_of_students;
    int sum=0;
    switch(gender)
    {
        case 'b':
          for(int i=0;i<n;i=i+2)
          sum=sum+marks[i];
          break;
        case 'g':
          for(int i=1;i<n;i=i+2)
          sum=sum+marks[i];
          break;
    }
    return sum;
}


int main() {