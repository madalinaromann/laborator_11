//Roman Madalina
//321 AC
#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class Stack {
public:
bool Empty() const;
void push(const T& item);
void pop();
const T& top() const
{if (Empty())
 cout<< "Stiva este goala";
return v.back();}
vector <T> v;
int size() const;
};

template <typename T> bool Stack<T>::Empty() const
{return (v.empty());}
template<typename T> void Stack<T>::push(const T& item)

{ v.push_back(item); }

template<typename T> void Stack<T>::pop()
{if (Empty()) throw "Stiva este goala";
v.pop_back();}

int main() {
Stack <int> stiva;
stiva.push(1);
stiva.push(2);
stiva.push(3);
stiva.push(4);
stiva.push(5);
stiva.push(6);
stiva.push(7);
stiva.push(8);
stiva.push(9);
stiva.push(10);

cout<<"Stiva este:\n";
while (!stiva.Empty())
{ cout << stiva.top();
cout<<"\n";
stiva.pop();}

	return 0;
}
