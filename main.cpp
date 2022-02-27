import Example;
import std.core;

int main()
{
	std::cout << "The result of f() is " << Example_NS::f() << std::endl; // 42
	// int i = Example_NS::f_internal(); // C2039
	// int j = ANSWER; //C2065
}
