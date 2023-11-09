#pragma once
class smartArray {
private:
	int capacity = 10;
	int numberOfElements = 0;
	int* arr;
public:
	smartArray();
	smartArray(int);
	~smartArray();
	smartArray(const smartArray& rhs);
};
