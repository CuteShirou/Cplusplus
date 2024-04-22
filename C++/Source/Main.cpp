#include "Rectangle.h"
#include <iostream>

main()
{
	Rectangle rect1;
	Rectangle rect2(10, 20, 30, 40);

	rect1.SizeSet(100, 200);
	rect1.PoseSet(300, 400);

	std::cout << "rect1 size: " << rect1.GetSize() << std::endl;
	std::cout << "rect1 pose: " << rect1.GetPose() << std::endl;

	std::cout << "rect2 size: " << rect2.GetSize() << std::endl;
	std::cout << "rect2 pose: " << rect2.GetPose() << std::endl;

	return 0;
}