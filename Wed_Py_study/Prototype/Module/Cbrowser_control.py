# -*- coding: utf-8 -*-
import os
import time

from selenium import webdriver
from selenium.webdriver.support.ui import Select

display_info = False
option_onoff_switch = False # On/Off

DOWNLOAD_FOLDER_PATH = os.getcwd()+"\\excel_folder"
prefs = {"download.default_directory" : DOWNLOAD_FOLDER_PATH}

chrome_options = webdriver.ChromeOptions() # 옵션 변수명 설정 
chrome_options.add_experimental_option("prefs", prefs)
DRIVER_PATH = os.getcwd() + "\\chromedriver_win32_81version\\chromedriver.exe"

if option_onoff_switch == False:
    driver = None
    
else:
    driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)

driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)        

# C:\chromedriver_win32-1\chromedriver


class Web_search:

    def __init__(self, url):
        if display_info == True:
            print("web클래스 생성")

        ### Public
        self.url = url
        '''
        self.TU_class = ("selectGubun", "selectKind",
                    "selectFromMm", "selectToMn",
                        "selectSigungu", "selectBjdong")

        self.LI_instance = ['매매', '아파트',
                                None, None,
                                    '강남구', None]
        '''
        ### Private
        
    def __del__(self):
        if display_info == True:
            print("web클래스 destory")

    #### Func ####
    def Show_URL(self):
        print("url주소 : %s" %self.url)
        #return self.url
        

         
class Web_Driver(Web_search):
    #### CHECK SYS ####
    FILE_SIZE = 10
    
    def __init__(self, url, OnOff):
        if display_info == True:
            print(" Web Driver init ")

        ### Public
        super().__init__(url)
        #super().__init__(TU_class, LI_instance)
        
        self.OnOff = OnOff
        self.TU_class = ("selectGubun", "selectKind",
                            "selectFromMm", "selectToMn",
                                "selectSigungu", "selectBjdong")

        self.LI_instance = ['매매', '아파트',
                                None, None,
                                    '강남구', None]

        ### Private
        #self.__driver = None

    def __del__(self):
        if display_info == True:
            print("Web Driver destory")

    def Show_Browser_set(self):
        super(Web_Driver, self).Show_URL()
        print("브라우저 OnOff상태 : %s" %self.OnOff)

    #### Func ####
    def Trigger_driver(self):
        
        if display_info == True:
            print("웹드라이버 상속 클래스 실행")

        
        if self.OnOff == True:
            #__driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)
            #driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options) 
            driver.get(self.url)
            
            for a in range(len(self.TU_class)):
                if self.LI_instance[a] == None:
                    continue
                else:
                    self.fast_multiselect(self.TU_class[a], self.LI_instance[a])

            self.down()
            #__driver.quit()
            
        elif self.OnOff == False:
            chrome_options.add_argument("--headless")
            chrome_options.add_argument("--no-sandbox")
            chrome_options.add_argument("--disable-dev-shm-usage")

            
            #driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options) 
            driver.get(self.url)
            
            for a in range(len(self.TU_class)):
                if self.LI_instance[a] == None:
                    continue
                else:
                    self.fast_multiselect(self.TU_class[a], self.LI_instance[a])


            #__driver.quit()
            

        else:
            print("Bool type 입력")
            exit()


    #### In Browser FUNC ####
    #@staticmethod
    def fast_multiselect(self, element_id, label):
        select = Select(driver.find_element_by_id(element_id))
        select.select_by_visible_text(label)
        #time.sleep(3)

    @staticmethod
    def down():
        '''
        <input type="button" class="btn dark mg-t15"
         style="width:130px" id="excel" value="다운로드">
        '''
        driver.find_element_by_id('excel').click()
        print("다운로드")

    

class Web_input_instance:
    #### CHECK SYS ####    
    def __init__(self):
        if display_info == True:
            print(" Web input instance init ")

        ### Public
        
        ### Private

    def __del__(self):
        if display_info == True:
            print(" Web input instance destroy ")

    #### FUNC ####
    @staticmethod
    def fast_multiselect(driver, element_id, labels):
        select = Select(driver.find_element_by_id(element_id))
        for label in labels:
            select.select_by_visible_text(label)
    
