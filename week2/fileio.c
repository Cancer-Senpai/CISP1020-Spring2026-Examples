#include <stdio.h>

int main() {
	FILE *in;
	char name[50];

	in = fopen("names.dat", "r");

	//read from file as long as we haven't hit eof
	//fscanf stops at whitespace
	while(fscanf(in, "%s", name) != EOF) {
		printf("Name read: %s\n", name);
		//fflush(stdout); //make sure the printf statment on prev line prints
	}

	//ALTERATIVE: read from file as long as we haven't hit eof
	// this reads whole lines, including spaces.
	/*while(fgets(name, 50, in)) {
		printf("Name read: %s\n", name);
	}*/

	return 0;
}