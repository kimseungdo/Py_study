# -*- coding: utf-8 -*-
import os
import time
from datetime import date, datetime


from bs4 import BeautifulSoup

from selenium import webdriver
from selenium.webdriver.support.ui import Select

display_info = False
option_onoff_switch = False # On/Off

DRIVER_PATH = os.getcwd() + "\\chromedriver_win32_81version\\chromedriver.exe"
chrome_options = webdriver.ChromeOptions() # 옵션 변수명 설정
if option_onoff_switch == False:

    chrome_options.add_argument("--headless")
    chrome_options.add_argument("--no-sandbox")
    chrome_options.add_argument("--disable-dev-shm-usage")

    driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)        

else:

    driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)

'''
분석단위 1년
금년도 자료 // 전년도 자료
 now_year  // prev_year  += table
<table class="basic alt only-pc center bd-vert" title="아파트 실거래가/매물/시세">
~ </table>
table xpath = /html/body/div[1]/div/div/div[3]/div[5]/div[1]/table[1]

<tbody id="resultList"><tr><td class="tb_bottom" style="font-weight: bold; cursor: pointer; background-color: rgb(255, 255, 255);" 
~~~~ </tbody
tbody xpath = //*[@id="resultList"]
'''

'''
1평 3.3 평방
거래금 단위 1만

<select class="basic" id="selectSigungu" name="selectSigungu" title="자치구 선택">
<option value="11000">자치구 선택
</select>
<select class="basic" id="selectBjdong" name="selectBjdong">
<option value="">동 선택</option></select>

<select class="basic" id="selectYear" name="selectYear">~
</select>
<select class="basic" id="selectBoongi" name="selectBoongi">~
</select>

'''
TU_seoul_gu = ()
TU_gu_dong = ()
def What_time_now():  
    return str('{0.year:04}{0.month:02}{0.day:02}_{0.hour:02}h{0.minute:02}m{0.second:02}s'.format(datetime.now()) )

def get_year():
    return str('{0.year:04}'.format(datetime.now()) )

def get_month():
    return str('{0.month:02}'.format(datetime.now()) )

# 금년도 구간 + 전년도 구간 비교
class Web_Info:
    #### CHECK SYS ####

    

    def __init__(self, url):
        if display_info == True:
            print("web클래스 생성")

        ### Public
        self.url = url
        
        self.TU_class = ("selectSigungu", "selectBjdong",
                            "selectYear", "selectBoongi")

        self.LI_instance = ['노원구', None, #지역구 지역동
                                '2020', '1분기'] #년도 분기
        self.table = None
        ### Private
    def __del__(self):
        print("del")
    
    def Get_table(self):
        driver.get(self.url)
        for a in range(len(self.TU_class)):
                if self.LI_instance[a] == None:
                    continue
                else:
                    self.fast_multiselect(self.TU_class[a], self.LI_instance[a])
        self.web_search()
        time.sleep(2)
        
        self.table = driver.find_element_by_id('resultList')
        #print(table.text)
        
    def web_search(self):
        driver.find_element_by_id('search').click()

    def fast_multiselect(self, element_id, label):
        select = Select(driver.find_element_by_id(element_id))
        select.select_by_visible_text(label)
        #time.sleep(3)