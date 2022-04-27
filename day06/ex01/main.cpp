#include <iostream>
#include <string>

struct Data
{
	std::string str;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t ser_data = reinterpret_cast <uintptr_t>(ptr);
	return (ser_data);
}

Data *deserialize(uintptr_t raw)
{
	Data* ptr= reinterpret_cast <Data*>(raw);
	return (ptr);
}

int main(int argc, char **argv)
{
	Data d;
	d.str = "Data string";
	uintptr_t ser_data = serialize(&d);
	// std::cout << &d << "\n";
	std::cout << "Data after serializetion: " << ser_data << "\n";
	Data *deser_d = deserialize(ser_data);
	// std::cout << deser_d << "\n";
	std::cout << "Data after deserializetion: " << deser_d->str << "\n"; 
	return 0;
}
