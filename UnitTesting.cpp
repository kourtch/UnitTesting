// UnitTesting.cpp : This file demonstrates drawback of unit testing
// Unit testing is not testing of a unit. 
// Unit testing is testing of single scenario. 

#include <iostream>

// unit testing framework
int EXPECT_EQUAL(int A, int B)
{
    if (A == B)
    {
        std::cout << "OK" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "FAILED" << std::endl;
        return 1;
    }
}

// function to test RES = A + B
int add(int A, int B)
{
    return A * B; // tipo: "*" instead of "+"
}


int main()
{
    // ordinary unit testing
    EXPECT_EQUAL(add(0, 0), 0); // Ok
    EXPECT_EQUAL(add(2, 2), 4); // Ok
    std::cout << "tipo is not found" << std::endl << std::endl;

    // enchanced unit testing
    for (int i = 0; i <= 2; ++i)
    {
        EXPECT_EQUAL(add(i, i), i + i);
    }
    // i = 0: Ok
    // i = 1: Failed
    // i = 2: Ok
    std::cout << "tipo is found" << std::endl << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
