#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void gameStart();
void chooseFaction();
void customizeCharacter();
void blackFactionLore();
void deathFactionLore();
void printCharSheet();
void blackFactionLore1();

typedef struct character{
	char name[20];
	char faction[20];
	int factionNum;
	char background[300];
	int age;
	int height;
	int weight;
	char skin[20];
	char hair[100];
	char eyes[20];
	char currentQuest[100];
	int maxHP;
	int currentHP;
	int atkMod;
	int minDmg;
	int maxDmg;
	int dmgMod;
}CHARACTER;
CHARACTER character;

typedef struct christianCultist{
	char name[20];

}

int main(void){

	gameStart();
	chooseFaction();

	return 0;
}

//GAME START
void gameStart(){
	printf("The game has started //fTxt\nInfo / help //fTxt\n");
	//printf("Do you wish to load a save?");			//LOAD THE GAME FEATURE
	//if not loaded -> new game; else continue
	//below part is "if not loaded"
	printf("fTxt about the game start.\n");
}

//CHOOSE YOUR FACTION
void chooseFaction(){
	printf("fTxt about each faction\nChoose your faction!\nBlack, Death\n");
	//CHECK IF FACTION EXISTS
	int isFactionValid = 0;
	do{
		scanf("%19s",&character.faction);
		//ASSIGN A FACTION TO THE CHARACTER
		if(strcmp(character.faction, "Black") == 0){
			character.factionNum = 1;
			isFactionValid = 1;
		}else if(strcmp(character.faction, "Death") == 0){
			character.factionNum = 2;
			isFactionValid = 1;
		}
	}while(isFactionValid == 0);
	printf("fTxt about your faction\n");			//SHOW THE CLAN'S EMBLEM (.jpeg)
	//START THE FACTION'S LORE
	switch(character.factionNum){
		case 1:
			blackFactionLore();
			break;
		case 2:
			deathFactionLore();
			break;
	}
}

//RUN THE CHOSEN FACTION'S LORE
void blackFactionLore(){
	//customizeCharacter();
	printf("fTxt you started in black faction");
	blackFactionLore1();
}

//RUN THE CHOSEN FACTION'S LORE
void deathFactionLore(){
	customizeCharacter();
	printf("fTxt you started in death faction");
}

//CUSTOMIZE YOUR CHARACTER
void customizeCharacter(){
	printf("fTxt describe your character\n");
	//CUSTOMIZE YOUR CHARACTER
	printf("fTxt write your name (max 19 chars)\n");	
	scanf("%19s",&character.name);
	printf("fTxt write about your background (max 299 chars)\n");	
	scanf("%299s",&character.background);
	printf("fTxt choose your age (15-120)\n");
	do{
		scanf("%d",&character.age);
	}while(character.age < 15 || character.age > 120);
	printf("fTxt choose your height (150-215)\n");	
	do{
		scanf("%d",&character.height);	
	}while(character.height < 150 || character.height > 215);
	printf("fTxt choose your weight (45-150)\n");	
	do{
		scanf("%d",&character.weight);
	}while(character.weight < 45 || character.weight > 150);
	printf("fTxt describe your skin color\n");	
	scanf("%19s",&character.skin);
	printf("fTxt describe your hair (max 99 chars)\n");
	scanf("%99s",&character.hair);
	printf("fTxt describe your eyes\n");	
	scanf("%19s",&character.eyes);
	//PRINT CHARACTER SHEET
	printCharSheet();
}

//PRINT CHARACTER SHEET
void printCharSheet(){
	printf("%s of %s faction\n",character.name, character.faction);
	printf("%d years old; %d cm; %d kg\n",character.age, character.height, character.weight);
	printf("%s\n",character.skin);
	printf("%s\n",character.hair);
	printf("%s\n",character.eyes);
	printf("%s\n",character.background);
}

//BLACK QUEST 1
void blackFactionLore1(){
	printf("fTxt about christians cultists populating the area\n");
	printf("fTxt thin their ranks, kill 3 cultists\n");
	strncpy(character.currentQuest, "Kill 3 christian cultists", 30);
	printf("fTxt encounter %s",);
}