from selenium import webdriver

# C:\chromedriver_win32-1\chromedriver
display_info = True

class Web_search:
    
    def __init__(self, url):
        if display_info == True:
            print("web클래스 생성")
        self.url = url
        
    def __del__(self):
        if display_info == True:
            print("web클래스 destory")

    def Show_URL(self):
        print("url주소 : %s" %self.url)
        #return self.url




        
class Web_Driver(Web_search):

    def __init__(self, url, OnOff):
        if display_info == True:
            print(" Web Driver init ")
        super().__init__(url)
        self.OnOff = OnOff

    def __del__(self):
        if display_info == True:
            print("Web Driver destory")

  
    def Show_Browser_set(self):
        super(Web_Driver, self).Show_URL()
        print("브라우저 OnOff상태 : %s" %self.OnOff)
        
    #### CHECK SYS ####
        
    def Trigger_driver(self):
        if display_info == True:
            print("웹드라이버 상속 클래스 실행")

        
        if self.OnOff == True:
            __driver = webdriver.Chrome('C:/chromedriver_win32_81version/chromedriver.exe')
            __driver.get(self.url)
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
        
