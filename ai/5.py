def chatbot(user_input):
	user_input = user_input.lower()
	
	if user_input in ["hi", "hello"]:
		return "Hello! How can i help you"
	elif user_input == "how are you":
		return "Im doing so well, hope you're doing the same"
	elif user_input == "bye":
		return "Goodbye! Have a nice day"
	else:
		return "Sorry, i did't understand"
		
print("Real time chatbot")
while True:
	user_input = input("You: ")
	reply = chatbot(user_input)
	print("Bot: ", reply)
	
	if user_input.lower() == "bye":
		break
