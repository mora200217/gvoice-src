import platform, os 
import webbrowser

from fileSearch import search_file

def is_of_installed(*args, **kwargs):
    """
    Verifica que la carpeta de of se encuentre en el directorio local, 
    y tenga los archivos válidos. 
    """
    is_valid_input = False
    
    while(not is_valid_input):
        asw = input(" - ¿Está OF en tu sistema instalado? (y/n)")
        is_valid_input = True
        if asw.capitalize() == 'N' or asw.capitalize() == 'NO':
            asw = input('* Desea descargar los archivos ahora mismo? (y/n)')
            if asw == 'n':
                print('- Cancelando configuración de proyecto')
                print('- Hasta la vista baby')
                return False
            print('- Procediendo con la descarga ')

            plt = platform.system()
            ## Descarga del zip
            if plt == 'Windows': 
                print('- Buscando VS2017 release ')
                webbrowser.open('https://openframeworks.cc/versions/v0.11.0/of_v0.11.0_vs2017_release.zip')
            elif plt == 'Darwin': 
                print('- Buscando OSX realease ')
                webbrowser.open('https://openframeworks.cc/versions/v0.11.0/of_v0.11.0_osx_release.zip')
            
            return False 
        
        elif asw.capitalize() == 'Y' or asw.capitalize() == 'YES':
            print(' - Localiza la carpeta con tu release')
            search_file()


            
            
        else:
            print(' - Ingresa un valor válido!')
            is_valid_input = False
     