#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	ft_err(std::string err)
{
	std::cerr << err << std::endl;
	exit(EXIT_FAILURE);
}

void	ft_replace(std::string s1, std::string s2, std::ifstream &infile, std::ofstream &outfile)
{

	std::string start;
	std::string end;
	std::string::size_type n;
	std::string tmp;

	std::getline(infile, tmp, '\n');
	while(!tmp.empty())
	{
		n = tmp.find(s1);
		if (n < tmp.length() && n >= 0)
		{
			start = tmp.substr(0, n);
			end = tmp.substr(n + s1.length());
			tmp.assign(start);
			tmp =  tmp + s2 + end;
		}
		outfile << tmp << std::endl;
		tmp.clear();
		std::getline(infile, tmp, '\n');
	}
}

int main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string s1;
	std::string s2;
	std::string outfile_name;

	if (argc != 4)
		ft_err("wrong count arguments");
	infile.open(argv[1], std::ios_base::in);
	if (!infile.is_open())
		ft_err("invalid file");
	outfile_name.assign(argv[1]);
	outfile_name += ".replace";
	outfile.open(outfile_name, std::ios_base::out | std::ios_base::trunc);
	if (!outfile.is_open())
		ft_err("can not create out file");
	s1.assign(argv[2]);
	s2.assign(argv[3]);
	ft_replace(s1, s2, infile, outfile);
	infile.close();
	outfile.close();
	return (0);
}