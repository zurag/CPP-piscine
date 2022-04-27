#include "Iter.hpp"

int main(void) {

	int array[] = {1, 2, 3, 4};
	iter(array, 4, &func);
	return 0;
}