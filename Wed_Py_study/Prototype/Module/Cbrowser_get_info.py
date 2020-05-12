import os
import time
from datetime import date, datetime


from bs4 import BeautifulSoup

from selenium import webdriver
from selenium.webdriver.support.ui import Select

display_info = False
option_onoff_switch = True # On/Off

DRIVER_PATH = os.getcwd() + "\\chromedriver_win32_81version\\chromedriver.exe"

if option_onoff_switch == False:

    chrome_options = webdriver.ChromeOptions() # 옵션 변수명 설정
    chrome_options.add_argument("--headless")
    chrome_options.add_argument("--no-sandbox")
    chrome_options.add_argument("--disable-dev-shm-usage")

    driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)        

else:

    driver = webdriver.Chrome(DRIVER_PATH, chrome_options = chrome_options)

'''
분석단위 1년
금년도 자료 // 전년도 자료
<table class="basic alt only-pc center bd-vert" title="아파트 실거래가/매물/시세">
~ </table>
'''

'''
1평 3.3 평방
거래금 단위 1만

<select class="basic" id="selectSigungu" name="selectSigungu" title="자치구 선택"><option value="11000">자치구 선택</option><option value="11680" selected="selected">강남구</option><option value="11740">강동구</option><option value="11305">강북구</option><option value="11500">강서구</option><option value="11620">관악구</option><option value="11215">광진구</option><option value="11530">구로구</option><option value="11545">금천구</option><option value="11350">노원구</option><option value="11320">도봉구</option><option value="11230">동대문구</option><option value="11590">동작구</option><option value="11440">마포구</option><option value="11410">서대문구</option><option value="11650">서초구</option><option value="11200">성동구</option><option value="11290">성북구</option><option value="11710">송파구</option><option value="11470">양천구</option><option value="11560">영등포구</option><option value="11170">용산구</option><option value="11380">은평구</option><option value="11110">종로구</option><option value="11140">중구</option><option value="11260">중랑구</option></select>
<input type="text" class="basic search-mg-l5 hasDatepicker" id="changeBgnde" name="changeBgnde" title="분기선택" readonly="readonly">
<input type="text" class="basic hasDatepicker" id="changeEndde" name="changeEndde" title="분기선택" readonly="readonly">

'''

def What_time_now():  
    day = datetime.now()
    return str('{0.year:04}{0.month:02}{0.day:02}_{0.hour:02}h{0.minute:02}m{0.second:02}s'.format(day) )


# 금년도 구간 + 전년도 구간 비교
class Web_Info:
    #### CHECK SYS ####

    table = None

    def __init__(self, url):
        if display_info == True:
            print("web클래스 생성")

        ### Public
        self.url = url
        
        self.TU_class = ("selectGubun", "selectKind",
                            "selectFromMm", "selectToMn",
                                "selectSigungu", "selectBjdong")

        self.LI_instance = ['매매', '아파트',
                                None, None,
                                    '강남구', None]
        
        ### Private
        