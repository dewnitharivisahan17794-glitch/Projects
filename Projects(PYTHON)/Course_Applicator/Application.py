import tkinter as tk
from tkinter import ttk
import Place_holder
from calendar import *
from tkinter import messagebox
monthname=[month_name[i] for i in range(1,13)]


Choices=tk.Tk()
Choices.title('Choices')
Choices.geometry(f'500x500')
Choices.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")

Name=tk.StringVar()
Age = tk.StringVar()
Address=tk.StringVar()
School_Name=tk.StringVar()
Uni=tk.StringVar()
checkboxes=[tk.StringVar(), tk.StringVar(), tk.StringVar()]
Birthday=[tk.StringVar(), tk.StringVar(), tk.StringVar()]
radiobutton=tk.StringVar()
Gender=tk.StringVar()
Number=tk.StringVar()
Email=tk.StringVar()
Pay=tk.StringVar()
#
canvas = tk.Canvas(Choices)
scrollbar = ttk.Scrollbar(Choices,orient='vertical',command=canvas.yview)
scrollable_frame = ttk.Frame(canvas)
scrollable_frame.bind( "<Configure>", lambda e: canvas.configure(scrollregion=canvas.bbox("all")))
canvas.create_window((0, 0), window=scrollable_frame,anchor="nw")
canvas.configure( yscrollcommand=scrollbar.set)
canvas.pack(side="left", fill="both", expand=True)
scrollbar.pack(side="right", fill="y")
#
lable1=ttk.Label(scrollable_frame, text="Welcome to Choices", font='arial')
lable1.pack()
lable1.configure(foreground='Red')
Place_holder.PLH(scrollable_frame, "Enter Name" , Name)
Place_holder.PLH(scrollable_frame, "Enter Age" , Age)


select_Date=ttk.Label(scrollable_frame, text='Birthday')
select_Date.pack(fill='x',padx=10, pady=10)
birthday_frame=ttk.Frame(scrollable_frame)
birthday_frame.pack(fill='x',padx=10, pady=10)
years=list(range(1980,2027))
year=ttk.Combobox(birthday_frame, values=years, state='readonly', width=8)
year.pack(padx=5,side='left')
months=ttk.Combobox(birthday_frame, values=monthname,state='readonly',width=12)
months.pack(padx=5,side='left')
days=list(range(1,32))
day=ttk.Combobox(birthday_frame,values=days,width=8, state='readonly')
day.pack(side='left',padx=5)


sex=ttk.Label(scrollable_frame, text='Sex')
sex.pack(fill='x',padx=10, pady=10)
gender=ttk.Frame(scrollable_frame)
gender.pack(fill='x', padx=10, pady=10)
male=ttk.Radiobutton(gender, text='Male', value='male', variable=Gender,width=8)
male.pack(side='left', padx=(5,20))
female=ttk.Radiobutton(gender, text='Female', value='female',variable=Gender,width=8)
female.pack(side='left', padx=5)

Place_holder.PLH(scrollable_frame, "Enter your Address" , Address)
Place_holder.PLH(scrollable_frame, "Enter your School Name" , School_Name)
Place_holder.PLH(scrollable_frame, "Enter your University", Uni)
Place_holder.PLH(scrollable_frame, "Enter your Phone Number", Number)
Place_holder.PLH(scrollable_frame, "Enter your Email", Email)

lable2=ttk.Label(scrollable_frame, text="Choose what you wamt to study: ", anchor='w')
lable2.pack(fill='x', padx=10, pady=10)
Checkbox1 = ttk.Checkbutton(scrollable_frame, onvalue='Python', offvalue=' ', variable=checkboxes[0], text="Python")
Checkbox1.pack(anchor='w', padx=200)
Checkbox2 = ttk.Checkbutton(scrollable_frame, onvalue='Java', offvalue=' ', variable=checkboxes[1], text="Java")
Checkbox2.pack(anchor='w', padx=200)
Checkbox3 = ttk.Checkbutton(scrollable_frame, onvalue='C++', offvalue=' ', variable=checkboxes[2], text="C++")
Checkbox3.pack(anchor='w', padx=200)
lable2=ttk.Label(scrollable_frame, text="Choose Level(at one time only can apply one level for all languages): ", anchor='w')
lable2.pack(fill='x', padx=10, pady=10)
Radiobutton1 = ttk.Radiobutton(scrollable_frame, text='Beginner', value=1, variable=radiobutton)
Radiobutton1.pack(anchor='w', padx=200)
Radiobutton2 = ttk.Radiobutton(scrollable_frame, text='Intermediate', value=2, variable=radiobutton)
Radiobutton2.pack(anchor='w', padx=200)
Radiobutton1 = ttk.Radiobutton(scrollable_frame, text='Advance', value=3, variable=radiobutton)
Radiobutton1.pack(anchor='w', padx=200)

payment=ttk.Label(scrollable_frame, text='Payment')
payment.pack(fill='x',padx=10, pady=10)
pay=ttk.Frame(scrollable_frame)
pay.pack(fill='x', padx=10, pady=10)
card=ttk.Radiobutton(pay, text='Card Payment', value='card', variable=Pay,width=8)
card.pack(side='left', padx=(5,20))
paypal=ttk.Radiobutton(pay, text='Paypal', value='female',variable=Pay,width=8)
paypal.pack(side='left', padx=5)
def displaymassege():
    result= messagebox.askyesno("Are you Sure?", "Are you conformed enterd details?")
    if (result):
         sub()

submit=ttk.Button(scrollable_frame,text="Submit", command=displaymassege)
submit.pack()
def sub():
     sub=tk.Toplevel()
     sub.title('Choices')
     sub.geometry(f'500x500')
     sub.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")
     lable=tk.Label(sub, font='arial',text="Your Registation Sucsessfull!", fg='red')
     lable.pack()

Choices.mainloop()