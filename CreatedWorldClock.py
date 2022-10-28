from datetime import datetime
import pytz
Country_Zones = ['America/New_York', 'Asia/Kolkata', 'Australia/Sydney',
                'Canada/Atlantic', 'Brazil/East','Chile/EasterIsland', 'Cuba', 'Egypt',
                'Europe/Amsterdam', 'Europe/Athens', 'Europe/Berlin', 'Europe/Istanbul',
                'Europe/Jersey', 'Europe/London', 'Europe/Moscow', 'Europe/Paris', 
                'Europe/Rome', 'Hongkong', 'Iceland', 'Indian/Maldives', 'Iran',
                'Israel', 'Japan', 'NZ', 'US/Alaska', 'US/Arizona', 'US/Central', 
                'US/East-Indiana']
country_time_zones = []
for country_time_zone in Country_Zones:
    country_time_zones.append(pytz.timezone(country_time_zone))
for i in range(len(country_time_zones)):
    country_time = datetime.now(country_time_zones[i])
    print(f"The date of {Country_Zones[i]} is {country_time.strftime('%d-%m-%y')} and The time of {Country_Zones[i]} is {country_time.strftime('%H:%M:%S')}")
