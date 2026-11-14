#pragma once
class Circle
{
private:
	float x;
	float y;

public:
	void Init();

	void Update(float daltaTime);

	void Draw() const;

	void Reset();


};

