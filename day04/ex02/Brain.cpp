#include "Brain.hpp"

const std::string *Brain::getIdeas(void) const
{
	return ideas_;
}

Brain &Brain::operator=(const Brain &copy)
{
	const std::string	*copy_ideas;

	copy_ideas = copy.getIdeas();
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (!copy_ideas[i].empty())
			ideas_[i].assign(copy_ideas[i]);
	}
	return *this;
}

Brain::Brain(const Brain &copy):ideas_()
{
	const std::string	*copy_ideas;

	copy_ideas = copy.getIdeas();
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (!copy_ideas[i].empty())
			ideas_[i].assign(copy_ideas[i]);
	}
}

Brain::Brain()
{
	std::cout << "Brain defalt constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}