#include <iostream>
#include "pwdShape.h"
#include "Square.h"


int main ( int argc, char** argv )
{

    Shape* sh = new Square(5);

    std::cout << sh->area() << std::endl;
}