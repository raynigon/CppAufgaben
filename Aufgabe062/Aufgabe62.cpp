#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class MyClass
{
	bool copy;
	string name;
public:
	MyClass(string inName) :copy(false), name(inName) { cout << "Created " << name << endl; }
	MyClass(const MyClass& obj) :copy(true), name(obj.name) {};
	~MyClass() { if(!copy)cout << "Destroyed " << name << endl; };
};

int main()
{
	{
		vector<MyClass> vec0 =  { MyClass("Obj 1"), MyClass("Obj 2"), MyClass("Obj 3") };
		vector<MyClass*> vec1 = { new MyClass("Ptr 1"), new MyClass("Ptr 2"), new MyClass("Ptr 3") };
		vector<shared_ptr<MyClass>> vec2 = { 
			shared_ptr<MyClass>(new MyClass("Share 1")), 
			shared_ptr<MyClass>(new MyClass("Share 2")), 
			shared_ptr<MyClass>(new MyClass("Share 3")) 
		};
	}
	system("pause");
}