#include "Harl.hpp"


Harl::Harl()
{
	
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."<< std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*harl_level)(void);
	std::string commands[4] = {"error", "debug", "warning", "info"};
	harl_level lvl[4] = {&Harl::error, &Harl::debug, &Harl::warning, &Harl::info};
	for (int i = 0; i < 4; i ++){
		if (commands[i] == level)
		{
			(this->*lvl[i])();
			break ;
		}
	}
}

Harl::~ Harl()
{

}
