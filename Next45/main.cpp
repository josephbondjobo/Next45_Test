#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdio>
#include <stdlib.h>

/**Author: Jocelyn Bondjobo*/
using namespace std;

char x_board, y_board, x_RoverCoordinate, y_RoverCoordinate;
char cardinalPoint;
void validate();

int main()
{
	cout << "==Rover Program started==" << endl;
	
	string commandList = "";
	
	while(true){		
		cout << "Enter space coordinates (x y): ";
		cin >> x_board >> y_board;//zone
		cout << "Enter the Rover's start coordinates (x y): ";
		cin >> x_RoverCoordinate >> y_RoverCoordinate;
		
		if(x_board < x_RoverCoordinate || y_board < y_RoverCoordinate){
			cout << "Rover's coordinate invalid! Try again." << endl;
		}else{
			break;
		}
	}
	
	while(true){		
		cout << "Enter cardinal point the Rover's facing (E, W, N, S): ";
		cin >> cardinalPoint;

		cardinalPoint = toupper(cardinalPoint);
		
		if(cardinalPoint == 'E' || cardinalPoint == 'W' || cardinalPoint == 'N' || cardinalPoint == 'S'){
			break;
		}else{
			cout << "Rover's cardinal point facing invalid! Try again." << endl;
		}
	}
	
	cout << "Enter list of commands (MRL): "; 
	cin >> commandList;
	cout << endl;
	
	for(int i=0; i< commandList.length(); ++i){
		
		if(toupper(commandList[i]) == 'L' ){
			switch(cardinalPoint){
				case 'N':
					cardinalPoint = 'W';
					break;
				case 'W':
					cardinalPoint = 'S';
					break;
				case 'S':
					cardinalPoint = 'E';
					break;
				case 'E':
					cardinalPoint = 'N';
					break;
				default:
					break;
			}
			//cout << "Pos => " << x_RoverCoordinate << " " << y_RoverCoordinate << " " << cardinalPoint << endl;
		}
		
		if(toupper(commandList[i]) == 'R' ){
			switch(cardinalPoint){
				case 'N':
					cardinalPoint = 'E';
					break;
				case 'E':
					cardinalPoint = 'S';
					break;
				case 'S':
					cardinalPoint = 'W';
					break;
				case 'W':
					cardinalPoint = 'N';
					break;
				default:
					break;
			}
			//cout << "Pos => " << x_RoverCoordinate << " " << y_RoverCoordinate << " " << cardinalPoint << endl;			
		}
		
		if(toupper(commandList[i]) == 'M'){
			switch(cardinalPoint){
				case 'N':
					y_RoverCoordinate++;
					break;
				case 'S':
					y_RoverCoordinate--;
					break;
				case 'E':
					x_RoverCoordinate++;
					break;
				case 'W':
					x_RoverCoordinate--;
					break;
				default:
					break;
			}
			//cout << "Pos => " << x_RoverCoordinate << " " << y_RoverCoordinate << " " << cardinalPoint << endl;
			validate();
		}
	}
	cout << "Position of the Rover is :" << x_RoverCoordinate << " " << y_RoverCoordinate << " " << cardinalPoint << endl;
	
	return 0;
}

void validate(){
	if(x_board < x_RoverCoordinate || y_board < y_RoverCoordinate){
		cout << "Rover's went outside the board. Program terminated!" << endl;
		cout << "Position of the Rover is :" << x_RoverCoordinate << " " << y_RoverCoordinate << " " << cardinalPoint << endl;
		exit(EXIT_FAILURE);
	}
}