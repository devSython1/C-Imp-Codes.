from tkinter import *
from tkinter import ttk
from methods import Mytranslator

app = Tk()
app.geometry('350x520')
app.title("Sython Translate")      #App Title
app.resizable(0,0)
app.config(bg='gray')       #backgrond color of whole window

def get():
    s = from_Lang.get()
    d = to_Lang.get()
    message = sourceText.get(1.0,END)
    translator = Mytranslator()
    text = translator.run(txt=message,src=s,dest=d)
    desText.delete(1.0,END)
    desText.insert(END,text)

appName = Label(app,text='S Y T H O N   T R A N S L A T E',
                font=('roboto',17),bg='black',fg='white',height=3)      #In app Title
appName.pack(side=TOP,fill=BOTH,pady=0)

version = Label(app,text='B E T A   0 . 1 . 5',bg='black',fg='goldenrod1').place(x=250,y=53)    #Version of app

frame = Frame(app).pack(side=BOTTOM)        #Creating frame for textbox(Source)
sourceText = Text(frame,font=('roboto',10),height=11,wrap=WORD)         #creation textbox
sourceText.pack(side=TOP,padx=5,pady=5)

translate_btn = Button(frame,text='Translate',font=('roboto',10,'bold'),
                       fg='white',bg='gray',activebackground='green',relief=GROOVE,command=get)     #Making button to translate
translate_btn.pack(side=TOP,pady=15)

languages = Mytranslator().langs

from_Lang = ttk.Combobox(frame,values=languages,width=10)       #creating dropdown list for Source languages
from_Lang.place(x=30,y=290)
from_Lang.set('-Select Language-')

to_Lang = ttk.Combobox(frame,values=languages,width=10)         #creating dropdown list for Destination languages
to_Lang.place(x=240,y=290)
to_Lang.set('-Select Language-')

frame = Frame(app).pack(side=BOTTOM)        #Creating frame for textbox (Destination)
desText = Text(frame,font=('arial',10),height=11,wrap=WORD)         #creation textbox
desText.pack(side=TOP,padx=5,pady=5)

app.mainloop()