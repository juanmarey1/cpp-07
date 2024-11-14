#include "iter.hpp"

int	main(void)
{
	char	str[] = "juanma";
	int		len = strlen(str);
	std::cout << str << std::endl;
	::iter(str, (size_t)len, to_upper);
	std::cout << str << std::endl;

	int arrInt[] = {1, 2, 3, 4, 5};
    size_t lengthInt = sizeof(arrInt) / sizeof(arrInt[0]);
    std::cout << "Array of integers: ";
    ::iter(arrInt, lengthInt, printInt);
    std::cout << std::endl;

    // Test with an array of floats
    float arrFloat[] = {1.5f, 2.5f, 3.5f};
    size_t lengthFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);
    std::cout << "Array of floats (before multiply by 2): ";
    ::iter(arrFloat, lengthFloat, printFloat);
    std::cout << std::endl;

    ::iter(arrFloat, lengthFloat, multiplyByTwo);
    std::cout << "Array of floats (after multiply by 2): ";
    ::iter(arrFloat, lengthFloat, printFloat);
    std::cout << std::endl;

    return 0;
}