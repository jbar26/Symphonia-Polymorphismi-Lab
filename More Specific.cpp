// Please look at the main.cpp code first.  
// I think that contains the code that you wanted, more like the apple/strawberry example from class.
// However, from the sample output your Trumpet only plays "doots", so I also coded it this way, 
// which ensures Trumpets will only play "doots" and violins will only play "vwas".

#include <iostream>
#include <vector>

using namespace std;


class Instrument
{
protected:
	string name;
	string sound;
public:
	Instrument()
	{
		name = "generic instrument";
		sound = "generic sound";
	}
	virtual void play()
	{
		cout << name << ": " << sound << endl;
	}


};
class Trumpet : public Instrument
{
public:
	Trumpet() 
	{
		name = "Trumpet";
		sound = "doot";
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << endl;
	}
};
class Violin : public Instrument
{
public:
	Violin()
	{
		name = "Violin";
		sound = "vwa";
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << sound << " " << sound << endl;
	}
};

class Piano : public Instrument
{
public:
	Piano()
	{
		name = "Piano";
		sound = "dah";
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << " " << sound << endl;
	}
};
class Singer : public Instrument
{
public:
	Singer()
	{
		name = "Singer";
		sound = "Yeah!";
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << " " << sound << endl;
	}
};
class Harp : public Instrument
{
public:
	Harp()
	{
		name = "Harp";
		sound = "plink";
	}
	void play()
	{
		cout << name << ": " << sound << " " << sound << endl;
	}
};



int main()
{

	vector<Instrument*> orchestra;
	orchestra.push_back(new Trumpet());
	orchestra.push_back(new Violin());
	orchestra.push_back(new Piano());
	orchestra.push_back(new Singer());
	orchestra.push_back(new Harp());
	orchestra.push_back(new Singer());
	orchestra.push_back(new Violin());
	orchestra.push_back(new Trumpet());

	for (Instrument* instr : orchestra)
	{
		instr->play();
	}

}
