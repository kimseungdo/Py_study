import os

display_info = False
PATH = os.getcwd()+"/"

class check_sys:
    
    def __init__(self):
        if display_info == True:
            print("check sys init")
            
        self.Folder_list = ['excel_folder']
        self.File_list = []
        
    def __del__(self):
        if display_info == True:
            print("check sys des")
    
    def File_check():
        pass

    def Folder_check(self):
        try:
            for F in self.Folder_list:
                if (os.path.exists( PATH+F )) == False: #존재한다면
                    os.makedirs( PATH+F )
                    
                else:
                    print(" ")
                    
        except:
            if OSError.errno != OSError.filenameerrno.EEXIST:
                print("Failed to create directory!!!!!")
                raise
            
