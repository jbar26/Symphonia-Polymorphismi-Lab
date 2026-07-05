
// Note:  I could have also coded the Instrument class and the subclasses slightly differently which is in the other code "More Specific".  
	// From the directions and sample output, I could not tell which way you intended for us to code it, but I think you
	// wanted us to do it like this, which is similar to the fruit/apple/strawberry example from class. 
	// However, if you wanted Trumpets to always play "doot", then I attached a second version of code that does that. 
	// See "More Specific.cpp" for that version.


#include <iostream>
#include <vector>

using namespace std;


class Instrument
{
protected:
	string name;
	string sound;
public:
	Instrument(string n, string s)
	{
		name = n;
		sound = s;
	}
	virtual void play()
	{
		cout << name << ": " << sound << endl;
	}


};
class Trumpet : public Instrument
{
public:
	Trumpet(string n, string s) : Instrument(n, s)
	{
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << endl;
	}
};
class Violin : public Instrument
{
public:
	Violin(string n, string s) : Instrument(n, s)
	{
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << sound << " " << sound << endl;
	}
};

class Piano : public Instrument
{
public:
	Piano(string n, string s) : Instrument(n, s)
	{
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << sound << endl;
	}
};
class Singer : public Instrument
{
public:
	Singer(string n, string s) : Instrument(n, s)
	{
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << endl;
	}
};
class Harp : public Instrument
{
public:
	Harp(string n, string s) : Instrument(n, s)
	{
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << endl;
	}
};



int main()
{

	vector<Instrument*> orchestra;
	orchestra.push_back(new Trumpet("Trumpet", "doot"));
	orchestra.push_back(new Violin("Violin", "vwa"));
	orchestra.push_back(new Piano("Piano", "dah"));
	orchestra.push_back(new Singer("Singer", "Yeah!"));
	orchestra.push_back(new Harp("Harp", "plink"));
	orchestra.push_back(new Singer("Singer", "Yeah!"));
	orchestra.push_back(new Trumpet("Trumpet", "doot"));

	for (Instrument* instr : orchestra)
	{
		instr->play();
	}

}