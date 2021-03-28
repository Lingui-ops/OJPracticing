#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
namespace _nmsp {
	class A {
	public:
		int m_i = 1;
		A() { cout << "A()" << endl; }
		~A() { cout << "~A()" << endl; }
	};
	class B {
	public:
		inline static A m_sa;
	};
}
class TE {
public:
	TE() { cout << "111111111" << endl; }
	~TE() { cout << "222222222" << endl; }
};
class Foo {
public:
	inline static TE t;
};
int main() {
	//_nmsp::B b;
	//cout << b.m_sa.m_i << endl;

	return 0;
}
