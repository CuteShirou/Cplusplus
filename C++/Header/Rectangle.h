class Rectangle
{
public:
	Rectangle();
	Rectangle(int width, int height, int x = 0 , int y = 0);

	void PoseSet(int x, int y);
	void SizeSet(int width, int height);

	virtual int GetPose();
	virtual int GetSize();

	virtual ~Rectangle();

protected:
	int rectWidth;
	int rectHeight;
	int rectx;
	int recty;
};

class UserRectangle : public Rectangle
{
public:
	UserRectangle();
	UserRectangle(int width, int height, int x = 0, int y = 0, int id = 0);

	void SetId(int id);
	int GetId();

	void SetScale(float scale);
	float GetScale();

	virtual int GetWidth();
	virtual int GetHeight();
	virtual int GetAera();

	virtual ~UserRectangle();

private:
	int userId;
	float m_scale;
};