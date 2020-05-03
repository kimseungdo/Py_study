from selenium import webdriver


class Web_search:
    
    def __init__(self, __URL):

        self.browser = webdriver.Chrome()
        print("web클래스 생성")
        

    def __del__(self):
        print("web클래스 소멸")
        
    '''
    def Trigger_driver(self, __URL):
        
        #browser = webdriver.Firefox()
        browser.get(__URL)
    '''

class Web_Driver(Web_search):
    pass
