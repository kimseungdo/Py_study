from selenium import webdriver

def Trigger_driver(__URL):
        
     
    browser = webdriver.Firefox()
    browser.get(__URL)
    
