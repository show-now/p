def ai_agent(user_input):
	if user_input == "clean":
		return "Action: Do nothing"
	elif user_input == "dirty":
		return "Action: Clean the room"
	else:
		return "Unknown"
	
print("Simple AI Agent")
user_input = input("Enter the room status (clean/dirty): ")
action = ai_agent(user_input)
print(action)
