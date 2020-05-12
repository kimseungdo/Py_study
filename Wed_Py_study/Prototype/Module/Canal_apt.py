# -*- coding: utf-8 -*-
import os
import time
import openpyxl as opxl
import matplotlib.pyplot as plt

FOLDER_PATH = os.getcwd()+'\\excel_folder'
LI_EXCEL_FILE = None


class File_anal:
    
    def __init__(self):
        print("init")
        self.

    def __del__(self):
        print("del")
    
    @staticmethod
    def Get_File_list():
        LI_EXCEL_FILE = [file for file in os.listdir(FOLDER_PATH) if file.endswith(".xls")]
        print(LI_EXCEL_FILE)

    
class Web_anal:
    pass