import tkinter as tk
from tkinter import ttk
from Place_holder import PLH
import random

Game = tk.Tk()
Game.title("GAME :)")
Game.iconbitmap(r"C:\Users\USER\OneDrive\Documents\GitHub\Projects\Projects(PYTHON)\guesser\game.ico")
Game.geometry(f'500x500')
number = tk.StringVar()
radio =tk.StringVar()
label1 = tk.Label(Game, font='arial',fg='red', text="Welcome")
label1.pack()
frame=ttk.Frame(Game, width=12)
frame.pack( padx=100, pady=10,)
lable2=tk.Label(frame, text="Choose Level:")
lable2.pack(pady=10)

radio1=ttk.Radiobutton(frame, text="Easy", variable=radio, value="Easy")
radio1.pack(padx=5, side='left')
radio2=ttk.Radiobutton(frame, text="Hard", variable=radio, value="Hard")
radio2.pack(padx=5, side='left')
radio3=ttk.Radiobutton(frame, text="Insane", variable=radio, value="Insane")
radio3.pack(padx=5, side='left')
radio4=ttk.Radiobutton(frame, text="Impossible", variable=radio, value="Impossible")
radio4.pack(padx=5, side='left')

def B():
    global Num

    if radio.get() == "Easy":
        lable3.config(text="Enter Number between 1-10")
        Num = random.randint(1, 10)
        print(Num)
    elif radio.get() == "Hard":
        lable3.config(text="Enter Number between 1-100")
        Num = random.randint(1, 100)
        print(Num)
    elif radio.get() == "Insane":
        lable3.config(text="Enter Number between 1-500")
        Num = random.randint(1, 500)
        print(number)

    elif radio.get() == "Impossible":
        lable3.config(text="Enter Number between 1-1000")
        Num = random.randint(1, 1000)
        print(Num)


button2 = ttk.Button(Game, text="Select", command=B)
button2.pack(pady=10)

lable3=ttk.Label(Game,text="")
lable3.pack()

Entry2=PLH(Game, "Enter Number Here", number)

attempts = 0


label4 = tk.Label(Game,text='')
label4.pack()
def command():
    global attempts
    attempts += 1
    try:
        guess = int(number.get())
    except ValueError:
        label4.config(text="Please Enter a Number In Given Range", fg='Red')
        number.set("")
    
    if guess == Num:
        label4.config(text=f"You got it in {attempts} attempts")
    else:
        label4.config(text=f"TRY AGAIN!")
        number.set("")
    

button1=ttk.Button(Game, text='Submit', command=command)
button1.pack()
Game.bind("<Return>", lambda event: command())
Game.mainloop()