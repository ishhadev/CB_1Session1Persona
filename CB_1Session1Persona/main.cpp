#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

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