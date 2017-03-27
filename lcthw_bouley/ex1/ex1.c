#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
	int distance = 100;
	int half_distance = (distance/2);
	int quarter_dist = (distance/4);
	int multiplier = (5);
	int quarter_mult = (quarter_dist*multiplier);
		
	// this is also a comment
	printf("You are %d miles away. \n", distance);
	printf("That is a very far distance to be. \n");
	printf("Half of %d miles is %d miles. \n", distance, half_distance);
	printf("A quarter of %d is %d and %d times %d is %d. \n", distance, quarter_dist, quarter_dist, multiplier, quarter_mult);
	
	return 0;
	}
