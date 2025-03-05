#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;


struct stShifre {
	map<string, string> letterMap;

	stShifre() {

		letterMap["1#"] = "A";
		letterMap["2#-"] = "B";
		letterMap["2#."] = "C";
		letterMap["3#--"] = "D";
		letterMap["3#-."] = "E";
		letterMap["3#.-"] = "F";
		letterMap["3#.."] = "G";
		letterMap["4#---"] = "H";
		letterMap["4#--."] = "I";
		letterMap["4#-.-"] = "J";
		letterMap["4#-.."] = "K";
		letterMap["4#.--"] = "L";
		letterMap["4#.-."] = "M";
		letterMap["4#..-"] = "N";
		letterMap["4#..."] = "O";
		letterMap["5#----"] = "P";
		letterMap["5#---."] = "Q";
		letterMap["5#--.."] = "R";
		letterMap["5#--.-"] = "S";
		letterMap["5#-.--"] = "T";
		letterMap["5#-.-."] = "U";
		letterMap["5#-..-"] = "V";
		letterMap["5#-..."] = "W";
		letterMap["5#.---"] = "X";
		letterMap["5#.--."] = "Y";
		letterMap["5#.-.-"] = "Z";
	};
};
struct stLetters {
	map<string, string> letterMap;

	stLetters() {

		letterMap["A"] = "1#"; // Reversed key/value
		letterMap["B"] = "2#-";
		letterMap["C"] = "2#.";
		letterMap["D"] = "3#--";
		letterMap["E"] = "3#-.";
		letterMap["F"] = "3#.-";
		letterMap["G"] = "3#..";
		letterMap["H"] = "4#---";
		letterMap["I"] = "4#--.";
		letterMap["J"] = "4#-.-";
		letterMap["K"] = "4#-..";
		letterMap["L"] = "4#.--";
		letterMap["M"] = "4#.-.";
		letterMap["N"] = "4#..-";
		letterMap["O"] = "4#...";
		letterMap["P"] = "5#----";
		letterMap["Q"] = "5#---.";
		letterMap["R"] = "5#--..";
		letterMap["S"] = "5#--.-";
		letterMap["T"] = "5#-.--";
		letterMap["U"] = "5#-.-.";
		letterMap["V"] = "5#-..-";
		letterMap["W"] = "5#-...";
		letterMap["X"] = "5#.---";
		letterMap["Y"] = "5#.--.";
		letterMap["Z"] = "5#.-.-";
	};
};

struct stAllShifre {
	std::map<std::string, stShifre> shifreMap; // Map to hold stShifre objects
	std::map<std::string, stLetters> letterMap; // Map to hold stLetters objects
	stLetters Letters;
	stShifre Shifre;

	stAllShifre() {
		letterMap["Letters"] = Letters;
		shifreMap["Shifre"] = Shifre;
	}
};







string Ancripte_Dicripte(string stType,const stAllShifre& AllShifre, const string& value)
{
	
	if (stType == "Shifre") 
	{
		auto it = AllShifre.Shifre.letterMap.find(value);
		if (it != AllShifre.Shifre.letterMap.end())
		{
			return it->second; //convert char to string
		}
		else
		{
			return "not found";
		}
	}
	else if(stType == "Letters")
	{
		auto it = AllShifre.Letters.letterMap.find(value);
		if (it != AllShifre.Letters.letterMap.end()) {
			return it->second;
		}
		else {
			return "not found";
		}
	}
	else {
		return "Invalid type";
	}

}

//string GetLetterShifre(char Letter)
//{
//
//	stLetters Letters;
//
//	switch (toupper(Letter)) {
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

string AncriptMessage(string Message) {
	stAllShifre AllShifre;
	string MessageDecripted = "";

	for (char c : Message) { // Use range-based for loop for cleaner iteration
		string charStr(1, c); // Convert char to string
		string encryptedChar = Ancripte_Dicripte("Letters", AllShifre, charStr); // Use "Letters" to encrypt
		if (encryptedChar == "not found") {
			MessageDecripted += c; // If not found, keep original character
		}
		else {
			MessageDecripted += encryptedChar;
		}
	}
	return MessageDecripted;
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

std::string GetShifreBlock(std::string MessageToDecripte) {
	std::string ShifreBlocks = "";
	bool firstBlock = true;

	for (char c : MessageToDecripte) {
		if (c >= '1' && c <= '5') { // Check if character is a digit between 1 and 5
			if (firstBlock) {
				ShifreBlocks += c;
				firstBlock = false;
			}
			else {
				ShifreBlocks += "," + std::string(1, c); // Add comma and character
			}
		}
		else {
			ShifreBlocks += c; // Append non-digit characters directly
		}
	}
	return ShifreBlocks;
}

std::string DecriptMessage(std::string MessageToDecripte) {
	stAllShifre AllShifre;
	std::string MessageDecripted = "";
	std::string MessageToDecripteSeparated = GetShifreBlock(MessageToDecripte);
	std::stringstream ss(MessageToDecripteSeparated);
	std::string ShifreBlock;

	while (std::getline(ss, ShifreBlock, ',')) {
		std::string encryptedChar = Ancripte_Dicripte("Shifre", AllShifre, ShifreBlock);
		if (encryptedChar == "not found") {
			MessageDecripted += ShifreBlock; //keep the block, if not found.
		}
		else {
			MessageDecripted += encryptedChar;
		}
	}

	return MessageDecripted;
}

string  RessiveMessage(string MessageRessived) // get a Message like thes "1#4#.--4#--." and change it to thes "ALI"
{
	string OriginaleMessage = DecriptMessage(MessageRessived);

	return OriginaleMessage;
}

int main()
{
	string MessageToSend = SundMessage(); // Use this function to get the Message Ancripted

	cout << "Your Message will be send in the network like that : \n==> "<< MessageToSend << endl; // print the Message on the scrine

	string MessageToRessive = RessiveMessage(MessageToSend); // Use this function to Decripte the Message the read it corecctly

	cout << "You will se the message corectly : \n==> " << MessageToRessive << endl;
	return 0;
}
