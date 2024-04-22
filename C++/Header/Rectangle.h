class Rectangle
{
public:
	Rectangle();
	Rectangle(int width, int height, int x = 0 , int y = 0);

	void PoseSet(int x, int y);
	void SizeSet(int width, int height);

	int GetPose();
	int GetSize();

	virtual ~Rectangle();

protected:
	int rectWidth;
	int rectHeight;
	int rectx;
	int recty;
};