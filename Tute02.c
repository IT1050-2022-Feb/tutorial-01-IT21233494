/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance, extra ;
  float amount ;

  printf("Enter the distance: ");
  scanf("%d", &distance);

  extra= distance-30 ;

  if(extra<1)
  {
    amount= distance* 50;

  }
  else if(extra>0)
  {
    amount= 30*50 + extra*40 ;

  }
  printf("Amount:Rs. %.2f", amount);
  
  return 0;
}
