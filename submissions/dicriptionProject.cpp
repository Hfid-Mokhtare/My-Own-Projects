#include <iostream>
#include <string>

using namespace std;



//struct stLetters
//{
//	string A = "1#";
//	string B = "2#-";
//	string C = "2#.";
//	string D = "3#--";
//	string E = "3#-.";
//	string F = "3#.-";
//	string G = "3#..";
//	string H = "4#---";
//	string I = "4#--.";
//	string J = "4#-.-";
//	string K = "4#-..";
//	string L = "4#.--";
//	string M = "4#.-.";
//	string N = "4#..-";
//	string O = "4#...";
//	string P = "5#----";
//	string Q = "5#---.";
//	string R = "5#--..";
//	string S = "5#--.-";
//	string T = "5#-.--";
//	string U = "5#-.-.";
//	string V = "5#-..-";
//	string W = "5#-...";
//	string X = "5#.---";
//	string Y = "5#.--.";
//	string Z = "5#.-.-";
//};
//
//string GetLetterShifre(char Letter)
//{
//
//	stLetters Letters;
//
//	switch (toupper(Letter)) { // Convert to uppercase for case-insensitive check
//	case 'A':
//		return Letters.A;
//		break;
//	case 'B':
//		return Letters.B;
//		break;
//	case 'C':
//		return Letters.C;
//		break;
//	case 'D':
//		return Letters.D;
//		break;
//	case 'E':
//		return Letters.E;
//		break;
//	case 'F':
//		return Letters.F;
//		break;
//	case 'G':
//		return Letters.G;
//		break;
//	case 'H':
//		return Letters.H;
//		break;
//	case 'I':
//		return Letters.I;
//		break;
//	case 'J':
//		return Letters.J;
//		break;
//	case 'K':
//		return Letters.K;
//		break;
//	case 'L':
//		return Letters.L;
//		break;
//	case 'N':
//		return Letters.N;
//		break;
//	case 'O':
//		return Letters.O;
//		break;
//	case 'P':
//		return Letters.P;
//		break;
//	case 'Q':
//		return Letters.Q;
//		break;
//	case 'R':
//		return Letters.R;
//		break;
//	case 'S':
//		return Letters.S;
//		break;
//	case 'T':
//		return Letters.A;
//		break;
//	case 'U':
//		return Letters.U;
//		break;
//	case 'V':
//		return Letters.V;
//		break;
//	case 'W':
//		return Letters.W;
//		break;
//	case 'X':
//		return Letters.X;
//		break;
//	case 'Y':
//		return Letters.Y;
//		break;
//	case 'Z':
//		return Letters.Z;
//		break;
//	default:
//		cout << Letter << " is not Supported" << endl;
//	}
//}

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

	switch (toupper(Letter)) { 
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

string AncriptMessage(string Message)
{
	string MessageDecripted = ""; // the new Message Ancripted will be stored here

	for (int i = 0; i < Message.length(); i++) // loop to get all letter in the Message
	{
		MessageDecripted += GetLetterShifre(Message[i]); // send one letter to be Ancripted and do the concatonation to MessageDecripted
		
	}
	return MessageDecripted; // return the new Message after decription
}

string ReadMessag()
{
	string Message;
	cout << "enter your message here : " << endl;
	cin >> Message;
	return Message;
}

string SundMessage() 
{
	string Message = ReadMessag(); // the user enter hese Message
	return AncriptMessage(Message); // i will decripte the message 

}

string DecriptMessage(string MessageToDecripte)
{
	string OriginaleMessage = "";

	for (int i = 0; i < MessageToDecripte.length(); i++) // loop to get all letter in the MessageToDecripte
	{
		OriginaleMessage += GetLetterShifre(Message[i]); // send one letter to be Decripted and do the concatonation to OriginaleMessage

	}


	return OriginaleMessage;

}

string  ResiveMessage(string MessageRessived) // get a Message like thes "1#4#.--4#--." and change it to thes "ALI"
{
	string OriginaleMessage = DecriptMessage(MessageRessived);
	
	return OriginaleMessage;
}

int main()
{
	string MessageToSend = SundMessage(); // Use this function to get the Message Ancripted

	cout << MessageToSend << endl; // print the Message on the scrine

	string MessageToRessive=ResiveMessage(MessageToSend); // Use this function to Decripte the Message the read it corecctly

	return 0;
}


//
//#include <iostream>
//#include <string>
//#include <map>
//
//struct stLetters {
//	std::map<std::string, char> letterMap;
//
//	stLetters() {
		/*letterMap["1#"] = 'A';
		letterMap["2#-"] = 'B';
		letterMap["2#."] = 'C';
		letterMap["3#--"] = 'D';
		letterMap["3#-."] = 'E';
		letterMap["3#.-"] = 'F';
		letterMap["3#.."] = 'G';
		letterMap["4#---"] = 'H';
		letterMap["4#--."] = 'I';
		letterMap["4#-.-"] = 'J';
		letterMap["4#-.."] = 'K';
		letterMap["4#.--"] = 'L';
		letterMap["4#.-."] = 'M';
		letterMap["4#..-"] = 'N';
		letterMap["4#..."] = 'O';
		letterMap["5#----"] = 'P';
		letterMap["5#---."] = 'Q';
		letterMap["5#--.."] = 'R';
		letterMap["5#--.-"] = 'S';
		letterMap["5#-.--"] = 'T';
		letterMap["5#-.-."] = 'U';
		letterMap["5#-..-"] = 'V';
		letterMap["5#-..."] = 'W';
		letterMap["5#.---"] = 'X';
		letterMap["5#.--."] = 'Y';
		letterMap["5#.-.-"] = 'Z';*/
//	}
//};
//
//std::string getVariableName(const stLetters& letters, const std::string& value) {
//	auto it = letters.letterMap.find(value);
//	if (it != letters.letterMap.end()) {
//		return std::string(1, it->second); //convert char to string
//	}
//	else {
//		return "Value not found";
//	}
//}
//
//int main() {
//	stLetters letters;
//	std::string searchValue = "4#-.-";
//	std::string variableName = getVariableName(letters, searchValue);
//	std::cout << "The variable name for value '" << searchValue << "' is: " << variableName << std::endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <map>
//
//struct stLetters {
//	std::string A = "1#";
//	std::string B = "2#-";
//	std::string C = "2#.";
//	std::string D = "3#--";
//	std::string E = "3#-.";
//	std::string F = "3#.-";
//	std::string G = "3#..";
//	std::string H = "4#---";
//	std::string I = "4#--.";
//	std::string J = "4#-.-";
//	std::string K = "4#-..";
//	std::string L = "4#.--";
//	std::string M = "4#.-.";
//	std::string N = "4#..-";
//	std::string O = "4#...";
//	std::string P = "5#----";
//	std::string Q = "5#---.";
//	std::string R = "5#--..";
//	std::string S = "5#--.-";
//	std::string T = "5#-.--";
//	std::string U = "5#-.-.";
//	std::string V = "5#-..-";
//	std::string W = "5#-...";
//	std::string X = "5#.---";
//	std::string Y = "5#.--.";
//	std::string Z = "5#.-.-";
//};
//
//std::string getVariableName(const stLetters& letters, const std::string& value) {
//	if (letters.A == value) return "A";
//	if (letters.B == value) return "B";
//	if (letters.C == value) return "C";
//	if (letters.D == value) return "D";
//	if (letters.E == value) return "E";
//	if (letters.F == value) return "F";
//	if (letters.G == value) return "G";
//	if (letters.H == value) return "H";
//	if (letters.I == value) return "I";
//	if (letters.J == value) return "J";
//	if (letters.K == value) return "K";
//	if (letters.L == value) return "L";
//	if (letters.M == value) return "M";
//	if (letters.N == value) return "N";
//	if (letters.O == value) return "O";
//	if (letters.P == value) return "P";
//	if (letters.Q == value) return "Q";
//	if (letters.R == value) return "R";
//	if (letters.S == value) return "S";
//	if (letters.T == value) return "T";
//	if (letters.U == value) return "U";
//	if (letters.V == value) return "V";
//	if (letters.W == value) return "W";
//	if (letters.X == value) return "X";
//	if (letters.Y == value) return "Y";
//	if (letters.Z == value) return "Z";
//	return "Value not found"; // Or handle not found case as needed
//}
//
//int main() {
//	stLetters letters;
//	std::string searchValue = "4#-.-";
//	std::string variableName = getVariableName(letters, searchValue);
//	std::cout << "The variable name for value '" << searchValue << "' is: " << variableName << std::endl;
//
//	searchValue = "1#";
//	variableName = getVariableName(letters, searchValue);
//	std::cout << "The variable name for value '" << searchValue << "' is: " << variableName << std::endl;
//
//	searchValue = "not found";
//	variableName = getVariableName(letters, searchValue);
//	std::cout << "The variable name for value '" << searchValue << "' is: " << variableName << std::endl;
//
//	return 0;
//}


//stLetters() {
//	letterMap['A'] = "1#"; // Reversed key/value
//	letterMap['B'] = "2#-";
//	letterMap['C'] = "2#.";
//	letterMap['D'] = "3#--";
//	letterMap['E'] = "3#-.";
//	letterMap['F'] = "3#.-";
//	letterMap['G'] = "3#..";
//	letterMap['H'] = "4#---";
//	letterMap['I'] = "4#--.";
//	letterMap['J'] = "4#-.-";
//	letterMap['K'] = "4#-..";
//	letterMap['L'] = "4#.--";
//	letterMap['M'] = "4#.-.";
//	letterMap['N'] = "4#..-";
//	letterMap['O'] = "4#...";
//	letterMap['P'] = "5#----";
//	letterMap['Q'] = "5#---.";
//	letterMap['R'] = "5#--..";
//	letterMap['S'] = "5#--.-";
//	letterMap['T'] = "5#-.--";
//	letterMap['U'] = "5#-.-.";
//	letterMap['V'] = "5#-..-";
//	letterMap['W'] = "5#-...";
//	letterMap['X'] = "5#.---";
//	letterMap['Y'] = "5#.--.";
//	letterMap['Z'] = "5#.-.-";
//}
