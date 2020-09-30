
import os, sys
import tkinter as tk
from tkinter import filedialog

d = 2
DIRECTORY_NAME = 'modules/of'
def search_file():
    root = tk.Tk()
    root.withdraw()

    file_path = filedialog.askdirectory()
    print(' - Carpeta encontrada en %s' % file_path)
    print(' - Copiando carpeta')

    os.system('mkdir ../modules/of')
    os.system('cp -R %s ../modules/of' % file_path )