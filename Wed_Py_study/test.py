from nba_api.stats.static import players as NP
from nba_api.stats.static import teams as NT

from nba_api.stats.endpoints import commonplayerinfo as NPC

# Kobe Bean Bryant

PLAYER_NAME = "kobe"

GET_PLAYER_ID = NP.find_players_by_first_name(PLAYER_NAME)[0]['id'] # list in dic
PLAYER_INFO = NPC.CommonPlayerInfo(GET_PLAYER_ID) # class

if __name__ == '__main__':
    #print(NP.find_players_by_first_name(PLAYER_NAME)) # list type
    #print(PLAYER_INFO.get_data_frames()[0])
    print("API에 저장된 모든 선수 : %d" %(len(NP.get_players())) )
    print(PLAYER_INFO.get_data_frames()[1])
