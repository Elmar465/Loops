#include <iostream>

int main()
{

    /* Long Way
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    std::cout<< "My Name is Elmar " << std::endl;
    */
    /*
    for(unsigned int i{0}; i<100 ; i++) {
        std::cout << i << " :  My name is Elmar " << std::endl;
    }
    std::cout << "Loop Done!"  << std::endl;
    */

    // Use size_t : representation of some unsigned int for positive numbers [sizes]
    /*
    for (size_t i{0}; i< 10 ; i++) {
        std::cout << i << " : My name is Elmar " << std::endl;
    }
    std::cout << "Loop Done!"  << std::endl;
    */
    /*
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */

    // Scope of the iterator

    /*
    for(size_t i{0}; i < 10; i++) {
        std::cout << i << " : My name is Elmar" << std::endl;
    }
    std::cout << "Loop Done" << std::endl;
   // std::cout << "i : " << i << std::endl;  Compile error : i is not in scope
   */
    // Iterator declared outside the loop
    /*
    size_t i{0}; // Iterator defined outside the loop

    for(i; i<10; i++) {
        std::cout << i << " : My name is Elmar  " <<  std::endl;
    }
    std::cout << "Loop Done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */

    // Leave out the iterator declaration part

    // Don't hard code values : BAD!
    /*
    const size_t COUNT {10};

    for(size_t i {0}; i < COUNT; ++i) {
        std::cout << i << " : My Name is Elmar" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;
    */

    // While Loops
    /*
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    */
    /*
    const size_t Count {10};
    size_t i = 0;

    while(i < Count) {
        std::cout << i << " : My name is Elmar" << std::endl;
        ++i; // incremention
    }
    std::cout <<"Loop is done!" <<std::endl;
    */
    // * Do While
    /*
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    std::cout << "My Name is Elmar " << std::endl;
    */
    const int Count = 10;
    size_t i = 0; // Iterator 
    do
    {
        std::cout << "My Name is Elmar " << std::endl;
        ++i;
    } 
    while (i< Count);

    return 0;
}