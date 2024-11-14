#include "Array.hpp"
#include "Array.tpp"

int	main(void)
{
	Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	try
	{
		std::cout << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

    // Test constructor with size
    Array<int> intArray(5);
    std::cout << "Int array size: " << intArray.size() << std::endl;

    // Initialize and display values
    for (size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 10;
    }

    std::cout << "Int array elements: ";
    for (size_t i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
	std::cout << std::endl;
	
    // Test copy constructor
    Array<int> copiedArray(intArray);
    std::cout << "Copied array elements: ";
    for (size_t i = 0; i < copiedArray.size(); ++i) {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;
	std::cout << std::endl;

    // Test assignment operator
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Assigned array elements: ";
    for (size_t i = 0; i < assignedArray.size(); ++i) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;
	std::cout << std::endl;

    // Test out of bounds access
    try {
        std::cout << "Accessing out of bounds: " << intArray[10] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}