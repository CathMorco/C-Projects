#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#define p printf
#define s scanf
#define g gotoxy
#define cp cprintf
#define MAX_CARS 10
#define slot 10

//PROGRAM #1 : The cube and squares
void displayCubeAndSquares()
{
    int x;
    clrscr();
    //title
    textcolor(GREEN); g(16,2);cp("Program 1: Square and Cube of numbers from 1-10\n");
    //labels
    textcolor(YELLOW);g(30,4);p("Number  Square   Cube \n\n");
    //content
    for (x = 0; x <= 10; x++)
        p("\t\t\t\t%d\t%d\t%d\n", x, x * x, x * x * x);
    getch();
}

//PROGRAM #2 ; The Maze
void displayTheMaze()
{
    int x, y;
    clrscr();
    // 1st loop
	textcolor(RED);
	for(x=1; x<=80; x++){
        g(x,1); delay(25); cp("Û");
	}
	for(y=1; y<=24; y++){
	    g(80,y); delay(25); cp("Û");
	}
	for(x=80; x>=1; x--){
	    g(x,24); delay(25); cp("Û");
	}
	for(y=24; y>=3; y--){
	    g(1,y); delay(25); cp("Û");
	}
    // 2nd loop
	textcolor(BROWN);
	for(x=1; x<=76; x++){
	    g(x,3); delay(25); cp("Û");
	}
	for(y=3; y<=22; y++){
	    g(76,y); delay(25); cp("Û");
	}
	for(x=76; x>=5; x--){
	    g(x,22); delay(25); cp("Û");
	}
	for(y=22; y>=6; y--){
	    g(5,y); delay(25); cp("Û");
	}
    //3rd loop
	textcolor(YELLOW);
	for(x=5; x<=72; x++){
	    g(x,5); delay(25); cp("Û");
	}
	for(y=5; y<=20; y++){
	    g(72,y); delay(25); cp("Û");
	}
	for(x=72; x>=9; x--){
	    g(x,20); delay(25); cp("Û");
	}
	for(y=20; y>=7; y--){
	    g(9,y); delay(25); cp("Û");
	}
    //4th loop
	textcolor(GREEN);
	for(x=9; x<=68; x++){
	    g(x,7); delay(25); cp("Û");
	}
	for(y=7; y<=18; y++){
	    g(68,y); delay(25); cp("Û");
	}
	for(x=68; x>=13; x--){
	    g(x,18); delay(25); cp("Û");
	}
	for(y=18; y>=9; y--){
	    g(13,y); delay(25); cp("Û");
	}
    //5th loop
	textcolor(LIGHTBLUE);
	for(x=13; x<=64; x++){
	    g(x,9); delay(25); cp("Û");
	}
	for(y=9; y<=16; y++){
	    g(64,y); delay(25); cp("Û");
	}
	for(x=64; x>=17; x--){
	    g(x,16); delay(25); cp("Û");
	}
	for(y=16; y>=11; y--){
	    g(17,y); delay(25); cp("Û");
	}
    //6th loop
	textcolor(BLUE);
	for(x=17; x<=60; x++){
	    g(x,11); delay(25); cp("Û");
	}
	for(y=11; y<=14; y++){
	    g(60,y); delay(25); cp("Û");
	}
	for(x=60; x>=21; x--){
	    g(x,14); delay(25); cp("Û");
	}
	for(y=14; y>=13; y--){
	    g(21,y); delay(25); cp("Û");
	}
	getch();
}

//PROGRAM #3 : College of Engineering Program

int barInput(x,y) {
    int input, result;
    while (1) { 
	 g(x,y);result = s("%d", &input);
        if (result == 1) {
            // Input is a valid integer
            break;
        } else {
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
            g(34,24);p("Invalid input. Please enter an integer.\n");
getch();
g(34,24);p("                                           ");
        }
    }
    return input;
}


void displayEngineeringData() 
{
	int x, y, cpefst, cefst, iefst, mefst, eefst, refst, ecefst, cpesnd, cesnd, iesnd, mesnd, eesnd, resnd, ecesnd,cpesmr, cesmr, iesmr, mesmr, eesmr, resmr, ecesmr, max_students=700;
	clrscr();
    //Borders (outer)
	textcolor(WHITE);
	for(x=5;x<=40;x++)
		{
		g(x,5);cp("Í");g(x,21);cp("Í");
		}
	for(y=6;y<=6;y++)
		{
		g(5,y);cp("º");g(40,y);cp("º");
		}
	g(5,5);cp("É");g(40,21);cp("¼");g(40,5);cp("»");
	g(5,21);cp("È");g(40,7);cp("¹");g(5,7);cp("Ì");
    //Border (inner)
    for(y=6;y<=20;y++)
		{
		g(5,y);cp("º");g(40,y);cp("º");
		}
	for(x=6;x<=39;x++)
		{
		g(x,7);cp("Í");g(x,9);cp("Ä");g(x,11);cp("Ä");
		g(x,13);cp("Ä");g(x,15);cp("Ä");g(x,17);cp("Ä");
		g(x,19);cp("Ä");
		}
	for(y=6;y<=20;y++)
		{
		g(14,y);cp("³"); g(20,y);cp("³"); g(26,y);cp("³");
		}
    //Labels
    textcolor(WHITE);g(16,6);cp("1st");g(22,6);cp("2nd");g(30,6);cp("Summer");
    textcolor(RED);g(8,8);cp("BSIE");textcolor(BROWN);g(8,10);cp("BSECE");
    textcolor(YELLOW);g(8,12);cp("BSME");textcolor(LIGHTGREEN);g(8,14);cp("BSCpE");
    textcolor(GREEN);g(8,16);cp("BSEE");textcolor(LIGHTBLUE);g(8,18);cp("BSREM");
    textcolor(BLUE);g(8,20);cp("BSCE");

    //Graph(Table)
    textcolor(WHITE);
	for(x=45;x<=75;x++)
	{
		g(x,21);cp("Í");g(45,21);cp("È");
	}
	for(y=5;y<=20;y++)
	{
		g(45,y);cp("º");
	}
    //Labels
    g(29,1);p("COLLEGE OF ENGINEERING");g(34,2);p("SECOND YEAR");g(35,3);p("2022-2023");
    textcolor(RED);g(47,22);cp("IE");textcolor(YELLOW);g(56,22);cp("ME");
    textcolor(BROWN);g(51,22);cp("ECE");textcolor(BLUE);g(72,22);cp("CE");
    textcolor(LIGHTBLUE);g(67,22);cp("REM");textcolor(GREEN);g(64,22);cp("EE");
    textcolor(LIGHTGREEN);g(59,22);cp("CpE");
    //legends
    g(5,22);p("LEGENDS:");g(8,23);p("1st Semester");
    g(8,24);p("2nd Semester");g(27,23);p("Summer Term");
    g(21,23);p("°°");g(21,24);p("ÛÛ");g(39,23);p("±±");
    
    //Input
    textcolor(WHITE);
    g(16,8);iefst = barInput(16,8); g(22,8);iesnd= barInput(22,8);g(32,8);iesmr= barInput(32,8);
    g(16,10);ecefst= barInput(16,10);g(22,10);ecesnd= barInput(22,10);g(32,10);ecesmr= barInput(32,10);
    g(16,12);mefst= barInput(16,12); g(22,12);mesnd= barInput(22,12);g(32,12);mesmr= barInput(32,12);
    g(16,14);cpefst= barInput(16,14);g(22,14); cpesnd= barInput(22,14);g(32,14);cpesmr= barInput(32,14);
    g(16,16);eefst= barInput(16,16);g(22,16); eesnd= barInput(22,16);g(32,16);eesmr= barInput(32,16);
    g(16,18);refst= barInput(16,18);g(22,18); resnd= barInput(22,18);g(32,18);resmr= barInput(32,18);
    g(16,20);cefst= barInput(16,20);g(22,20); cesnd= barInput(22,20);g(32,20);cesmr= barInput(32,20);
    
    //Graph
    //IE
	iefst=(iefst*15)/max_students;//1st sem
	for(y=0; y<iefst; y++)
	    {
	    textcolor(RED);g(47,20-y);delay(25);cp("°");
	    }
	iesnd=(iesnd*15)/max_students;//2nd sem
    for(y=0; y<iesnd; y++)
    	{
	    textcolor(RED);g(48,20-y);delay(25);cp("Û");
    	}
    iesmr=(iesmr*15)/max_students;//summer
    for(y=0; y<iesmr; y++)
	{
	    textcolor(RED);g(49,20-y);delay(25);cp("±");
    	}
    	
    //ECE
    ecefst=(ecefst*15)/max_students;
    for(y=0;y<ecefst;y++)
    	{
	    textcolor(BROWN);g(51,20-y);delay(25);cp("°");
    	}
    ecesnd=(ecesnd*15)/max_students;
    for(y=0;y<ecesnd;y++)
    	{
	    textcolor(BROWN);g(52,20-y);delay(25);cp("Û");
    	}
    ecesmr=(ecesmr*15)/max_students;
    for(y=0;y<ecesmr;y++)
    	{
	    textcolor(BROWN);g(53,20-y);delay(25);cp("±");
    	}
    
    //ME
    mefst=(mefst*15)/max_students;
    for(y=0;y<mefst;y++)
    	{
	    textcolor(YELLOW);g(55,20-y);delay(25);cp("°");
    	}
    mesnd=(mesnd*15)/max_students;
    for(y=0;y<mesnd;y++)
    	{
	    textcolor(YELLOW);g(56,20-y);delay(25);cp("Û");
    	}
    mesmr=(mesmr*15)/max_students;
    for(y=0;y<mesmr;y++)
    	{
	    textcolor(YELLOW);g(57,20-y);delay(25);cp("±");
    	}

    //CpE
    cpefst=(cpefst*15)/max_students;
    for(y=0;y<cpefst;y++)
    	{
	    textcolor(LIGHTGREEN);g(59,20-y);delay(25);cp("°");
    	}
    cpesnd=(cpesnd*15)/max_students;
    for(y=0;y<cpesnd;y++)
    	{
	    textcolor(LIGHTGREEN);g(60,20-y);delay(25);cp("Û");
    	}
    cpesmr=(cpesmr*15)/max_students;
    for(y=0;y<cpesmr;y++)
    	{
	    textcolor(LIGHTGREEN);g(61,20-y);delay(25);cp("±");
    	}
    	
    //EE
    eefst=(eefst*15)/max_students;
    for(y=0;y<eefst;y++)
    	{
	    textcolor(GREEN);g(63,20-y);delay(25);cp("°");
    	}
    eesnd=(eesnd*15)/max_students;
    for(y=0;y<eesnd;y++)
    	{
	    textcolor(GREEN);g(64,20-y);delay(25);cp("Û");
    	}
    eesmr=(eesmr*15)/max_students;
    for(y=0;y<eesmr;y++)
    	{
	    textcolor(GREEN);g(65,20-y);delay(25);cp("±");
    	}
    
    //REM
    refst=(refst*15)/max_students;
    for(y=0;y<refst;y++)
    	{
	    textcolor(LIGHTBLUE);g(67,20-y);delay(25);cp("°");
    	}
    resnd=(resnd*15)/max_students;
    for(y=0;y<resnd;y++)
    	{
	    textcolor(LIGHTBLUE);g(68,20-y);delay(25);cp("Û");
    	}
    resmr=(resmr*15)/max_students;
    for(y=0;y<resmr;y++)
    	{
	    textcolor(LIGHTBLUE);g(69,20-y);delay(25);cp("±");
    	}
    
    //CE
    cefst=(cefst*15)/max_students;
    for(y=0;y<cefst;y++)
    	{
	    textcolor(BLUE);g(71,20-y);delay(25);cp("°");
    	}
    cesnd=(cesnd*15)/max_students;
    for(y=0;y<cesnd;y++)
    	{
	    textcolor(BLUE);g(72,20-y);delay(25);cp("Û");
    	}
    cesmr=(cesmr*15)/max_students;
    for(y=0;y<cesmr;y++)
    	{
	    textcolor(BLUE);g(73,20-y);delay(25);cp("±");
    	}
	getch();
}

//PROGRAM #4: Tic Tac Toe
char cell[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWinner();
void drawBoard();
void setTextColor(int color);

void displayTicTacToe()
{
	int player = 1, i ,choice;
	char mark; 
	clrscr();
	do
	{
		drawBoard();
    		player = (player % 2) ? 1 : 2;
    		mark = (player == 1) ?  'X' : 'O';
		setTextColor((player == 1) ? CYAN : BROWN); //font color depends 
		g(48,8);cp("PLAYER %d, ENTER A NUMBER: ", player);
		textcolor(WHITE);

		if (scanf("%d", &choice) != 1 || choice < 1 || choice > 9) {
            		// Invalid input, out of bounds or non-integer input
            		textcolor(RED); g(55,9); cp("INVALID MOVE");
            		while (getchar() != '\n'); // Clear input buffer
            		getch(); // Wait for user input
            		clrscr();
            		continue; // Restart the loop
        }

        	if (cell[choice] == 'X' || cell[choice] == 'O') {
            		// Cell already marked
            		textcolor(RED); g(55,9); cp("INVALID MOVE");
            		getch(); // Wait for user input
            		clrscr();
            		continue; // Restart the loop
        }
		cell[choice] = mark;

	        clrscr();
			i = checkWinner();
			player++;	
	}

	while(i == -1);
	
	drawBoard();
	if(i==1)
	{
	    textcolor(YELLOW);g(55,8);cp("  PLAYER %d WIN  ", --player);
	}
	else 
	{
	    textcolor(YELLOW);g(55,8);p("  GAME DRAW  ");
	}
		getch();;
}

//TEXT COLOR
void setTextColor(int color) 
{
    	textcolor(color);
}

//check the winner
int checkWinner()
{
	if(cell[1] == cell[2] && cell[2] == cell[3])
		return 1;
	else if (cell[4] == cell[5] && cell[5] == cell[6])
		return 1;
	else if(cell[7] == cell[8] && cell[8] == cell[9])
		return 1;
	else if(cell[1] == cell[4] && cell[4] == cell[7])
		return 1;
	else if(cell[2] == cell[5] && cell[5] == cell[8])
		return 1;
	else if(cell[3] == cell[6] && cell[6] == cell[9])
		return 1;
	else if(cell[1] == cell[5] && cell[5] == cell[9])
		return 1;
	else if(cell[3] == cell[5] && cell[5] == cell[7])
		return 1;
	else if(cell[1] != '1' && cell[2] != '2' && cell[3] != '3' && cell[4] !='4' && cell[5] != '5' && cell[6] != '6' && cell[7] != '7' && cell[8] != '8' && cell[9] != '9')
		return 0;
	else 
		return -1;	
}

//main board
void drawBoard()
{
	//title and rules
	int x,y;  
    	textcolor(CYAN);g(16,3);cp("TIC TAC TOE");
    	textcolor(WHITE);g(47,20);
    	g(49,17);cp("The goal is to get three of");
    	g(52,18);cp("your symbols in a row");
    	g(49,19);cp("(horizontally, vertically,");
    	g(52,20);cp("or diagonally) before");
    	g(53,21);cp("your opponent does.");
    	textcolor(BROWN);g(54,13); cp(" - GAME RULES -");
	
	//borders
	textcolor(WHITE);
	for(x=45;x<=78;x++)
	{
	g(x,15); cp("Û");
	g(x,23); cp("Û");
	}
	for(y=15;y<=23;y++)
	{
	g(45,y); cp("Û");
	g(78,y); cp("Û");
	}
	textcolor(WHITE);
	for(x=3;x<=39;x++)
	{
	g(x,5); cp("Û");
	g(x,11); cp("Û");
	g(x,17); cp("Û");
	g(x,23); cp("Û");
	}
	for(y=5; y<=23;y++)
	{
	g(3,y); cp("Û");
	g(15,y); cp("Û");
	g(27,y); cp("Û");
	g(39,y); cp("Û");
	}
	textcolor(WHITE);
	for(x=45;x<=78;x++)
	{
	g(x,5);cp("Û");
	g(x,11);cp("Û");}
	for(y=5;y<=11;y++)
	{
	g(45,y);cp("Û");
	g(78,y);cp("Û");}

	//labels
	textcolor(LIGHTGRAY);
	g(9,8);cp("%c",cell[1]); g(21,8);cp("%c",cell[2]); g(33,8);cp("%c",cell[3]);
	g(9,14);cp("%c",cell[4]); g(21,14);cp("%c",cell[5]); g(33,14);cp("%c",cell[6]);
	g(9,20);cp("%c",cell[7]); g(21,20);cp("%c",cell[8]); g(33,20);cp("%c",cell[9]);	    
}

//PROGRAM #5 The Car Garage
struct Car {
    char car_id[20];
};

struct Car garage[MAX_CARS];
int top = -1; // Initialize the top of the stack

void push(struct Car car) {
    int i;
    if (top == MAX_CARS - 1) {
        g(21,20);p("Garage is full. Cannot add more cars."); 
        delay(1000);g(21,20);p("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"); //just to clear the massage
        return;
    }
    // Input car car_id
    g(7,20);p("Enter a car ID that consists of a letter and a number (ex. 1a):");
    g(71,20);s("%s", car.car_id);
    g(7,20);p("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
    garage[++top] = car;

    for (i = MAX_CARS; i >=top; i--) {  
        g(i * 7 - 1 , 6);p(" ");
        g((i + 1) * 7 - 1 , 5);delay(100);p(" %s", garage[i].car_id);
        g((top + 15) * 7, 5);p("       ");
    }
}
struct Car pop() {
    int i, depart, found = 0;
    struct Car car;

    if (top <= -1) {
        g(21,20);p("The garage is empty.");
        delay(1000);g(21,20);p("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"); 
        return car;
    } else {
        g(25, 20); p("Enter your car's slot number: "); g(55, 20); s(" %d", &depart);
        g(25,20);p("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

        // Search for the car to depart in the garage
        for (i = top; i >= 0; i--) {
            if (i + 1 == depart) {
                found = 1;
                break;
            }
        }
        if (found) {
            // Display the disappearance of the selected car
            g(i * 7 + 1, 5);p("       ");
            delay(200);

            // Shift the remaining cars in the garage
            for (i = i; i < top; i++) {
                garage[i] = garage[i + 1];
            }

            top--;

            // Show the updated graphics of the remaining cars in the garage
            for (i = 0; i < top + 1; i++) {
                g(7 + i * 7, 5);p(" %s", garage[i].car_id);
            }

            // Clear the last position to avoid duplication
            g((top + 2) * 7, 5);p("       ");
        } else {
            g(20,18);p("There's no car in the slot you entered.");
            delay(1000);g(21,20);p("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"); 
        }
    }
    return car;
}

void box_horizontal(a, b, y, char_) {
    int x; 
    for (x = a; x < b; x++) {
        g(x,y);p("%c", char_);
    }
}

void displayCarGarage() {
    char car_num;
    int choice, parking_slot, depart;
    int i; 
    int n;
    
    struct Car car;
    clrscr();
    
    g(32,2);p("* MINI PARKING *");
    
    // creating parking slots (visual representation)
    //slot 1
    box_horizontal(5, 10, 4, 205);
    box_horizontal(5, 10, 7, 205);
    g(7,8);p("1"); 
    
    //slot 2
    box_horizontal(12, 17, 4, 205);
    box_horizontal(12, 17, 7, 205);
    g(14,8);p("2"); 
        
    //slot 3 
    box_horizontal(19, 24, 4, 205);
    box_horizontal(19, 24, 7, 205);
    g(21,8);p("3"); 
    
    //slot 4
    box_horizontal(26, 31, 4, 205);
    box_horizontal(26, 31, 7, 205);
    g(28,8);p("4"); 
  
    //slot 5
    box_horizontal(33, 38, 4, 205);
    box_horizontal(33, 38, 7, 205);
    g(35,8);p("5"); 

    //slot 6
    box_horizontal(40, 45, 4, 205);
    box_horizontal(40, 45, 7, 205);
    g(42,8);p("6"); 
   
    //slot 7
    box_horizontal(47, 52, 4, 205);
    box_horizontal(47, 52, 7, 205);
    g(49,8);p("7"); 

    //slot 8
    box_horizontal(54, 59, 4, 205);
    box_horizontal(54, 59, 7, 205);
    g(56,8);p("8"); 

    //slot 9
    box_horizontal(61, 66, 4, 205);
    box_horizontal(61, 66, 7, 205);
    g(63,8);p("9"); 

    //slot 10
    box_horizontal(68, 73, 4, 205);
    box_horizontal(68, 73, 7, 205);
    g(69,8);p("10"); 
    
    n = 0;
    while (n <= 10) {
        g(17,11);p("***********************************************");
        g(31,12);p("[1]");g(36,12);p("Car Arrival");
        g(31,13);p("[2]");g(36,13);p("Car Departure");
        g(31,14);p("[3]");g(36,14);p("Quit Program");
        g(17,15);p("***********************************************");
        g(17,17);p("***********************************************");
        g(17,16);p("Enter your choice: ");g(36, 16);s("%d", &choice);
        delay(50);g(36,16);p("    ");
        switch (choice) {
            case 1:
                push(car);
                break;
            case 2:
                car = pop();
                break;
            case 3:
                n = 11;
                break;
            default:
                g(23, 20);p("Invalid choice. Please try again.\n");        
                delay(1000);g(23,20);p("                                            "); 

        }
    }
}

//PROGRAM #6 : The Binary Tree
int displayBinaryTree()
{
	int x,y,level,nodes;
	char rootnode,node1,node2,node3,node4,node5,node6,node7,node8,node9,node10,node11,node12,node13,node14;
	clrscr();
	
	//menu
	g(34,6);p("BINARY TREE");
    	p("\n\n\n\t              40                           LEVEL 1 [Root]\n");
    	p("\t       /              \\                 \n");
    	p("\t      20              50                   LEVEL 2 [3 nodes]\n");
    	p("\t    /     \\         /      \\              \n");
    	p("\t   4      10       3        6              LEVEL 3 [7 nodes]\n");
    	p("\t  / \\    / \\     /  \\     /  \\            \n");
    	p("\t 5  6    8  3    13  7    67  78           LEVEL 4 [15 nodes]\n\n");
    
    	do 
    	{
       		p("\n\t  Choose a level of the binary tree (from 1 to 4 only): ");s("%d", &level);p("\n");
        	
            if ( level < 1 || level > 4) {
            clrscr();
           p("\tInvalid level. Please choose a level between 1 and 4.\n");
            while (getchar() != '\n');
            getch();
        	}
    	} 
   	while (level < 1 || level > 4);
    
    	//binary tree
    	clrscr();
    	g(11,2);p("NOTICE: This program will help you traverse a binary tree.");
    	g(11,3);p("Ensure familiarity with node placement in the binary tree.");
    	g(20,4);p("Use '-' to indicate the absence of a node.");
    	g(31,6);p("-< BINARY TREE >-");
    
    	switch(level)
    	{
    		case 1:
			g(40,7);s(" %c",&rootnode);
			break;
    		case 2:
			g(40,8);s(" %c",&rootnode);g(39,9);p("/");g(41,9);p("\\");
			g(38,10);s(" %c",&node1);g(42,10);s(" %c",&node2); 
			break;
    		case 3:
			g(40,7);s(" %c",&rootnode); 
			g(37,8);cp("/");g(43,8);p("\\");
			g(36,9);s(" %c",&node1);g(44,9);s(" %c",&node2);
			g(35,10);cp("/");g(37,10);p("\\");g(43,10);p("/");g(45,10);p("\\");
			g(34,11);s(" %c",&node3);g(38,11);s(" %c",&node4);g(42,11);s(" %c",&node5);g(46,11);s(" %c",&node6);
			break;
    		case 4:
			g(40,7);s(" %c",&rootnode); 
			g(35,8);cp("/");g(45,8);p("\\");
			g(34,9);s(" %c",&node1);g(46,9);s(" %c",&node2);
			g(32,10);cp("/");g(36,10);p("\\");g(44,10);p("/");g(48,10);p("\\");
			g(31,11);s(" %c",&node3);g(37,11);s(" %c",&node4);g(43,11);s(" %c",&node5);g(49,11);s(" %c",&node6);
			g(30,12);p("/");g(32,12);p("\\");g(36,12);p("/");g(38,12);p("\\");g(42,12);p("/");g(44,12);p("\\");g(48,12);p("/");g(50,12);p("\\");
			g(29,13);s(" %c",&node7);g(33,13);s(" %c",&node8);g(35,13);s(" %c",&node9);g(39,13);s(" %c",&node10);
        		g(41,13);s(" %c",&node11);g(45,13);s(" %c",&node12);g(47,13);s(" %c",&node13);g(51,13);s(" %c",&node14);
			break;
	}

   	//border for visual 
    	g(33,16);p("-< TRAVERSAL >-");
    	for(x=14;x<=66;x++)
		{
		g(x,15);cp("Í");g(x,21);cp("Í");
		}
	for(y=15;y<=21;y++)
		{
		g(14,y);cp("º");g(66,y);cp("º");
		}
		g(14,15);cp("É");g(66,21);cp("È");g(66,15);cp("»");g(14,21);cp("¼");

	//the following includes the exclusion of nodes with "-" in the preorder, inorder, and postorder traversals
    	switch(level)
    	{
    		case 1:
            		g(34, 18); p("PREORDER:    ");
            		if (rootnode != '-') p("%c", rootnode);
            		g(34, 19); p("INORDER:     ");
            		if (rootnode != '-') p("%c", rootnode);
            		g(34, 20); p("POSTORDER:   ");
            		if (rootnode != '-') p("%c", rootnode);
            		break;
        	case 2:
            		g(33, 18); p("PREORDER:    ");
            		if (rootnode != '-') p("%c", rootnode);
            		if (node1 != '-') p("%c", node1);
            		if (node2 != '-') p("%c", node2);
            		g(33, 19); p("INORDER:     ");
            		if (node1 != '-') p("%c", node1);
            		if (rootnode != '-') p("%c", rootnode);
            		if (node2 != '-') p("%c", node2);
            		g(33, 20); p("POSTORDER:   ");
            		if (node1 != '-') p("%c", node1);
            		if (node2 != '-') p("%c", node2);
            		if (rootnode != '-') p("%c", rootnode);
            		break;
        	case 3:
            		g(31, 18); p("PREORDER:    ");
            		if (rootnode != '-') p("%c", rootnode);
            		if (node1 != '-') p("%c", node1);
            		if (node3 != '-') p("%c", node3);
            		if (node4 != '-') p("%c", node4);
            		if (node2 != '-') p("%c", node2);
            		if (node5 != '-') p("%c", node5);
            		if (node6 != '-') p("%c", node6);
            		g(31, 19); p("INORDER:     ");
            		if (node3 != '-') p("%c", node3);
            		if (node1 != '-') p("%c", node1);
            		if (node4 != '-') p("%c", node4);
            		if (rootnode != '-') p("%c", rootnode);
            		if (node5 != '-') p("%c", node5);
            		if (node2 != '-') p("%c", node2);
            		if (node6 != '-') p("%c", node6);
            		g(31, 20); p("POSTORDER:   ");
            		if (node3 != '-') p("%c", node3);
            		if (node4 != '-') p("%c", node4);
            		if (node1 != '-') p("%c", node1);
            		if (node5 != '-') p("%c", node5);
            		if (node6 != '-') p("%c", node6);
            		if (node2 != '-') p("%c", node2);
            		if (rootnode != '-') p("%c", rootnode);
            		break;
        	case 4:
            		g(26, 18); p("PREORDER:    ");
            		if (rootnode != '-') p("%c", rootnode);
            		if (node1 != '-') p("%c", node1);
           		if (node3 != '-') p("%c", node3);
            		if (node7 != '-') p("%c", node7);
            		if (node8 != '-') p("%c", node8);
            		if (node4 != '-') p("%c", node4);
            		if (node9 != '-') p("%c", node9);
            		if (node10 != '-') p("%c", node10);
            		if (node2 != '-') p("%c", node2);
           		if (node5 != '-') p("%c", node5);
            		if (node11 != '-') p("%c", node11);
            		if (node12 != '-') p("%c", node12);
            		if (node6 != '-') p("%c", node6);
            		if (node13 != '-') p("%c", node13);
            		if (node14 != '-') p("%c", node14);
            		g(26, 19); p("INORDER:     ");
            		if (node7 != '-') p("%c", node7);
            		if (node3 != '-') p("%c", node3);
            		if (node8 != '-') p("%c", node8);
            		if (node1 != '-') p("%c", node1);
            		if (node9 != '-') p("%c", node9);
            		if (node4 != '-') p("%c", node4);
            		if (node10 != '-') p("%c", node10);
            		if (rootnode != '-') p("%c", rootnode);
            		if (node11 != '-') p("%c", node11);
            		if (node5 != '-') p("%c", node5);
            		if (node12 != '-') p("%c", node12);
            		if (node2 != '-') p("%c", node2);
            		if (node13 != '-') p("%c", node13);
            		if (node6 != '-') p("%c", node6);
            		if (node14 != '-') p("%c", node14);
            		g(26, 20); p("POSTORDER:   ");
            		if (node7 != '-') p("%c", node7);
            		if (node8 != '-') p("%c", node8);
            		if (node3 != '-') p("%c", node3);
            		if (node9 != '-') p("%c", node9);
            		if (node10 != '-') p("%c", node10);
            		if (node4 != '-') p("%c", node4);
            		if (node1 != '-') p("%c", node1);
           		if (node11 != '-') p("%c", node11);
            		if (node12 != '-') p("%c", node12);
            		if (node5 != '-') p("%c", node5);
            		if (node13 != '-') p("%c", node13);
            		if (node14 != '-') p("%c", node14);
            		if (node6 != '-') p("%c", node6);
            		if (node2 != '-') p("%c", node2);
            		if (rootnode != '-') p("%c", rootnode);
            		break;
    	}
    	getch();
	return 0;
}

//PROGRAM #7 : Digital Timer
void displayTime(int hr, int min, int sec);

int displayDigitalTimer()
{
    int hr, min, sec;
    char key;

    for (hr = 0; hr <= 1;) {
	for (min = 0; min <= 59;) {
	    for (sec = 0; sec <= 59;) {
		clrscr(); // Clear the screen
		displayTime(hr, min, sec);

		// Check for keypress
		if (kbhit()) {
		    key = getch();
		    switch (key) {
			case 'S':
			case 's':
			    return 0; // Stop the program
			case 'P':
			case 'p':
			    getch(); // Wait for another key to resume
			    break;
			case 'R':
			case 'r':
			    sec = min = hr = 0; // Reset time
			    break;
		    }
		}

		delay(1000); // Delay for 1 second (1000 milliseconds)
		sec++;

		// Check for overflow and update minutes
		if (sec == 60) {
		    sec = 0;
		    min++;
		}

		// Check for overflow and update hours
		if (min == 60) {
		    min = 0;
		    hr++;
		}
	    }
	}
    }
return 0;
}

void displayTime(int hr, int min, int sec) {
    int x, y;
    textcolor(LIGHTBLUE); g(34,5); cp("DIGITAL CLOCK");
    for (x=30; x<=50; x++)
    {
    	g(x,10); p(" ");g(x,14); p(" ");
    }
    for (y=10; y<=14; y++)
    {
        g(30, y); p(" ");g(50, y); p(" ");
    }

    textcolor(WHITE);g(36,12); cp("%02d:%02d:%02d", hr, min, sec);
    textcolor(RED); g(24,19); cp("[S]"); textcolor(WHITE); g(28,19); cp("Stop");    
    textcolor(YELLOW); g(35,19); cp("[P]"); textcolor(WHITE); g(39,19); cp("Pause");
    textcolor(GREEN); g(47,19); cp("[R]"); textcolor(WHITE); g(51,19); cp("Reset");
}

//PROGRAM #8 : Fibonacci
void displayFibonacci()
{
    unsigned long long i, n, number, result,x,y;
    unsigned long long t1 = 0, t2 = 1;
    unsigned long long nextTerm = t1 + t2;
    unsigned long long count = 0;

    clrscr();
    do {
        g(23,3); p("Enter the number of terms (1-47): ");
        result = s("%llu", &n);

        if (result != 1 || n < 1 || n > 47) {
            g(10,5); p("Invalid input. Please enter a valid number between 1 and 47.\n");
            while (getchar() != '\n');
            getch();
            clrscr();

            while (getchar() != '\n');
        }
    } 
    
    while (result != 1 || n < 1 || n > 47);

    p("You entered: %llu\n", n);
    clrscr(); 

    if (n <= 19) 
    {
        for(x=10;x<=70;x++){
        	g(x,2); p("%c",219); 
        	g(x,4); p("%c",219); 
        	g(x,n+6);p("%c",219);
        } 
        for(y=3; y<=n+6;y++){
        	g(10,y);p("%c",219); 
        	g(40,y);p("%c",219); 
        	g(70,y);p("%c",219);
        }
                g(27, 1); p("Fibonacci Sequence Table: ");
                g(24,3); p("Term");
                g(45,3); p("Fibonacci Sequence");
                
                for (i = 0; i <= n; ++i) {
                        g(26, 5 + i); p("%llu ", i);
                    	if (i == 0) {
                       		g(52, 5); p("%llu ", t1);
                    	} 
			else if (i == 1) {
                        	g(52, 6); p("%llu ", t2); 	
                    	} 
			else {
                        	number = nextTerm;
                        	count = 0;
                        	while (number != 0) {
                            		number = number / 100;
                            		count++;
                            }
                        g(53 - count, 5 + i); p("%llu ", nextTerm);
                        t1 = t2;
                        t2 = nextTerm;
                        nextTerm = t1 + t2;
            }
                }
    } 
    else if (n <= 38) {
        for(x=5;x<=75;x++){
        	g(x,2); p("%c",219);
        	g(x,4); p("%c",219);
        	g(x,25);p("%c",219);
        }
        for(y=3; y<=25;y++){
        	g(5,y);p("%c",219);
        	g(15,y);p("%c",219);
        	g(40,y);p("%c",219);
        	g(50,y);p("%c",219);
        	g(75,y);p("%c",219);
        }
                g(27, 1); p("Fibonacci Sequence Table: ");
                g(9,3); p("Term");g(20,3); p("Fibonacci Sequence"); 
                g(44,3); p("Term");g(55,3); p("Fibonacci Sequence");
                
            	for (i = 0; i <= n; ++i) {
            		if (i <= 19) {
                        	g(10, 5 + i);
                    } 
                    	else {
                        	g(45, -15 + i);
                    	}
                    	p("%llu ", i);
                    	if (i == 0) {
                        	g(27, 5);
                        	p("%llu ", t1);
                    	} 
                    	else if (i == 1) {
                        	g(27, 6);
                        	p("%llu ", t2);
                    	} 
                    	else {
                        	number = nextTerm;
                        	count = 0;
                        	while (number != 0) {
                            		number = number / 100;
                            		count++;
                        	}
                            if (i <= 19) {
                                g(28 - count, 5 + i);
                            } 
                            else {
                                g(63 - count, -15 + i);
                            }
                        
                            p("%llu ", nextTerm);
                            t1 = t2;
                            t2 = nextTerm;
                            nextTerm = t1 + t2;
                        }
                }
    } 
    else if (n <= 100) {
        for(x=1;x<=79;x++){
            g(x,3); p("%c",219);
            g(x,5); p("%c",219);
            g(x,25);p("%c",219);
        }
        for(y=3; y<=25;y++){
            g(1,y);p("%c",219);
            g(6,y);p("%c",219);
            g(27,y);p("%c",219);
            g(32,y);p("%c",219);
            g(54,y);p("%c",219);
            g(59,y);p("%c",219);
            g(80,y);p("%c",219);
        }
                g(27, 1); p("Fibonacci Sequence Table: ");
                g(2,3); p("Term");g(7,3); p("Fibonacci Sequence");
                g(28,3); p("Term");g(33,3); p("Fibonacci Sequence");
                g(55,3); p("Term");g(60,3); p("Fibonacci Sequence");
                
                for (i = 0; i <= n; ++i) {
        
            		if (i <= 18) {
                        g(3, 5 + i);
                    } 
                    else if (i <= 37) {
                        g(29 , -14 + i);
                    } 
                    else {
                        g(56 , -33 + i);
                    }
            
                    p("%llu ", i);
            
                    if (i == 0) {
                        g(15, 5);
                        p("%llu ", t1);
                    } 
                    else if (i == 1) {
                        g(15, 6);
                        p("%llu ", t2);
                    } 
                    else {
                        number = nextTerm;
                        count = 0;
                        while (number != 0) {
                            number = number / 100;
                            count++;
                        }
                        if (i <= 18) {
                            g(16 - count, 5+ i);
                        } 
                        else if (i <= 37) {
                            g(43 - count, -14 + i);
                        } 
                        else {
                            g(70 - count, -33 + i);
                        }
                        
                        p("%llu ", nextTerm);
                        t1 = t2;
                        t2 = nextTerm;
                        nextTerm = t1 + t2;
                    }
                }
    }
    getch();

}

//PROGRAM #9 : Garage Queue
int queue[slot], front = -1, rear = -1, choice, found = 0, platenumber, i, enterAgain, removeMore, plateNumber;
int enqueue();
int dequeue();
void display_garage(void);

int displayGarageQueue()
{
    clrscr();
    g(17, 3);p("***********************************************");
    g(39, 4);p("MENU");
    g(17, 5);p("***********************************************");
    g(31, 6);p("[1]");g(36, 6);p("Car Arrival");
    g(31, 7);p("[2]");g(36, 7);p("Car Departure");
    g(31, 8);p("[3]");g(36, 8);p("Quit Program");
    g(17, 9);p("***********************************************");

    do{
        g(17, 11);p("Enter your choice: ");g(36, 11);s("%d", &choice);
        
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                break;
            default:
                g(17, 13);p("Kindly choose from the menu only.");
        }
    } 
    while (choice != 3);
    return 0;
}

int enqueue() 
{
    do {
        clrscr();
        if (rear == slot - 1){
            g(30, 5); p("The garage is full.");
            getch();
            return displayGarageQueue(); 
        } 
        else{
            if (front == -1){
                front = 0;
            }
            
            g(15, 4); p("Enter the car number of the car you want to park: \n");
            g(65, 4); s("%d", &platenumber);
            rear++;
            queue[rear] = platenumber;
            display_garage();
        }

        do {
            p("\n\n\n\t   Do you want to add another car? (1 for Yes, 0 for No):  "); s("%d", &enterAgain);

            if (enterAgain != 0 && enterAgain != 1){
                p("\n\t   Invalid input. Please enter 1 for Yes or 0 for No.\n");
            }
        }
        while (enterAgain != 0 && enterAgain != 1);
        if (enterAgain == 0){
            return displayGarageQueue(); 
        }
    }
    while (enterAgain == 1);
    return 0;
}

int dequeue() {
    do {
        int tempFront = front; 
        clrscr();

        if (front == -1 && rear == -1) {
            p("\n\t\t\t    The garage is empty.\n");
            getch();
            return displayGarageQueue();
        } 
        else {
            g(20, 4); p("Enter the car number you want to remove: ");
            s("%d", &platenumber);

            found = 0;
            for (i = front; i <= rear; i++) {
                if (queue[i] == platenumber) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                while (tempFront <= rear) {
                    if (queue[tempFront] == platenumber) {
                        p("\n\t\t     Car %d has been removed from the garage.", platenumber);
                        front = tempFront + 1;
                        break;
                    } 
                    else {
                        p("\n\t\t  Removing car %d from the front of the garage.", queue[tempFront]);
                        tempFront++;
                    }
                }
                display_garage();
                if (front > rear) {
                    front = rear = -1;
                }
            }
            else {
                p("\n\t\t\t   Car %d is not in the garage.\n", platenumber);
            }
            if (tempFront <= rear) {
                do {
                    p("\n\n\t   Do you want to remove another car? (1 for Yes, 0 for No): ");
                    s("%d", &removeMore);
                    
                    if (removeMore != 0 && removeMore != 1) {
                        p("\n\t  Invalid input. Please enter 1 for Yes or 0 for No.\n");
                    }
                } while (removeMore != 0 && removeMore != 1);
            }
            if (removeMore == 0) {
                return displayGarageQueue();
            }
        }
    } while (removeMore == 1);
    return 0;
}

void display_garage() 
{
  if (rear == -1)
    p("\n\t\t\t    The garage is empty.\n");
  else 
  {
    p("\n\n\t\t\t\tTHE CAR GARAGE\n");
    for (i = front; i <= rear; i++)
      p("\n\t\t\t\t   car[%d]", queue[i]);
  }
  p("\n");
}

//PROGRAM #10 : Factorial
int displayFactorial()
{
    unsigned long long i, n, number, result;
    unsigned long long Factorial = 1;
    unsigned long long count = 0;
    int x,y;
    
    clrscr(); 
    do 
    {
        g(15,3); p("Enter a number of the Factorial you want (1-12): "); //ask user for input
        result = s("%llu", &n);
        
        if (result != 1 || n < 1 || n > 12) {
            g(10,5);p("Invalid input. Please enter a valid number between 1 and 12.\n");
            while (getchar() != '\n');
            getch();
            clrscr();
        }
    } 
    
    while (result != 1 || n < 1 || n > 12);

    g(32, 6);p("FACTORIAL TABLE: ");
    for(x=20;x<=60;x++){
    g(x,7); p("Í"); g(x,9); p("Í"); g(x,n+10);p("Í");
    }
            g(30,8); p("n"); g(49,8); p("n!");
            for (i = 1; i <= n; ++i) 
            {
                    g(30, 9 + i);
                    p("%llu ", i);
    
    		    number = Factorial;
                    count = 0;
                    while (number != 0){
                        number = number / 100;
                        count++;
                    }

    		    Factorial= i * Factorial;
                    g(50 - count, 9+ i);
                    p("%llu ", Factorial);
    	    }
    getch();
    return 0;
}

//PROGRAM #11 : Tower of Hanoi
void outline();
void p1();void p2();void p3();void p4();void p5();void p6();void p7();void p8();
void p9();void p10();void p11();void p12();void p13();void p14();void p15();
void p16();void p17();void p18();void p19();void p20();void p21();void p22();
void p23();void p24();void p25();void p26();void p27();void p28();void p29();
void p30();void p31();void start();

void displayTowerofHanoi()
{
    // Function to print the outlines of
    // the animations
    // Driver Code
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Specify the path as per your setup
    
    // Calling start() function
	start();p1();p2();p3();p4();p5();p6();p7();p8();p9();p10();
	p11();p12();p13();p14();p15();p16();p17();p18();p19();p20();
	p21();p22();p23();p24();p25();p26();p27();p28();p29();p30();p31();

	// Holding screen for a while
	getch();

	// Close the initialized gdriver
	closegraph();
}

// Function for moving the Green Disk
// to Third Tower On Top Of Blue Disk
void outline()
{
	// 1st Line
	line(160 , 100 , 160 , 300);
	// 2nd Line
	line(320 , 100 , 320 , 300);
	// 3rd Line
	line(480 , 100 , 480 , 300);
	
	// Printing Message
	g(33,2);p("TOWER OF HANOI");
	g(20,20);p("(1)");
	g(40,20);p("(2)");
	g(60,20);p("(3)");
}

void p31()
{
	getch();
	cleardevice();
	g(35,4);p("31ST PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 190, 530, 220);
	floodfill(450, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 150, 520, 180);
	floodfill(450, 160, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 110, 510, 140);
	floodfill(500, 125, 15);
	// calling outline() function
	outline();
}

void p30()
{
	getch();
	cleardevice();
	g(35,4);p("30TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 190, 530, 220);
	floodfill(450, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 150, 520, 180);
	floodfill(450, 160, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(125, 270, 190, 300);
	floodfill(160, 280, 15);
	// calling outline() function
	outline();
}

void p29()
{
	getch();
	cleardevice();
	g(35,4);p("29TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 190, 530, 220);
	floodfill(450, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(350, 280, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(125, 270, 190, 300);
	floodfill(160, 280, 15);
	// calling outline() function
	outline();
}

void p28()
{
	getch();
	cleardevice();
	g(35,4);p("28TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 190, 530, 220);
	floodfill(450, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(350, 280, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(300, 250, 15);
	// calling outline() function
	outline();
}

void p27()
{
	getch();
	cleardevice();
	g(35,4);p("27TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(350, 280, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(300, 250, 15);
	// calling outline() function
	outline();
}

void p26()
{
	getch();
	cleardevice();
	g(35,4);p("26TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(350, 280, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(480, 200, 15);
	// calling outline() function
	outline();
}

void p25()
{
	getch();
	cleardevice();
	g(35,4);p("25TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(480, 200, 15);
	// calling outline() function
	outline();
}


void p24()
{
	getch();
	cleardevice();
	g(35,4);p("24TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(420, 230, 540, 260);
	floodfill(500, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(180, 200, 15);
	// calling outline() function
	outline();
}

void p23()
{
	getch();
	cleardevice();
	g(35,4);p("23RD PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(180, 200, 15);
	// calling outline() function
	outline();
}

void p22()
{
	getch();
	cleardevice();
	g(35,4);p("22ND PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(300, 250, 15);
	// calling outline() function
	outline();
}

void p21()
{
	getch();
	cleardevice();
	g(35,4);p("21ST PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(450, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(300, 250, 15);
	// calling outline() function
	outline();
}

void p20()
{
	getch();
	cleardevice();
	g(35,4);p("20TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(110, 270, 210, 300);
	floodfill(150, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(450, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(460, 200, 15);
	// calling outline() function
	outline();
}

void p19()
{
	getch();
	cleardevice();
	g(35,4);p("19TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(450, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(460, 200, 15);
	// calling outline() function
	outline();
}

void p18()
{
	getch();
	cleardevice();
	g(35,4);p("18TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(450, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 270, 210, 300);
	floodfill(160, 280, 15);
	// calling outline() function
	outline();
}

void p17()
{
	getch();
	cleardevice();
	g(35,4);p("17TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 190, 360, 220);
	floodfill(350, 200, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 270, 210, 300);
	floodfill(160, 280, 15);
	// calling outline() function
	outline();
}

void p16()
{
	getch();
	cleardevice();
	g(35,4);p("16TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(410, 270, 550, 300);
	floodfill(450, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 190, 360, 220);
	floodfill(350, 200, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 150, 350, 180);
	floodfill(300, 170, 15);
	// calling outline() function
	outline();
}

void p15()
{
	getch();
	cleardevice();
	g(35,4);p("15TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(90, 270, 230, 300);
	floodfill(100, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 190, 360, 220);
	floodfill(350, 200, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 150, 350, 180);
	floodfill(300, 170, 15);
	// calling outline() function
	outline();
}

void p14()
{
	getch();
	cleardevice();
	g(35,4);p("14TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(90, 270, 230, 300);
	floodfill(100, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 190, 360, 220);
	floodfill(350, 200, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 270, 510, 300);
	floodfill(480, 280, 15);
	// calling outline() function
	outline();
}

void p13()
{
	getch();
	cleardevice();
	g(35,4);p("13TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(90, 270, 230, 300);
	floodfill(100, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 270, 510, 300);
	floodfill(480, 280, 15);
	// calling outline() function
	outline();
}

void p12()
{
	getch();
	cleardevice();
	g(35,4);p("12TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(90, 270, 230, 300);
	floodfill(100, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(270, 230, 370, 260);
	floodfill(280, 250, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(180, 200, 15);
	// calling outline() function
	outline();
}

void p11()
{
	getch();
	cleardevice();
	g(35,4);p("11TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(90, 270, 230, 300);
	floodfill(100, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(300, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(500, 280, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(150, 250, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(180, 200, 15);
	// calling outline() function
	outline();
}

void p10(){
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("10TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(320, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(120, 230, 200, 260);
	floodfill(180, 245, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(320, 245, 15);
	outline();
}

void p9()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("9TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(320, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(480, 245, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(320, 245, 15);
	outline();
}

void p8()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("8TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(260, 270, 380, 300);
	floodfill(320, 285, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(480, 245, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(480, 205, 15);
	outline();
}

void p7()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("7TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(480, 245, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 190, 510, 220);
	floodfill(480, 205, 15);
	outline();
}

void p6()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("6TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(440, 230, 520, 260);
	floodfill(480, 245, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(170, 215, 15);
	outline();
}

void p5()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("5TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(320, 285, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(130, 190, 190, 220);
	floodfill(170, 215, 15);
	outline();
}

void p4()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("4TH PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(200, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(430, 270, 530, 300);
	floodfill(480, 285, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(320, 285, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(335, 245, 15);
	outline();
}

void p3()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("3RD PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(150, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(105, 190, 210, 220);
	floodfill(160, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(320, 285, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(290, 230, 350, 260);
	floodfill(335, 245, 15);
	outline();
}

void p2()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("2ND PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(150, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(105, 190, 210, 220);
	floodfill(160, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(280, 270, 360, 300);
	floodfill(320, 285, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 270, 510, 300);
	floodfill(480, 285, 15);
	outline();
}

// Function for moving the Green Disk
// To Third Tower
void p1()
{
	getch();
	// Starting Condition
	cleardevice();
	g(35,4);p("1ST PHASE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(150, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(105, 190, 210, 220);
	floodfill(160, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(115, 150, 200, 180);
	floodfill(130, 160, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(450, 270, 510, 300);
	floodfill(480, 285, 15);
	outline();
}

// Function to start the animations
void start()
{
	// Starting Condition
	cleardevice();
	g(32,4);p("BEGINNING STATE");
	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(85, 270, 230, 300);
	floodfill(150, 285, 15);
	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(95, 230, 220, 260);
	floodfill(160, 245, 15);
	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(105, 190, 210, 220);
	floodfill(160, 200, 15);
	// Yellow Coloring Of Disk
	setfillstyle(SOLID_FILL, YELLOW);
	rectangle(115, 150, 200, 180);
	floodfill(130, 160, 15);
	// Magenta Coloring Of Disk
	setfillstyle(SOLID_FILL, MAGENTA);
	rectangle(125, 110, 190, 140);
	floodfill(160, 125, 15);
	// calling outline() function
	outline();
}

int getIntInput(i) {
    int input, result,j;
    while (1) { 
          g(39,8+i); result = s("%d", &input);
        if (result == 1) {
            // Input is a valid integer
            break;
        } else {
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
            g(20,8+i);p("Invalid input. Please enter an integer.\n");
getch();
g(20,8+i);p("                                           ");
        }
    }
    return input;
}


void displayBinarySearchTree()
{
    int x, y, level, n, i, j, temp;
    int arr[15];
    int rootnode, node1, node2, node3, node4, node5, node6, node7, node8, node9, node10, node11, node12, node13, node14;
    clrscr();
	//menu
	g(34,6);p("BINARY TREE");
    p("\n\n\n\t               8                           LEVEL 1 [Root]\n");
    p("\t       /              \\                 \n");
    p("\t       4              12                   LEVEL 2 [3 nodes]\n");
    p("\t    /     \\         /      \\              \n");
    p("\t   2       6      10       14              LEVEL 3 [7 nodes]\n");
    p("\t  / \\    / \\     /  \\     /  \\            \n");
    p("\t 1  3   5   7    9  11    13  15           LEVEL 4 [15 nodes]\n\n");
    
       do {
            p("\n\t  Choose a level of the binary tree (from 1 to 4 only): ");
            s("%d", &level);

            if ( level < 1 || level > 4) {
            clrscr();
           p("\tInvalid level. Please choose a level between 1 and 4.\n");
            while (getchar() != '\n');
            getch();


}
       } 
        while (level < 1 || level > 4);

        switch (level) 
        {
            case 1: n = 1; break;
            case 2: n = 3; break;
            case 3: n = 7; break;
            case 4: n = 15; break;
        }
    clrscr();
    clrscr();
    g(11,1);p("NOTICE: This program will help you traverse a binary tree.");
    g(8,2);p("Any elements you have listed will be arranged in ascending order ");
    g(6,3);p("(The smallest elements will be on the left side of the binary tree and ");
    g(8,4);p("The largest elements will be on the right side of the binary tree )");
    g(31,7);p("Enter %d elements:\n", n);
    



    for (i = 0; i < n; i++) {
        g(39,8+i);arr[i] = getIntInput(i);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    clrscr();
    clrscr();
    g(11,1);p("NOTICE: This program will help you traverse a binary tree.");
    g(8,2);p("Any elements you have listed will be arranged in ascending order ");
    g(6,3);p("(The smallest elements will be on the left side of the binary tree and ");
    g(8,4);p("The largest elements will be on the right side of the binary tree )");
    g(25,6);p("-< ARRANGED BINARY SEARCH TREE >-");
    
    if (level == 1)
    {
        g(40, 7); p("%d ", arr[0]); 
    	rootnode = arr[0];
    }
    else if (level == 2)
    {
        g(40, 8); p("%d ", arr[1]);  g(39, 9); p("/"); g(41, 9); p("\\");
        g(38, 10); p("%d ", arr[0]); g(42, 10); p("%d ", arr[2]);
    	rootnode = arr[1];node1= arr[0];  node2= arr[2];
    }
    else if (level == 3)
    {
        g(40, 7); p("%d ", arr[3]); 
        g(37, 8); p("/"); g(43, 8); p("\\");
        g(36, 9); p("%d ", arr[1]);  g(44, 9); p("%d ", arr[5]); 
        g(35, 10); p("/"); g(37, 10); p("\\"); g(43, 10); p("/"); g(45, 10); p("\\");
        g(34, 11); p("%d ", arr[0]); g(38, 11); p("%d ", arr[2]); 
        g(42, 11); p("%d ", arr[4]); g(46, 11); p("%d ", arr[6]); 
    	rootnode= arr[3];node1= arr[1];node2= arr[5];node3= arr[0]; node4= arr[2];node5= arr[4]; node6= arr[6];
    }
    else if (level == 4)
    {
    	g(40,7);p("%d ", arr[7]);
    	g(35,8);p("/");g(45,8);p("\\");
    	g(34,9);p("%d ", arr[3]);g(46,9);p("%d ", arr[12]);
    	g(32,10);p("/");g(36,10);p("\\");g(44,10);p("/");g(48,10);p("\\");
    	g(31,11);p("%d ", arr[1]);g(37,11);p("%d ", arr[5]);g(43,11);p("%d ", arr[9]);g(49,11);p("%d ", arr[13]);
    	g(30,12);p("/");g(32,12);p("\\");g(36,12);p("/");g(38,12);p("\\");g(42,12);p("/");g(44,12);p("\\");g(48,12);p("/");g(50,12);p("\\");
    	g(29,13);p("%d ", arr[0]);g(33,13);p("%d ", arr[2]);g(35,13);p("%d ", arr[4]);g(39,13);p("%d ", arr[6]); g(41,13);p("%d ", arr[8]);g(45,13);p("%d ", arr[10]);g(47,13);p("%d ", arr[12]);g(51,13);p("%d ", arr[14]);
    	rootnode= arr[7]; node1= arr[3];node2= arr[12];node3= arr[1];node4= arr[5];node5= arr[9];node6= arr[13];node7= arr[0];node8= arr[2];node9= arr[4];node10= arr[6]; node11= arr[8];node12= arr[10]; node13= arr[12]; node14= arr[14];
    }
    
        g(33,16);p("-< TRAVERSAL >-");
        for(x=14;x<=66;x++)
    		{
    		g(x,15);p("%c",219);g(x,21);p("%c",219);
    		}
    	for(y=15;y<=21;y++)
    		{
    		g(14,y);p("%c",219);g(66,y);p("%c",219);
    		}
    	g(14,15);p("%c",219);g(66,21);p("%c",219);g(66,15);p("%c",219);g(14,21);p("%c",219);
    	
    if (level == 1)
    {
        g(34, 18); p("PREORDER:    ");
        p("%d", rootnode);
        g(34, 19); p("INORDER:     ");
        p("%d", rootnode);
        g(34, 20); p("POSTORDER:   ");
        p("%d", rootnode);
    }
    
    else if (level == 2)
    {
        g(33, 18); p("PREORDER:    ");
        p("%d", rootnode);
        p("%d", node1);
        p("%d", node2);
        g(33, 19); p("INORDER:     ");
        p("%d", node1);
	    p("%d", rootnode);
	    p("%d", node2);
        g(33, 20); p("POSTORDER:   ");
	    p("%d", node1);
	    p("%d", node2);
	    p("%d", rootnode);
    }

    else if (level == 3)
    {
        g(31, 18); p("PREORDER:    ");
	    p("%d", rootnode);
	    p("%d", node1);
	    p("%d", node3);
 	    p("%d", node4);
 	    p("%d", node2);
	    p("%d", node5);
 	    p("%d", node6);
        g(31, 19); p("INORDER:     ");
	    p("%d", node3);
 	    p("%d", node1);
 	    p("%d", node4);
  	    p("%d", rootnode);
	    p("%d", node5);
	    p("%d", node2);
	    p("%d", node6);
        g(31, 20); p("POSTORDER:   ");
	    p("%d", node3);
 	    p("%d", node4);
	    p("%d", node1);
	    p("%d", node5);
	    p("%d", node6);
	    p("%d", node2);
 	    p("%d", rootnode);
    }
    else if (level == 4)
    {
 	    g(26, 19); p("INORDER:     ");
 	    p("%d", node7);
	    p("%d", node3);
	    p("%d", node8);
	    p("%d", node1);
	    p("%d", node9);
	    p("%d", node4);
	    p("%d", node10);
	    p("%d", rootnode);
	    p("%d", node11);
	    p("%d", node5);
 	    p("%d", node12);
 	    p("%d", node2);
	    p("%d", node13);
	    p("%d", node6);
 	    p("%d", node14);
        g(26, 18); p("PREORDER:    ");
 	    p("%d", rootnode);
	    p("%d", node1);
 	    p("%d", node3);
 	    p("%d", node7);
	    p("%d", node8);
 	    p("%d", node4);
 	    p("%d", node9);
 	    p("%d", node10);
	    p("%d", node2);
 	    p("%d", node5);
	    p("%d", node11);
	    p("%d", node12);
	    p("%d", node6);
	    p("%d", node13);
	    p("%d", node14);
           
        g(26, 20); p("POSTORDER:   ");
 	    p("%d", node7);
	    p("%d", node8);
	    p("%d", node3);
	    p("%d", node9);
	    p("%d", node10);
	    p("%d", node4);
 	    p("%d", node1);
 	    p("%d", node11);
 	    p("%d", node12);
 	    p("%d", node5);
	    p("%d", node13);
	    p("%d", node14);
	    p("%d", node6);
	    p("%d", node2);
	    p("%d", rootnode);
    }
    getch();
}

//asking user if he/she wants to return to the main menu
void displayReturnOrExitMessage() 
{
    char userInput;  
    do {
        clrscr();
        textcolor(WHITE);
        g(21, 12);cp("Do you want to return to the main menu?");
        g(26, 13);cp("Press 'Y' if yes or 'N' if no: ");
        g(57,13);s("%c", &userInput);

	    do {
        userInput = getch();
            switch(userInput)
            {
                case 'Y':
                case 'y':
                    // Code to handle when the user wants to return to the main menu
                    return;
                case 'N':
                case 'n':
                    textcolor(YELLOW);
                    g(15, 15); cp("Thank you for using this program! Have a nice day!");
                    exit(0);  // Exit the program;
                default:
                    // Code for handling invalid input
                    break;
            }
        } while (1);

    } while (userInput != 'N' && userInput != 'n');
}

//Menu Interface
void main()
{
    int x, y, choice=0;
    char userInput;
    while (choice != 13)
{
	clrscr();
    textcolor(LIGHTGREEN);g(32,4);cp("Group 2's Archive");

	textcolor(LIGHTCYAN);g(26,7);cp("[1]");textcolor(WHITE);g(31,7);cp("Square and Cube");
	textcolor(LIGHTCYAN);g(26,8);cp("[2]");textcolor(WHITE);g(31,8);cp("The Maze");
	textcolor(LIGHTCYAN);g(26,9);cp("[3]");textcolor(WHITE);g(31,9);cp("CoE Bar Graph");
	textcolor(LIGHTCYAN);g(26,10);cp("[4]");textcolor(WHITE);g(31,10);cp("Tic Tac Toe");
	textcolor(LIGHTCYAN);g(26,11);cp("[5]");textcolor(WHITE);g(31,11);cp("Car Garage (Stack)");
	textcolor(LIGHTCYAN);g(26,12);cp("[6]");textcolor(WHITE);g(31,12);cp("Binary Tree");
	textcolor(LIGHTCYAN);g(26,13);cp("[7]");textcolor(WHITE);g(31,13);cp("Digital Timer");
	textcolor(LIGHTCYAN);g(26,14);cp("[8]");textcolor(WHITE);g(31,14);cp("The Fibonacci Sequence");
	textcolor(LIGHTCYAN);g(26,15);cp("[9]");textcolor(WHITE);g(31,15);cp("Car Garage (Queue)");
	textcolor(LIGHTCYAN);g(26,16);cp("[10]");textcolor(WHITE);g(31,16);cp("Factorial Calculator");
	textcolor(LIGHTCYAN);g(26,17);cp("[11]");textcolor(WHITE);g(31,17);cp("Tower of Hanoi");
	textcolor(LIGHTCYAN);g(26,18);cp("[12]");textcolor(WHITE);g(31,18);cp("Binary Search Tree");
	textcolor(RED);g(26,19);cp("[13]");textcolor(WHITE);g(31,19);cp("Quit Program");
	g(19,22);cp("Enter the no. of program you want to run: ");

	textcolor(WHITE);
	for(x=24;x<=54;x++)
		{
		g(x,6);cp("Í");g(x,20);cp("Í");
		}
	for(y=6;y<=20;y++)
		{
		g(24,y);cp("º");g(54,y);cp("º");
		}
	g(24,6);cp("É");g(54,20);cp("¼");g(54,6);cp("»");g(24,20);cp("È");
	g(61,22);scanf("%d", &choice);

//SWITCH CASE
	switch(choice)
	{
		case 1:
		    displayCubeAndSquares();
		    displayReturnOrExitMessage();
			break;

		case 2:
		    displayTheMaze();
		    displayReturnOrExitMessage();
			break;

		case 3:
			displayEngineeringData();
			displayReturnOrExitMessage();
			break;

		case 4:
		    displayTicTacToe();
		    displayReturnOrExitMessage();
			break;

		case 5:
		    displayCarGarage();
		    displayReturnOrExitMessage();
			break;

		case 6:
		    displayBinaryTree();
		    displayReturnOrExitMessage();
			break;

		case 7:
		    displayDigitalTimer();
		    displayReturnOrExitMessage();
		    break;
		    
		case 8:
		    displayFibonacci();
		    displayReturnOrExitMessage();
		    break;
		    
		case 9:
		    displayGarageQueue();
		    displayReturnOrExitMessage();
		    break;
		    
		case 10:
		    displayFactorial();
		    displayReturnOrExitMessage();
		    break;
		    
		case 11:
		    displayTowerofHanoi();
		    displayReturnOrExitMessage();
		    break;
		    
		case 12:
		    displayBinarySearchTree();
		    displayReturnOrExitMessage();
		    break;
		    
		case 13:
		    break;
		    
		default:
		textcolor(LIGHTBLUE);g(20, 18);cp("Invalid Input. Choose from the menu only.");
	    getch();
}
}
}



