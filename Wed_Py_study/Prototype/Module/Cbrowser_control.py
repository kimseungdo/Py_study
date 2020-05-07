from selenium import webdriver
from selenium.webdriver.support.ui import Select

display_info = False
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
            __driver = webdriver.Chrome('C:/chromedriver_win32_81version/chromedriver.exe')
            __driver.get(self.url)
            '''
            for option in __driver.find_element_by_id("selectGubun").find_elements_by_tag_name('option'):
                if option.text == '매매':
                    option.click() # select() in earlier versions of webdriver
                    break
            '''    
            #__driver.quit()
            
            
        elif self.OnOff == False:
    
            chrome_options = webdriver.ChromeOptions()
            chrome_options.add_argument("--headless")
            chrome_options.add_argument("--no-sandbox")
            chrome_options.add_argument("--disable-dev-shm-usage")

            __driver = webdriver.Chrome('C:/chromedriver_win32_81version/chromedriver.exe', chrome_options = chrome_options)        
            __driver.get(self.url)
            #__driver.quit()
            
        else:
            print("Bool type 입력")
            exit()
        

'''
listbox ALL click

거래유형 / 건물유형 /       기간       /   주소 구 ~ 동
   deal  /   kind   /  fromDay toDay   /     gu  dong
   
'''
class Web_input_instance(Web_Driver):
    #### CHECK SYS ####
    deal = None
    kind = None
    fromDay, toDay = None, None # 2006.01 = 200601  최대 1년단위 조회 
    gu, dong = None, None
    
    def __init__(self):
        if display_info == True:
            print(" Web input instance init ")

        ### Public
        
        ### Private

    def __del__(self):
        if display_info == True:
            print(" Web input instance destroy ")

    #### FUNC ####
    def 
