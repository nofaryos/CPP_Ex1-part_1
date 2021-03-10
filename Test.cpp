/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <cmath>
#include<stdlib.h>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

int num;
int digit;

TEST_CASE("Good snowman code") {
	
	// Random Checks
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	
	CHECK(nospaces(snowman(32412341)) == nospaces("  _  \n /_\\\n\(-..)\n(   )\\\n( : )"));
	
	CHECK(nospaces(snowman(23111133)) == nospaces(" ___ \n.....\n(.,.)\n( : )\n( : )"));
	
	
	CHECK(nospaces(snowman(22222222)) == nospaces("  ___ \n .....\n/(o.o)\\\n (] [)\n (\" \")"));
	
	CHECK(nospaces(snowman(33333333)) == nospaces("   _  \n  /_\\\n (O_O)\n/(> <)\\\n (___)"));
	
	CHECK(nospaces(snowman(44444444)) == nospaces(" ___\n(_*_)\n(- -)\n(   )\n(   )"));
	
	//Checking the eight items, when we choose the first option of each item
	CHECK(nospaces(snowman(11111111)) == nospaces(" _===_\n (.,.)\n<( : )>\n ( : )"));
	
	//Hat
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 7) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(21111111)) == nospaces("  ___ \n .....\n (.,.)\n<( : )>\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(31111111)) == nospaces("   _  \n  /_\\\n (.,.)\n<( : )>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(41111111)) == nospaces("  ___\n (_*_)\n (.,.)\n<( : )>\n ( : )"));
		}	
	
}

	//Nose
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 6) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(12111111)) == nospaces(" _===_\n (...)\n<( : )>\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(13111111)) == nospaces(" _===_\n (._.)\n<( : )>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(14111111)) == nospaces(" _===_\n (. .)\n<( : )>\n ( : )"));
		}	
	
}

	//Left Eye
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 5) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11211111)) == nospaces(" _===_\n (o,.)\n<( : )>\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11311111)) ==nospaces(" _===_\n (O,.)\n<( : )>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11411111)) == nospaces(" _===_\n (-,.)\n<( : )>\n ( : )"));
		}	
	
}

	//Right Eye
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 4) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11121111)) == nospaces(" _===_\n (.,o)\n<( : )>\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11131111)) == nospaces(" _===_\n (.,O)\n<( : )>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11141111)) == nospaces(" _===_\n (.,-)\n<( : )>\n ( : )"));
		}	
	
}

	//Left Arm
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 3) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11112111)) == nospaces("  _===_\n \\(.,.)\n  ( : )>\n  ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11113111)) == nospaces(" _===_\n (.,.)\n/( : )>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11114111)) == nospaces(" _===_\n (.,.)\n ( : )>\n ( : )"));
		}	
	
}

	//Right Arm
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 2) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11111211)) ==nospaces(" _===_\n (.,.)/\n<( : )\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11111311)) == nospaces(" _===_\n (.,.)\n<( : )\\\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11111411)) == nospaces(" _===_\n (.,.)\n<( : )\n ( : )"));
		}	
	
}

	//Torso
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 1) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11111121)) == nospaces(" _===_\n (.,.)\n<(] [)>\n ( : )"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11111131)) == nospaces(" _===_\n (.,.)\n<(> <)>\n ( : )"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11111141)) == nospaces(" _===_\n (.,.)\n<(   )>\n ( : )"));
		}	
	
}

	//Base
	for (int i = 1; i < 4; i++){
		num = i * pow(10, 0) + 11111111;
		if(i == 1){
			CHECK(nospaces(snowman(11111112)) == nospaces(" _===_\n (.,.)\n<( : )>\n (\" \")"));
		}
		if(i == 2){
			CHECK(nospaces(snowman(11111113)) == nospaces(" _===_\n (.,.)\n<( : )>\n (___)"));
		}
		if(i == 3){
			CHECK(nospaces(snowman(11111114)) == nospaces(" _===_\n (.,.)\n<( : )>\n (   )"));
		}	
	
	}
}

TEST_CASE("Bad snowman code - negative number") {

	for(int i = 0 ; i < 20; i++){
		num = 0;
		for(int j = 0; j < 8; j++){
			digit = rand() % 4 +1;
			num += digit * pow(10, j);
		}
		num *= -1;
		CHECK_THROWS(snowman(num));
	}
}

TEST_CASE("Bad snowman code - short numbers, less than eight digits") {
	for(int i = 1 ; i < 8; i++){
		num = 0;
		for(int j = 0; j < i; j++){
			digit = rand() % 4 +1;
			num += digit * pow(10, j);
		}
		CHECK_THROWS(snowman(num));
	}
}

TEST_CASE("Bad snowman code - long numbers, more than eight digits") {
	for(int i = 0 ; i < 5; i++){
		num = 0;
		//9 digits
		for(int j = 0; j < 9; j++){
			digit = rand() % 4 +1;
			num += digit * pow(10, j);
		}
		CHECK_THROWS(snowman(num));
	}
	//10 digits
	CHECK_THROWS(snowman(1234321432));
	CHECK_THROWS(snowman(1444321233));
	CHECK_THROWS(snowman(1222333423));	
}

TEST_CASE("Bad snowman code - invalid numbers") {
	for(int i = 0; i < 8; i++){
		num = 0;
		for(int j = 0; j < 8; j++){
			if(i == j){
				digit = rand() % 5 + 5;
				num += digit * pow(10, j);
			}
			else{	
			digit = rand() % 4 +1;
			num += digit * pow(10, j);
			}
		}
		CHECK_THROWS(snowman(num));
	}
	
}
		
		
		