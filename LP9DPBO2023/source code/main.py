from apartemen import Apartemen
from rumah import Rumah
from indekos import Indekos
from tkinter import *
from PIL import Image, ImageTk
import requests
import io


hunians = []
hunians.append(Apartemen("Nelly Joy", 3, 3))
hunians.append(Rumah("Sekar MK", 5, 2))
hunians.append(Indekos("Bp. Romi", "Cahya", "Luar"))
hunians.append(Rumah("Satria", 1, 4))

root = Tk()
root.title("DPBO LP9")
photo_images = []

def show(index, label_frame):
    response = requests.get(hunians[index].get_foto())
    image_data = response.content
    image = Image.open(io.BytesIO(image_data))
    new_width = 100
    new_height = 100
    resized_image = image.resize((new_width, new_height))
    photo = ImageTk.PhotoImage(resized_image)
    photo_images.append(photo)
    image_label = Label(label_frame, image=photo)
    image_label.grid(row=0, column=1)

def details(index):
    top = Toplevel(root)
    top.title("Detail " + hunians[index].get_jenis())

    d_frame = LabelFrame(top, text="Data Residen", padx=10, pady=10)
    d_frame.pack(padx=10, pady=10)

    # d_summary = Label(d_frame, text="Summary: " + hunians[index].get_summary(), anchor="w").grid(row=0, column=0, sticky="w")
    d_summary = Label(d_frame, text="Summary\n" + hunians[index].get_detail() + hunians[index].get_summary() + "\n" + hunians[index].get_dokumen(), anchor="w", justify=LEFT).grid(row=0, column=0, sticky="w")

    btn = LabelFrame(top, padx=0, pady=0)
    btn.pack(padx=10, pady=10)
    b_close = Button(btn, text="Close", command=top.destroy)
    b_close.grid(row=0, column=0)
    b_show = Button(btn, text="Show", command=lambda index=index: show(index, d_frame))
    b_show.grid(row=0, column=1)

def list():
    frame_landing.destroy()
    btn.destroy()
    frame = LabelFrame(root, text="Data Seluruh Residen", padx=10, pady=10)
    frame.pack(padx=10, pady=10)

    opts = LabelFrame(root, padx=0, pady=0)
    opts.pack(padx=10, pady=10)

    b_add = Button(opts, text="Add Data", state="disabled")
    b_add.grid(row=0, column=0)

    b_exit = Button(opts, text="Exit", command=root.quit)
    b_exit.grid(row=0, column=1)

    for index, h in enumerate(hunians):
        idx = Label(frame, text=str(index+1), width=5, borderwidth=1, relief="solid")
        idx.grid(row=index, column=0)

        type = Label(frame, text=h.get_jenis(), width=15, borderwidth=1, relief="solid")
        type.grid(row=index, column=1)

        if h.get_jenis() != "Indekos": 
            name = Label(frame, text=" " + h.get_nama_pemilik(), width=40, borderwidth=1, relief="solid", anchor="w")
            name.grid(row=index, column=2)
        else:
            name = Label(frame, text=" " + h.get_nama_penghuni(), width=40, borderwidth=1, relief="solid", anchor="w")
            name.grid(row=index, column=2)

        b_detail = Button(frame, text="Details ", command=lambda index=index: details(index))
        b_detail.grid(row=index, column=3)


response = requests.get("https://arsitagx-master-article.s3.ap-southeast-1.amazonaws.com/article-photo/1189/rumah-minimalis-di-hoek-2.jpeg")
image_data = response.content
image = Image.open(io.BytesIO(image_data))
new_width = 250
new_height = 250
resized_image = image.resize((new_width, new_height))
photo = ImageTk.PhotoImage(resized_image)
photo_images.append(photo)
frame_landing = LabelFrame(root, text="Landing page", padx=10, pady=10)
frame_landing.pack(padx=10, pady=10)

r_frame = Label(frame_landing, text="SELAMAT DATANG").grid(row=0, column=0)
image_label = Label(frame_landing, image=photo)
image_label.grid(row=1, column=0)

btn = LabelFrame(root, padx=0, pady=0)
btn.pack(padx=10, pady=10)
b_landing = Button(btn, text="Masuk", command=list)
b_landing.grid(row=0, column=0)

root.mainloop()
