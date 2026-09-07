import tkinter as tk
from tkinter import ttk
from Place_holder import PLH

Game = tk.Tk()
Game.title("GAME :)")
Game.iconbitmap(r"C:\Users\USER\OneDrive\Documents\GitHub\Projects\Projects(PYTHON)\guesser\game.ico")
Game.geometry(f'500x500')
number = tk.StringVar()
radio =tk.StringVar()
label1 = tk.Label(Game, font='arial',fg='red', text="Welcome")
label1.pack()
frame=ttk.Frame(Game, width=12)
frame.pack(fill='x', padx=100, pady=10)
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
    if radio.get() == "Easy":
        lable3.config(text="Enter Number between 1-10")

    elif radio.get() == "Hard":
        lable3.config(text="Enter Number between 1-100")

    elif radio.get() == "Insane":
        lable3.config(text="Enter Number between 1-500")

    elif radio.get() == "Impossible":
        lable3.config(text="Enter Number between 1-1000")


button2 = ttk.Button(Game, text="Select", command=B)
button2.pack(pady=10)

lable3=ttk.Label(Game,text="")
lable3.pack()

Entry2=PLH(Game, "Enter Number Here", number)

#def command():


#button1=ttk.Button(Game, text='Submit', command=)
Game.mainloop()