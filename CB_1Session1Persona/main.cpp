#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


string getResponse(const string& userInput) {

	// Predefined responses, will only recognize these inputs fow now. 
	unordered_map<string, string> responses = {
		{ "hello", "Hello there! How can I help you today?" },
		{ "how are you?", "Thanks for asking! I am good and how are you? "},
		{ "what can you do?", "This is my initial pilot version : V1.0 so I can do limited things for now. Watch out for upgraded me! "},
		{ "thanks", "Most welcome! :) "}
}

int main() {
	cout << "Hello! Welcome to my V1.0. Type 'bye' to exit." << endl;

	while (true) {
		// Get the user input 
		cout << "You : ";
		string userInput; 
		getline(cin, userInput);

		// Exit if bye
		if (userInput == "bye") {
			cout << "\n Thanks for interacting today. Have a great day!" << endl;
			break;
		}

		// Obtain the chatbot reponse
		string response = getResponse(userInput);
		cout << "Chatbot V1.0 : " << response << endl;
	}

	return 0;
}