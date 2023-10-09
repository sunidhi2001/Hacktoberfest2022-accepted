import json
# Load weather data from JSON file
def load_weather_data(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data
# Display current weather
def display_weather(weather_data):
    print("Current Weather:")
    print(f"Weather: {weather_data['weather']}")
    print(f"Temperature: {weather_data['temperature']}°C")
    print(f"Humidity: {weather_data['humidity']}%")
    print(f"Wind Speed: {weather_data['wind_speed']} km/h")
# Main function
def main():
    file_path = 'weather_data.json' # Replace with your JSON file's path
    try:
        weather_data = load_weather_data(file_path)
        display_weather(weather_data)
    except FileNotFoundError:
        print("Error: JSON file not found.")
if __name__ == "__main__":
    main()
