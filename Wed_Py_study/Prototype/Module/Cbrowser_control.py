from selenium import webdriver

# C:\chromedriver_win32-1\chromedriver

class Web_search:
    
    def __init__(self, url):
        print("web클래스 생성")
        self.url = url
        
    def __del__(self):
        print("web클래스 소멸")

    def Get_URL(self):
        print("url주소 : %s" %url)
        return self.url




        
class Web_Driver(Web_search):
    def __init__(self, url, OnOff):
        print(" Web Driver init ")
        super().__init__(url)
        self.__OnOff = OnOff
        
    def __del__(self):
        print("Web Driver클래스 소멸")

        
    def Trigger_driver(self):
        print("웹드라이버 상속 클래스 실행")

        if self.__OnOff == True:
            print("브라우저 On모드")
            
            __driver = webdriver.Chrome('C:/chromedriver_win32_81version/chromedriver.exe')
            __driver.get(__url)
            __driver.quit()
            
        elif self.__OnOff == False:
            print("브라우저 Off모드")
            
    
            chrome_options = webdriver.ChromeOptions()
            chrome_options.add_argument("--headless")
            chrome_options.add_argument("--no-sandbox")
            chrome_options.add_argument("--disable-dev-shm-usage")

            __driver = webdriver.Chrome('C:/chromedriver_win32_81version/chromedriver.exe', chrome_options = chrome_options)        
            __driver.get(url)
            __driver.quit()
        else:
            print("Bool type 입력")
            exit()
