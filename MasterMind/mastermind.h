#pragma once

//Zachary Neveu | neveu.z@husky.neu.edu
//Jake Dec | dec.j@husky.neu.edu
//
//This file contains the definition of the mastermind class for project 1b.
//Implementations for the functions in this class can be found in
//mastermind.cpp.

class mastermind
{
private:
    code secretCode;
public:
    //Default constructor passes n = 5 and m = 10
	//Secret codes are generated in constructor, because it would be
	//foolish to have a mastermind object without a secret code.
    mastermind()
    {
        code createCode(5, 10); //create new code with 5 and 10
        secretCode = createCode; //set secret code to this new code
    }

    //Constructor can be passed values for n and m
    mastermind(int n, int m)
    {
        code createCode(n, m);
        secretCode = createCode;
    }

	//printCode() prints a code by calling the print code function defined in
	//the code class.
	void printCode() {
		//call print function in code class
		this->secretCode.printCode();
	}

    //humanGuess() reads a guess from the keyboard and returns a code object
    //that represents the guess.  Inputs are validated to be the correct
	//length and to be in the correct range by the code constructor called.
    code humanGuess()

	//getResponse() is passed a guess code, and creates a response object
	//using the guess code and secret code as arguments for the
	//response constructor.  Processing codes into a response is done in the
	//response constructor, because it should not be possible to create a
	//response arbitrarily.
    response getResponse(const code &guessCode)

    //isSolved() is passed a response and returns true if the response is the
    //indicates that the code has been guessed
    bool isSolved(const response &checkResponse)

    //playGame() initializes a random code, prints it to the screen, then
    //iteratively gets a guess from the user and prints the response until the
    //game is over.
    void playGame()
};
