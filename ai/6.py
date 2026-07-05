def ai_agent(user_input):
	if user_input == "clean":
		return "Action: Clean the room"
	elif user_input == "dirty":
		return "Action: Do nothing"
	else:
		return "Unknown"
	
print("Simple AI Agent")
user_input = input("Enter the room status (clean/dirty): ")
action = ai_agent(user_input)
print(action)
