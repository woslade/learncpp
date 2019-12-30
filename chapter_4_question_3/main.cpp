//
//  main.cpp
//  chapter_4_question_3
//
//  Created by Will Slade on 12/27/19.
//  Copyright © 2019 Will Slade. All rights reserved.
//

#include <iostream>
#include "io.h"

int main()
{
    double x { getInput() };
    double y { getInput() };
    
    int oper { getOperator() };
    
    if ( oper == 42 )
        std::cout << "Multiplication: " << x * y << "\n";
    else if ( oper == 43 )
        std::cout << "Addition: " << x + y << "\n";
    else if ( oper == 45 )
        std::cout << "Subtraction: " << x - y << "\n";
    else if ( oper == 47 )
        std::cout << "Division: " << x / y << "\n";
    else
        return 0; //print nothing if invalid selection
        
    return 0;
}

double getInput()
{
    std::cout << "Please enter a number: " << "\n";
    double input {};
    std::cin  >> input;
    
    return input;
}

int getOperator()
{
    std::cout << "Please enter an operator: " << "\n";
    char op {};
    std::cin  >> op;
    
    int op_int { static_cast<int>(op) };
    
    return op_int;
}
