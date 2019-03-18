#include <random>
#include <string>
//#include <bits/stdc++.h>
using namespace std;
class Randomgen
{
//random_device rand;
//mt19937 eng(rd());

public:
string randDNA(int,string,int);
};


string Randomgen:: randDNA(int seed, string bases, int len)
{
/*mt19937 eng(seed);
string str = "";
int val = bases.length();
char alternative[val +1]; // = (char) bases;

strcpy(alternative,bases.c_str());
int randval = 0;
for(int i = 0; i< len; i++)
{
	randval = (signed int) eng;
str.append(to_string(alternative[randval]));
str.append("\t");
}

return str;
} */



mt19937 eng(seed);
uniform_int_distribution<> dist(0,bases.length() -1);
string str = "";


for(int i = 0; i<len ; i++)
{int random_val = dist(eng); // testing technique found on stackoverflow
	//str.append(bases[random_val]);
	str+= bases[random_val];
	}
	return str;
}
