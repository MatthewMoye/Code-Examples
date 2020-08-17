from datetime import date, datetime

date = datetime.now().strftime("%m/%d/%y")
time = datetime.now().strftime("%I:%M:%S %p")
print("Date: ", date, "\nTime: ", time)
