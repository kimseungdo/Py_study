# -*- coding: utf-8 -*-
'''
실거래 공개시스템 ~~ 실거래가 분석
계약일 기준 정보 시스템
가격변동 / 가격변동률 / 
'''
import os, time
import requests
import pandas


from openpyxl import load_workbook
from datetime import date, datetime


from multiprocessing import Process, Queue

from Module.Cinit_file import check_sys # 폴더 파일상태 확인
from Module.Cbrowser_control import Web_Driver # 자료 다운로드
from Module.Cbrowser_get_info import Web_Info # 웹에서 즉각 검색

from Module.Canal_apt import File_anal, Web_anal # 파일분석 웹분석

prevtime = time.time()
now = datetime.now()


APT_URL = 'http://land.seoul.go.kr/land/rtms/rtmsApartment.do'
DOWN_URL = 'http://land.seoul.go.kr/land/rtms/transactionInfo.do'


def What_time_now():  
    day = datetime.now()
    return str('{0.year:04}{0.month:02}{0.day:02}_{0.hour:02}h{0.minute:02}m{0.second:02}s'.format(day) )


    #print(dir(WD)) #  사용가능 첨자 확인 
    #print(WD.__dict__) # 클래스 관계 확인

def main():
    CS = check_sys()
    CS.Folder_check()
    del CS
    '''
    WD = Web_Driver(DOWN_URL, True)
    WD.Show_Browser_set()
    WD.Trigger_driver()
    
    #print("%s %s" %(WD.deal, WD.kind))
    del WD 
    '''
    
    '''
    we = Web_Info(APT_URL)
    we.Get_table()
    
    del we
    '''
    File_anal.Get_File_list()

if __name__ == "__main__":
    main()
    print("걸린시간 : %0.5f" %(time.time() - prevtime) )
