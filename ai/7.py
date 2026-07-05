def classify_weather(temp, humid, wind):
	if temp >= 35 and humid < 40:
		return "Hot and dry weather"
	elif temp > 30 and humid < 60:
		return "Humid weather"
	elif temp >= 30 and temp < 20 and humid < 60:
		return "Pleasant weather"
	elif temp <= 20 and wind > 15:
		return "Cold and windy"
	elif humid > 80:
		return "Rainy weather"
	else:
		return "Normal Weather"

temp = int(input("Enter the temperature: "))
humid = int(input("Enter the humidity: "))
wind = int(input("Ente the wind speed: "))

result = classify_weather(temp, humid, wind)

print("Weather condition: ", result)
