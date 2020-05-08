import os

from selenium import webdriver
from selenium.webdriver.support.ui import Select

display_info = False

chrome_options = webdriver.ChromeOptions() # 옵션 변수명 설정 
chrome_options.folfer = os.getcwd()+"\excel_folder" # 옵션 다운로드 경로 설정

DRIVER_PATH = os.getcwd() + "\chromedriver_win32_81version/chromedriver.exe"

# C:\chromedriver_win32-1\chromedriver


class Web_search:
    
    def __init__(self, url):
        if display_info == True:
            print("web클래스 생성")

        ### Public
        self.url = url

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
    # key : value //
    TU_class = ('selectGubun', 'selectKind',
                    'selectFromMm', 'selectToMn',
                        'selectSigungu','selectBjdong')

    LI_instance = ['매매', '아파트',
                        None, None,
                            '강남구', None]

    deal = {'selectGubun': '매매'}
    kind = {'selectKind' : '아파트'}
    
    fromDay, toDay = {'selectFromMm' : None}, {'selectToMn' : None}
    gu, dong = {'selectSigungu' : '강남구'}, {'selectBjdong' : None}
    
    def __init__(self, url, OnOff):
        if display_info == True:
            print(" Web Driver init ")

        ### Public
        super().__init__(url)
        self.OnOff = OnOff
        
        ### Private
        self.__driver = None

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
                    
            __driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)
            __driver.get(self.url)
            '''
            for option in __driver.find_element_by_id("selectGubun").find_elements_by_tag_name('option'):
                if option.text == '매매':
                    option.click() # select() in earlier versions of webdriver
                    break
            '''
            #if FILE_SIZE == 0:
            '''
            select = Select(__driver.find_element_by_id("selectKind"))
            select.select_by_visible_text('매매')
            '''
            select = Select(__driver.find_element_by_id(deal.keys()))
            select.select_by_visible_text('매매')
            
            #__driver.quit()
            
        elif self.OnOff == False:
            chrome_options.add_argument("--headless")
            chrome_options.add_argument("--no-sandbox")
            chrome_options.add_argument("--disable-dev-shm-usage")

            __driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)        
            __driver.get(self.url)
            #__driver.quit()
            
        else:
            print("Bool type 입력")
            exit()
        

    #### In Browser FUNC ####
    def fast_multiselect(driver, element_id, labels):
        select = Select(driver.find_element_by_id(element_id))
        for label in labels:
            select.select_by_visible_text(label)
    
    def down():
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
    def fast_multiselect(driver, element_id, labels):
        select = Select(driver.find_element_by_id(element_id))
        for label in labels:
            select.select_by_visible_text(label)
    
