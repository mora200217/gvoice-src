'''
    GVoice Configuración de proyecto
'''
import platform, os 
from ofDownloader import is_of_installed   

if __name__ == "__main__":
    print('Iniciando configuración -------')
    
    plt = platform.system() # OS del sistema 

    ## Windows 
    if plt == 'Windows': 
        os.system('cls')
        print(' - Windows reconocido...')
    elif plt == 'Darwin':
        os.system('clear')
        print(' - MacOs reconocido...')
    else: 
        print(' - Sistema no reconocido...')

    ## Descarga de 
    is_of_installed()


