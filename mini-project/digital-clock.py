from tkinter import *
import datetime

def date_time():
    time = datetime.datetime.now()
    hr = time.strftime('%I')
    mi = time.strftime('%M')
    sec = time.strftime('%S')
    am = time.strftime('%p')
    date = time.strftime('%d')
    month = time.strftime('%m')
    year = time.strftime('%Y')
    day = time.strftime('%A')

    label_hr.config(text=hr)
    label_min.config(text=mi)
    label_sec.config(text=sec)
    label_am.config(text=am)
    label_date.config(text=date)
    label_mo.config(text=month)
    label_year.config(text=year)
    label_day.config(text=day)

    label_hr.after(200, date_time)

clock = Tk()
clock.geometry("1000x500")
clock.config(bg="yellow")
clock.title("**** Digital Clock app ****")