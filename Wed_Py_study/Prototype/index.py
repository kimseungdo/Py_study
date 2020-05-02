'''
실거래 공개시스템 ~~ 실거래가 분석
계약일 기준 정보 시스템
가격변동 / 가격변동률 / 
'''
# -*- coding: utf-8 -*-
import os, time
import requests
import pandas

from bs4 import BeautifulSoup
from openpyxl import load_workbook
from datetime import date, datetime

from Module.browser_control import Trigger_driver as Td

URL = 'http://rtdown.molit.go.kr/'
Down_ROOT = os.getcwd()+"\grond_info"
#<input id="searchFromDt" name="searchFromDt" class="input_search" onchange="javascript:fn_dong_search();" type="text" value="20200401" maxlength="10">
#<input id="searchToDt" name="searchToDt" class="input_search" type="text" value="20200430" maxlength="10">

def What_time_now():  
    day = datetime.now()
    return str('{0.year:04}{0.month:02}{0.day:02}_{0.hour:02}h{0.minute:02}m{0.second:02}s'.format(day) )

prevtime = time.time()
now = datetime.now()

if __name__ == "__main__":
    Td(URL)
    print("걸린시간 : %0.5f" %(time.time() - prevtime) )
