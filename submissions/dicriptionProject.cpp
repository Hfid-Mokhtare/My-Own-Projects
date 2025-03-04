#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <vector>

using namespace std;

vector <string> Letters;

void FillVector()
{

}

struct stLetters
{
	string A = "1#";
	string B = "2#-";
	string C = "2#.";
	string D = "3#--";
	string E = "3#-.";
	string F = "3#.-";
	string G = "3#..";
	string H = "4#---";
	string I = "4#--.";
	string J = "4#-.-";
	string K = "4#-..";
	string L = "4#.--";
	string M = "4#.-.";
	string N = "4#..-";
	string O = "4#...";
	string P = "5#----";
	string Q = "5#---.";
	string R = "5#--..";
	string S = "5#--.-";
	string T = "5#-.--";
	string U = "5#-.-.";
	string V = "5#-..-";
	string W = "5#-...";
	string X = "5#.---";
	string Y = "5#.--.";
	string Z = "5#.-.-";
};

string GetLetterShifre(char Letter)
{

	stLetters Letters;

	switch (toupper(Letter)) { // Convert to uppercase for case-insensitive check
	case 'A':
		return Letters.A;
		break;
	case 'B':
		return Letters.B;
		break;
	case 'C':
		return Letters.C;
		break;
	case 'D':
		return Letters.D;
		break;
	case 'E':
		return Letters.E;
		break;
	case 'F':
		return Letters.F;
		break;
	case 'G':
		return Letters.G;
		break;
	case 'H':
		return Letters.H;
		break;
	case 'I':
		return Letters.I;
		break;
	case 'J':
		return Letters.J;
		break;
	case 'K':
		return Letters.K;
		break;
	case 'L':
		return Letters.L;
		break;
	case 'N':
		return Letters.N;
		break;
	case 'O':
		return Letters.O;
		break;
	case 'P':
		return Letters.P;
		break;
	case 'Q':
		return Letters.Q;
		break;
	case 'R':
		return Letters.R;
		break;
	case 'S':
		return Letters.S;
		break;
	case 'T':
		return Letters.A;
		break;
	case 'U':
		return Letters.U;
		break;
	case 'V':
		return Letters.V;
		break;
	case 'W':
		return Letters.W;
		break;
	case 'X':
		return Letters.X;
		break;
	case 'Y':
		return Letters.Y;
		break;
	case 'Z':
		return Letters.Z;
		break;
	default:
		cout << Letter << " is not Supported" << endl;
	}
}


string ToShifre(string message)
{
	//ASCCI TABLE : 65 TO 90
	// 
	// HELLO  ==>  H  E  L  L  O
	// ABC  ==>  A = ##  | B = #- |  C = #.

	string shifre = "";

	for (int i = 0; i < message.length(); i++)
	{
		for (char Letter = 'A'; Letter <= 'Z'; Letter++)
		{
			if (message[i] == Letter)
			{
				shifre += GetLetterShifre(Letter);
			}
		}
	}


	return shifre;
}

void ToText()
{

}



// this function is to change the orther of the 26 letters 
void ShufleLetters()
{
	stLetters Letters[26];
	string Shifre;

	for (int i = 0; i < 26; i++)
	{
		cout << Letters[i].le << endl;
	}




}

bool ShufleLettersjByPeriod()
{
	using namespace std::this_thread;     // sleep_for, sleep_until
	using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
	using std::chrono::system_clock;

	int Sleep = 0;

	while (true)
	{
		
		sleep_for(10s);
		
		ShufleLetters();
		//your code

		sleep_until(system_clock::now() + 10s);
		ShufleLetters();
	}

	return true;
}

void Readmessage(string& message)
{
	cout << "enter your message : (A to Z , spaces)";
	getline(cin, message);
}


int main()
{
	// Remainber to put the two lines
	// of Random algorithem

	string message;
	string n_message;

	Readmessage(message);
	

	//cout << ToShifre();

	
	ShufleLetters();
	cout << "messa after decription is : " << ToShifre(message);

	return 0;
}

