#pragma once
#include <GLFW\glfw3.h>

class  ObjectV
{
public:
	virtual void Show();
	private:
	GLuint VAO;
	GLuint VBO;
	float * points;

};


