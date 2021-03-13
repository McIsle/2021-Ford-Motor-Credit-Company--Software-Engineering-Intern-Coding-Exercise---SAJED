#include <stdio.h>
#include <stdlib.h>

int ManhattanDistance(int Ax, int Ay, int Bx, int By);


void main(void)
{
	int Ax = 5, Ay = 4, Bx = 3, By = 2; // Initializing variables
	
	printf("Finding the Manhattan DIstance between (%d, %d) and (%d, %d)\n", Ax, Ay, Bx, By);
	printf("The distance is %d\n", ManhattanDistance(Ax, Ay, Bx, By)); // testing with first set of variables
	
	Ax = -1; Ay = 2; Bx = 1; By = -2; // Edit variables to test different pairs of points
	printf("Finding the Manhattan DIstance between (%d, %d) and (%d, %d)\n", Ax, Ay, Bx, By);
	printf("The distance is %d\n", ManhattanDistance(Ax, Ay, Bx, By)); // testing with second set of variables
}

int ManhattanDistance(int Ax, int Ay, int Bx, int By)
{
	int Xdistance = abs(Ax - Bx); // Finding the distance in the X direction
	int Ydistance = abs(Ay - By); // Fidning the distance in the Y direction
	int ManhattanDistance = Xdistance + Ydistance; // Combining the distances
	return ManhattanDistance;
}


