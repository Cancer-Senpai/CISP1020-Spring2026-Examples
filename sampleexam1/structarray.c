#include <stdio.h>

typedef struct {
    char name[30];
    int rating;
    double price;
} game_t;

int main() {
    //declare file variable
    FILE *in;

    //declare array of structs that holds 3 things
    game_t g[3];

    //variable to keep track of how many games I've read
    int count = 0;

    //open the file for reading
    in = fopen("gameData.dat","r");

    //check if file opened sucessfully
    if(in == NULL) {
        printf("Error. Could not open file.\n");
        return 0;
    }

    while(count < 3 && fscanf(in,"%s",g[count].name)) {
        fscanf(in,"%d",&g[count].rating);
        fscanf(in,"%lf",&g[count].price);

        //print all the relevant data
        printf("Game #%d\n",count+1);
        printf("Name: %s\n",g[count].name);
        printf("Rating: %d\n",g[count].rating);
        printf("Price: $%.2lf\n", g[count].price);
        count++;
    }

    //close the file
    fclose(in);

    return 0;
}