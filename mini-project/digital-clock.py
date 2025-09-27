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

label_hr = Label(clock, text="00", font=("Times New Roman", 60, "bold"), bg="Blue", fg="white")
label_hr.place(x=120, y=50, height=110, width=100)
label_hr_txt = Label(clock, text="hour", font=("Times New Roman", 20, "bold"), bg="Blue", fg="white")
label_hr_txt.place(x=120, y=190, height=30, width=100)

label_min = Label(clock, text="00", font=("Times New Roman", 60, "bold"), bg="Blue", fg="white")
label_min.place(x=340, y=50, height=110, width=100)
label_min_txt = Label(clock, text="Min", font=("Times New Roman", 20, "bold"), bg="Blue", fg="white")
label_min_txt.place(x=340, y=190, height=30, width=100)

label_sec = Label(clock, text="00", font=("Times New Roman", 60, "bold"), bg="Blue", fg="white")
label_sec.place(x=560, y=50, height=110, width=100)
label_sec_txt = Label(clock, text="Sec", font=("Times New Roman", 20, "bold"), bg="Blue", fg="white")
label_sec_txt.place(x=560, y=190, height=30, width=100)

label_am = Label(clock, text="00", font=("Times New Roman", 40, "bold"), bg="Blue", fg="white")
label_am.place(x=780, y=50, height=110, width=100)
label_am_txt = Label(clock, text="AM/PM", font=("Times New Roman", 20, "bold"), bg="Blue", fg="white")
label_am_txt.place(x=780, y=190, height=30, width=100)

label_date = Label(clock, text="00", font=("Times New Roman", 60, "bold"), bg="Blue", fg="white")
label_date.place(x=120, y=270, height=110, width=100)
label_date_txt = Label(clock, text="Date", font=("Times New Roman", 20, "bold"), bg="Blue", fg="white")
label_date_txt.place(x=120, y=410, height=30, width=100)