import os
from datetime import datetime

today = datetime.today()

string = "i use git {}.{}.{} {}:{}".format(
    today.day, today.month, today.year, today.hour, today.minute
)

os.system("git add .")

os.system("git push")
