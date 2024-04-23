#include "Rectangle.h"
#include <iostream>

main()
{
	Rectangle rect;
	rect.SizeSet(10, 20);
	rect.PoseSet(5, 5);
	std::cout << "Size: " << rect.GetSize() << std::endl;
	std::cout << "Pose: " << rect.GetPose() << std::endl;

	UserRectangle userRect;
	userRect.SizeSet(10, 20);
	userRect.PoseSet(5, 5);
	userRect.SetId(1);
	userRect.SetScale(1.5f);
	std::cout << "Size: " << userRect.GetSize() << std::endl;
	std::cout << "Pose: " << userRect.GetPose() << std::endl;
	std::cout << "Id: " << userRect.GetId() << std::endl;
	std::cout << "Scale: " << userRect.GetScale() << std::endl;
	std::cout << "Width: " << userRect.GetWidth() << std::endl;
	std::cout << "Height: " << userRect.GetHeight() << std::endl;
}