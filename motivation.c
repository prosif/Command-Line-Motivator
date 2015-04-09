#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char *inspiration[10];

void Inspire(int index){
	printf("%s\n",inspiration[index]);
}

void generateQuotes(){
	inspiration[0] = "You can do it!";
	inspiration[1] = "You're awesome!";
	inspiration[2] = "I believe in you!";
	inspiration[3] = "You're cooler than a polar bear's toes!";
	inspiration[4] = "YOU'RE ON FIRE!";
	inspiration[5] = "Look at you go!";
	inspiration[6] = "You're greater than Frosted Flakes!";
	inspiration[7] = "Rocky watches your montages to get motivated.";
	inspiration[8] = "Wow I wouldn't have thought to solve it like that!";
	inspiration[9] = "It's so cool that you figured that out!";
}

int main(){
	generateQuotes();
	srand(time(NULL));
	int r = rand() % 10;
	Inspire(r);
	return 0;
}
