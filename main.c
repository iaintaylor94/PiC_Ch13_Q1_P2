/* Function to calculate the area and circumference of a
   circle, and the volume of a sphere of a given radius  */

#include <stdio.h>

#define PI 3.141592654

// Declare Functions
double area (double);
double circumference (double);
double volume (double);

int main(void) {

  printf ("                     area     circumference      volume   \n");
  printf ("radius =    1:   %8.4f          %8.4f    %8.4f\n", area(1.0), circumference(1.0), volume(1.0));
  printf ("radius = 4.98:   %8.4f          %8.4f    %8.4f\n", area(4.98), circumference(4.98), volume(4.98));  
  
  return 0;
}

// Define Functions
double area (double r) {
  return PI * r * r;
}

double circumference (double r) {
  return 2 * PI * r;
}

double volume (double r) {
  return 4.0 / 3.0 * PI * r * r * r;
}