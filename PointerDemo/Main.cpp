#define _DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <memory>
#include <iostream>

template<typename T>
class smart_ptr

{

public:

	smart_ptr(T* ptr = nullptr) : _ptr{ ptr } {}

	smart_ptr(const smart_ptr&) = delete; // No copies rule

	smart_ptr& operator = (const smart_ptr&) = delete; // No assigning rule

	~smart_ptr() { if (_ptr) delete _ptr; }

	T& operator * () { return *_ptr; }

	T* operator & () { return  _ptr; }

	T* operator -> () { return  _ptr; }

	T* get() { return _ptr; }

private:
	T* _ptr{};
};

int main()
{
	int array[] = { 2, 4, 6, 8 };

	int* p = array;
	p++;
	p++;

	std::cout << *p << std::endl;

	int* p_int = new int(5);

	std::cout << *p_int << std::endl;

	delete p_int;

	smart_ptr<int> sp{ new int {10} };
	std::unique_ptr<int> up{ new int {5} };

	_CrtDumpMemoryLeaks();
}